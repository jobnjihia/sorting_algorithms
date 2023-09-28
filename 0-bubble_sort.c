#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array elements sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t m, n;
	int temp;

	if (size < 2)
		return;

	else
	{
		for (m = 0; m < size - 1; m++)
		{
			for (n = 0; n < size - n - 1; n++)
			{
				if (array[n] > array[n + 1])
				{
					temp = array[n];
					array[n] = array[n + 1];
					array[n + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
