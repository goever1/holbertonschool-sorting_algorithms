#include "sort.h"

/**
 * selection_sort - it sorts an aray in ascending order using
 * selection sort algorithm
 * @array: pointer to an array
 * @size: size of tha array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min;
	int temp;

	if (!array || size < 2)
		return;

	for (; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
