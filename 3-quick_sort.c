#include "sort.h"

/**
 * lomuto - quicksort recursive function
 * @a: array to sort
 * @min: lowest index
 * @max: highest index
 * @size: size of the array
 */
void lomuto(int *a, int min, int max, int size)
{
int x, i, j, temp;
if (min < max)
{
	x = a[max];
	i = min;
	j = min;
	while (j < max)
	{
		if (a[j] <= x)
		{
			if (i != j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				print_array(a, size);
			}
			i++;
		}
	j++;
	}
	if (i != max)
	{
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		print_array(a, size);
	}
	lomuto(a, min, i - 1, size);
	lomuto(a, i + 1, max, size);
}
}

/**
 * quick_sort - sorts array in ascending order
 * @array: numbers for sorting
 * @size: size of array for sorting
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
	return;
lomuto(array, 0, size - 1, size);
}
