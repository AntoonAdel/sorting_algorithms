#include "sort.h"

/**
 * _swap - swaps two values in an array
 * @array: data to sort
 * @mn: first value
 * @z: second value
 * @size: size of data
 * Return: No Return
 */

void _swap(int *array, int mn, int z, int size)
{
	int temp;

	if (array[mn] != array[z])
	{
		temp = array[mn];
		array[mn] = array[z];
		array[z] = temp;
		print_array(array, size);
	}
}

/**
 * partition - sorts a partition of data in relation to a mx
 * @array: data to sort
 * @min: Left wall
 * @max: right wall
 * @size: size of data
 * Return: New Pivot
 */

int partition(int *array, int min, int max, size_t size)
{
	int mn = min, z, mx  = array[max];

	for (z = min; z <= max; z++)
	{
		if (array[z] < mx)
		{
			_swap(array, mn, z, size);
			mn++;
		}
	}
	_swap(array, mn, max, size);

	return (mn);
}

/**
 * quicksort -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Lomuto partition scheme
 * @array: data to sort
 * @min: Left wall
 * @max: right wall
 * @size: size of data
 * Return: No Return
 */

void quicksort(int *array, int min, int max, size_t size)
{
	int position;

	if (min < max)
	{
		position = partition(array, min, max, size);
		quicksort(array, min, position - 1, size);
		quicksort(array, position + 1, max, size);
	}
}

/**
 * quick_sort -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Lomuto partition scheme
 * @array: data to sort
 * @size: size of data
 * Return: No Return
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
