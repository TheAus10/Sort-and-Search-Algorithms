# Merge and Insertion Sort

### Overview
This project has two parts, Part A and Part B.
Part A sorts a series of numbers using only a Merge Sort algorithm. Part B sorts a series of numbers using a Merge Sort algorithm until the size is 8 or less and then switches to use an Insertion Sort algorithm the rest of the way in order to speed up the time complexity. 

Both parts will take in a data file named "data1.txt" that contains the numbers to be sorted and write the output to "out1.txt". Each line is a set of numbers to read in. They will read in a line, sort those numbers, write to the output file, and then move on to the next line of the input file and repeat.

Data1.txt contains a space sperated list of numbers. Each set of numbers can be a maximum of 500 numbers. 

#### Merge Sort Algorithm
Divides the array of data into an upper and lower half and recursively calls the merge sort function for each half. Once done, each half is then put into a merge function that puts the individual pieces together back into the main array. This runs until all pieces of the array are merged back together.

#### Insertion Sort Algorithm
Compares each number in an array to the number in front of it. If the number in front is bigger, that number is moved back a position in the array. This loops until the program has made its way through each index of the array.

### To run
#### Part A
Part A can be compiled using the command `g++ mergeSort.cpp partA.cpp`. This will generate an executable that can be ran to use the program. Ensure that you have the data1.txt in the same directory so the program can read in the sets of numbers.

#### Part B
Part B can be compiled using the command `g++ insertionSort.cpp partB.cpp`. This will generate an executable that can be ran to use the program. Ensure that you have the data1.txt in the same directory so the program can read in the sets of numbers.
