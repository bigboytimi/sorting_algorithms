#include <stdio.h>
#include "sort.h"

/**
 * swap - swap two values
 * @xp: first value
 * @yp: second value
 *
 * Return: swapped values
 */

void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}


/**
 * selection_sort - algorithm to sort an array
 * @array: array of unsorted values
 * @size: size of array
 *
 * Return: sorted array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min != i)
			swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
