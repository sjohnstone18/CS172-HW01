// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdbool.h"
#include "stdlib.h"
#include "ctime"
#include "iostream"
using namespace std;


void ex02();


int main()
{
	ex02();

	return 0;
}


void ex02()
{
	int bookwidth;
	int boxWidth;
	bool hasPassedTest = true;
	srand(time(NULL));
	int x = rand();
	int y = rand();
	if (x >= y)
	{
		cout << "x is greater than or equal to y\n";

	}
	cout << "please enter box width\n";

	cin >> boxWidth;
	cout << "\n please enter book width\n";
	cin >> bookwidth;
	if (boxWidth % bookwidth = 0)
	{
		cout << "\nThe widths are evenly divible\n";
	}
	else
		cout << "\nThey are not divisible\n";
	return 0;
}
