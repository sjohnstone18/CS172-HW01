// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "stdbool.h"
#include "stdlib.h"
#include "ctime"
#include "iostream"
#include "string"
#include "math.h"
using namespace std;


void ex02();
void ex03();
///common

int main()
{
	ex02();
	ex03();
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
	if (boxWidth % bookwidth == 0 || bookwidth % boxWidth == 0)
	{
		cout << "\nThe widths are evenly divible\n";
	}
	else
		cout << "\nThey are not divisible\n";

}

void ex03()
{
	int aSquare;
	cout << " please enter the area of a square\n";
	cin >> aSquare;
	int diag;
	diag = sqrt(2 * aSquare);
	cout << "\n The diagonal of the square is " << diag << " units long\n";

	//part b
	char yn;
	//int yn;
	cout << "please enter y or n\n";
	cin >> yn;

	if (yn == 'y')
		cout << "yes\n";
	else if (yn == 'n')
		cout << "no\n";
	else
		{
		cout << "thats wrong :(\n";
		};
		

	//part c
	//char tab;
	//tab = '\t';
	

	string mailingAddress;
	cout << "please enter your mailing address\n";
	cin >> mailingAddress;

	string stringV;


}



