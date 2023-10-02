#include "sort.h"
/**
 * shell_sort - sort array in ascending order
 * @array: array iterated for the sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1, i, j;
	int iterator;

	if (size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			iterator = array[i];
			j = i;
			while (j >= gap && array[j - gap] > iterator)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = iterator;
		}
		print_array(array, size);
		gap /= 3;
	}
}
