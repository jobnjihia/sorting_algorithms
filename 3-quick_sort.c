#include "sort.h"
/**
 * split - split array putting for-right positioning
 * @array: unsorted array of integers
 * @size: size of array
 * @lower_bd: first index of the array
 * @upper_bd: last index of array
 * @top: last index of array
 * @Return: index of pivot
 */
int split(int *array, size_t size, int lower_bd, int top)
{
	int mini_count = lower_bd - 1;
	int count = lower_bd;
	int pivot = array[top], temp;

	for (; count < top; count++)
	{
		if (array[count] <= pivot)
		{
			mini_count++;
			temp = array[mini_count];
			array[count] = temp;
			if (mini_count != count && array[count] != array[mini_count])
				print_array(array, size);
		}
	}
	mini_count++;
	temp = array[mini_count];
	array[mini_count] = array[top];
	array[top] = temp;
	if (mini_count != count)
		print_array(array, size);
	return (mini_count);
}
/**
 * recursive_sort - sort recursively over array
 * @array: Array of unsorted algorithms
 * @size: size of the array
 * @lower: first index of the array
 * @upper: last index of the array
 */
void recursive_sort(int *array, size_t size, int lower, int upper)
{
	int pivot_index;

	if (lower < upper)
	{
		pivot_index = split(array, size, lower, upper);
		recursive_sort(array, size, lower, pivot_index - 1);
		recursive_sort(array, size, pivot_index + 1, upper);
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0, upper = size - 1;

	if (array != NULL && size >= 2)
	{
		recursive_sort(array, size, low, upper);
	}
}
