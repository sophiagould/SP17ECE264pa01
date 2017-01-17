#ifdef SELECTION_SORT
#include "pa01.h"
void selectSort(int * arr, int size)
	//arr : the array to be sorted
	//size : the number of elements in the array

	// In each iteration, the number of elements to be sorted shrinks by one
	// i.e., one element is at the correct position.
	//
	// Among the remaining elements, find the smallest value and put it 
	// before the other unsorted elements
{
	int least;
	int new;
	for (int i = 0; i < size; i++)
	{
		least = i;
		for(int n = i + 1; n <= size; n++)
		{
			if(arr[n] < arr[least])
			{
				least = n;
			}
		}
		new = arr[i];
		arr[i] = arr[least];
		arr[least] = new;
	}
	return;
}
#endif
