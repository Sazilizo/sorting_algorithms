#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j = 0, idx = 0;
	int axl = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}
		if (idx != i)
		{
			axl = array[i];
			array[i] = array[idx];
			array[idx] = axl;
			print_array(array, size);
		}
	}
}
