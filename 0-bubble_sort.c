#include "sort.h"

/**
 * bubble_sort - it sorts an array in asecending order using bubble sort
 * @array: it is a pointer to an array
 * @size: it is the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp = 0;

	if (!array || size < 2)
		return;

	for (; i < size - 1; i++)
	{
		for (; j < size - 1; j++)
		{
			if (array[j] > array[j +1])
			{
				temp = array[i];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		print_array(array, size);
	}
}
