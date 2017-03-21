// hello world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

int main()

{
	int i, j;
	cout << "Hello World!  I am pranjal";
	cout << "\n";
	cout << "\n pattern\n";
	for ( i = 1; i <= 5; i++)
	{
		{for (j = 1; j <= i; j++)
			
				cout << j <<"\t"; }
		cout << "\n";
	}
	cout << "GREATEST OF 3 NUMBERS...\n";
	int a, b, c,big ;
	cout << "\n enter 3 numbers:\n";
	cin >> a >> b >> c;
	
		big= ((a > b) && (a > c) ? a : (b > c) ? b : c); 
		cout << "biggest of 3 no. is : "<< big;


	return 0;
}