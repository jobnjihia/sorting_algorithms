#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: pointer to array of intengers
 * @size: size pf array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, ind, mini = 0;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			mini = array[i];
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < mini)
				{
					mini = array[j];
					ind = j;
				}
			}
			if (mini != array[i])
			{
				temp = array[i];
				array[i] = mini;
				array[ind] = temp;
				print_array(array, size);
			}
		}
	}
}
