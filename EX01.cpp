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
void ex04();
void ex05();
///common

int main()
{
	ex02();
	ex03();
	ex04();
	return 0;
}


void ex02()
{
	int bookwidth;
	int boxWidth;
	
	//part 1a
	bool hasPassedTest = true;

	//part 1b
	srand(time(NULL));
	int x = rand();
	int y = rand();
	if (x >= y)
		{
		cout << "x is greater than or equal to y\n";
		}
	else
		cout << "x is less than y\n";
	
	//part 1c
	cout << "please enter the Number of shares\n";
	int numberofShares; 
	cin >> numberofShares;
	if (numberofShares < 100)
		cout << "you have less than 100 shares\n";
	else
		cout << "you have more than 100 shares\n";

	//part 1d
	cout << "please enter box width\n";
	cin >> boxWidth;
	cout << "\nplease enter book width\n";
	cin >> bookwidth;
	if (boxWidth % bookwidth == 0 || bookwidth % boxWidth == 0)
		{
			cout << "\nThe widths are evenly divible\n";
		}	
	else
		cout << "\nThey are not divisible\n";

	//part 1e
	cout << "please enter the shelf life of the chocolate: ";
	int chocLife;
	cin >> chocLife;
	cout << "\nplease enter outside temperature in Farenheit: ";
	int temperature;
	cin >> temperature;
	if (temperature > 90)
			{
				chocLife = chocLife - 4;
				cout << "\nthe shelf life of the chocloate is now " << chocLife << endl;
			}
	else
				cout << "\nthe shelf life of the chocloate is still" << chocLife << endl;

}

void ex03()
{
	//part 2a
	int aSquare;
	cout << " please enter the area of a square\n";
	cin >> aSquare;
	int diag;
	diag = sqrt(2 * aSquare);
	cout << "\nThe diagonal of the square is " << diag << " units long\n";

	//part b
	char yn;
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
	char tab;
	tab = '\t';
	
	//part 2d
	string mailingAddress;
	cout << "please enter your mailing address\n";
	cin >> mailingAddress;
	cout << "your mailing address is " << mailingAddress << endl;
	
	//part2e
	string stringV = "";
}

void ex04()
{
	//part3a
	int num;
	do 
	{
		cout << "please enter a number between 1 and 10\n";
		cin >> num;
	} while (num < 0 || num>10);

	//part 3b
	int sum = 0;
	
	for (int count=0; count <= num; count++)\
	{
		sum = pow(count, 3)+sum;
	}
	cout << "sum of cubes = " << sum << endl;

	//part3c
	int cont = 0;
	do
	{
		cout << "*";
			cont++;
	} while (cont < num);

}



void ex05()
{


}