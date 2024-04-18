#include "sort.h"

/**
 * bubble_sort - Sorts an array using bubble sort algorithm.
 * @array: Given array
 * @size: Size of the array
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] >= array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (!swap)
			break;
	}
}
