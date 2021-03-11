#include "mergeSort.h"

void mergeSort(double list[], int l, int h)
{
	if (l < h)
	{
		int m = (l + h) / 2;
		mergeSort(list, l, m);
		mergeSort(list, m+1, h);
	
		merge(list, l, m, h);
	}
}

void merge(double list[], int l, int m, int h)
{
	// setting the upper and lower ranges of the array
	int lowerRange = m - l + 1;
	int upperRange = h - m;	
	
	// using ranges to make temp arrays
	double lowerHalf[lowerRange];
	double upperHalf[upperRange];

	// copying data into temp arrays
	for(int i = 0; i < lowerRange; i++)
	{
		lowerHalf[i] = list[l+i];
	}
	for(int i = 0; i < upperRange; i++)
	{
		upperHalf[i] = list[m + 1 + i];
	}

	int i1 = 0;	// index for lower temp array
	int i2 = 0;	// index for upper temp array
	int i3 = l;	// index of original array starting at lower bound

	// merging pieces from temp array back into main array
	while(i1 < lowerRange && i2 < upperRange)
	{
		if(lowerHalf[i1] <= upperHalf[i2])
		{
			list[i3] = lowerHalf[i1];
			i1++;
		}
		else
		{
			list[i3] = upperHalf[i2];
			i2++;
		}
		i3++;
	}

	// copying any remaining pieces into array
	while(i1 < lowerRange)
	{
		list[i3] = lowerHalf[i1];
		i1++;
		i3++;
	}
	while(i2 < upperRange)
    {
		list[i3] = upperHalf[i2];
        i2++;
        i3++;
    }
}
