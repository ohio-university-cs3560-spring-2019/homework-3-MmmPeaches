#include <iostream>
#include <vector>
#include <cmath>


double deviation( int a[], int SIZE)//SIZE is the number of elements in the list
{
	double sum;	

	for(size_t i = 0; i < SIZE; i++)
	{
		sum += a[i];//we find the sum by adding together each element by running the loop till SIZE
	} 
	double mean = sum /= SIZE;
	double stddev = 0;
	for(size_t i = 0; i < SIZE; i++)
	{
		stddev += ((a[i] - mean) * (a[i] - mean)); 
	}	

	stddev /= SIZE;
	
	if( stddev == 0)//here the stddev was being set to 0 with =, so I changed it too ==
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}
