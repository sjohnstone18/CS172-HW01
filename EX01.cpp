// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
//#include <stdbool.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


void ex02();
void ex03();
void ex04();
void ex05();
int separate(int doble);
int adder(int rand1, int rand2);
int passby(int &x);
void size1(int arrayNum[], int arraySize);
void size2(int arrayNum[], int arraySize);

///common

int main()
{
	srand(time(NULL));
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}


void ex02()
{
	int bookwidth;
	int boxWidth;
	
	//part 1a
	bool hasPassedTest = true;

	//part 1b
	
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
	int num; //special number
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
	cout << endl;

	//part 3d
	for (int c0unt = 0; c0unt <= 40; c0unt = c0unt + 2)
		cout << c0unt << endl;

	//part 3e
	cout << "2 times " << num << " is ";
	separate(num);

	//part 3f
	
	int xx = rand();
	int yy = rand();

	int adderVal = adder(xx, yy);
	cout << "the sum of 2 random numbers is " << adderVal << endl;

	//part 3g
	int integerVal = 0;
	passby(integerVal);
	cout << integerVal<< endl;
	

}



void ex05()
{
	
	//part 4a
	int array1[5];
	int numero;
	for (int counter = 0; counter < 5; counter++)
	{
		cout << "please enter value " << counter+1 << endl;
		cin >> numero;
		array1[counter] = numero;
	}

	//part4b
	int sum = 0;
	for (int counter = 0; counter < 5; counter++)
	{
		
		sum = sum + array1[counter];
		
	}
	cout << "the sum of those numbers is " << sum << endl;

	int product = 1;
	for (int counter = 0; counter < 5; counter++)
	{

		product= product * array1[counter];

	}
	cout << "the product of those numbers is " << product << endl;
	//part 4c
	size1(array1, sizeof(array1)/sizeof(int));
	//part 4d
	size2(array1, sizeof(array1) / sizeof(int));
}


int separate(int doble)
{
	//for part 3e
	doble = doble * 2;
	cout << doble << endl;
	return doble;
}

int adder(int rand1, int rand2)
{
	//for part 3f
	int summer = rand1 + rand2;


	return summer;
}

int passby(int &x)
{
	//for part 3g
	x = x + 1;
	return 0;
}


void size1(int arrayNum[], int arraySize)
{
	//for part 4c
	for (int counter = 0; counter < arraySize; counter++)
	{
		cout << arrayNum[counter] << endl;
		
	}
	
}

void size2(int arrayNum[], int arraySize)
{
	//for part 4d
	int arrayContains = 0;
	int query;
	cout << "please enter a number to check for in the array\n";
	cin >> query;
	for (int counter = 0; counter < 5; counter++)
	{
		if (arrayNum[counter] == query)
			arrayContains = 1;
	}
	if (arrayContains == 1)
		cout<< "The array contains your number\n";
	else
		cout << "The array does not contain your number\n";


}