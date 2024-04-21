#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - main func
 * @array: array
 * @size_t: size of array
*/
void bubble_sort(int *array, size_t size);
{
	int i, temp;
	int swapped = 0;

	do
	{
		swapped = 0;
		for (i = 1; i <= size; i++)
		{
			if (array[i] < array[i - 1])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swapped = 1;
			}
		}
	}
	while(swapped);
}
