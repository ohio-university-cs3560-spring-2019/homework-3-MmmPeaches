#include <iostream>
#include <vector>
#include <cmath>


double deviation( int a[], int SIZE)
{
	double sum;	

	for(size_t i = 0; i < SIZE; i++)
	{
		sum += a[i];
	} 
	double mean = sum /= SIZE;
	double stddev = 0;
	for(size_t i = 0; i < SIZE; i++)
	{
		stddev += ((a[i] - mean) * (a[i] - mean)); 
	}	

	stddev /= SIZE;
	
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}
