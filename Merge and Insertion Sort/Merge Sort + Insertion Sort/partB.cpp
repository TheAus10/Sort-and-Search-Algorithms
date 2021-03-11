// NAME: AUSTIN REEVES
// EUID: AWR0047

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>
#include "mergeSort.h"
using namespace std;

int main(){

	string line = "";		// holds line that is read in

	ifstream fin;			// file input
	ofstream fout;			// file output
	
	fin.open("data1.txt");
	fout.open("out1.txt");
	
	if(fin.is_open())
	{
		// reading in from file and storing into array
		while(getline(fin, line))
		{
			stringstream s(line);
			double list[500];
			int SIZE = 0;
			double temp;
			
			while(s >> temp)
			{
				list[SIZE++] = temp;
			}
			 
			
			mergeSort(list, 0, SIZE - 1);
			
			for(int i = 0; i < SIZE; i++)
			{
				fout << list[i] << " ";
			}
			fout << endl;
		}
	}
	else
	{
		cout << "Unable to open file." << endl;
	}
	
	fout.close();
	fin.close();

	return 0;
}
