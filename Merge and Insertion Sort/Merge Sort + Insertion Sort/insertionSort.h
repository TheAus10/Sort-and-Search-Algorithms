
// Austin Reeves awr0047

void mergeSort(double list[], int l, int h);
	// takes in an array of numbers
	// uses a recursive merge sort to sort the numbers

void merge(double list[], int l, int m, int h);
	// takes in an array, the upper and lower bound, and the middle number
	// creates temp arrays to hold data until merged into initial array
	
void insertionSort(double list[], int h);
	// takes in an array and the upper bound of it
	// uses a key variable to check every index of the array against
	// and moves those values that are greater than it to behind it in the array
