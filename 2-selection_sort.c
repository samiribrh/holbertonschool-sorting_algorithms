#include "sort.h"

/**
 * selection_sort - sorting array elements by ascending order
 *
 * @array: list of numbers
 * @size: number of elements in array
 *
 *
 *
 */


void selection_sort(int *array, size_t size)
{
size_t x = 0, z, y;
int temp;

while (x < size)
{
	z = x;
	y = x + 1;
	while (y < size)
	{
		if (array[y] < array[z])
			z = y;
		y++;
	}
	if (z != x)
	{
		temp = array[z];
		array[z] = array[x];
		array[x] = temp;
		print_array(array, size);
	}
	x++;
}
}
