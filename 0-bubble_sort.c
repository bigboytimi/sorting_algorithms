#include <stdio.h>
#include "sort.h"

/**
 * swap - swap two values
 *
 * @xp: first value
 * @yp: second value
 *
 * Return: Sorted value
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - algorithm to sort an unsorted array
 *
 * @array: an array of an unsorted array
 * @size: size of the array
 *
 * Return: A sorted array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
