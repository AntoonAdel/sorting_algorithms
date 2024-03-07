#include "sort.h"

/**
 * bubble_sort - Function sorts any array of integers
 * using bubble sort algorithm
 * @array: array of integers
 * @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
    int tmp;
    size_t repeat, sorting;

    if (array == 0 || size == 0)
        return;

    repeat = 0;
    while (repeat < size)
    {
        for (sorting = 0; sorting < size - 1; sorting++)
        {
            if (array[sorting] > array[sorting +1])
            {
                tmp = array[sorting];
                array[sorting] = array[sorting + 1];
                array[sorting + 1] = tmp;
                print_array(array, size);
            }
        }
        repeat++;
    }
}