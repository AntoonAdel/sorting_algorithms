#include "sort.h"

/**
 * selection_sort - function that sort array by selection sort
 * @array: the array to be sorted
 * @size: the number of elemnts in the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
size_t num1, num2, position;
int min, swap = 0;

	if (size < 2)
		return;

	for (num1 = 0; num1 < size; num1++)
	{
		min = array[num1];
		position = num1;

		for (num2 = num1 + 1; num2 < size; num2++)
		{
			if (array[num2] < min)
			{
				min = array[num2];
				position = num2;
				swap = 1;
			}
		}
		array[position] = array[num1];
		array[num1] = min;

		if (swap)
			print_array(array, size), swap = 0;
	}
}
