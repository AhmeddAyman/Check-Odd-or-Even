#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 3 
// Check Odd or Even.

enum enNumbertype { Odd = 1, Even = 2 };


int ReadNumber() 
{
	int Num;

	cout << "Please enter a number " << endl;
	cin >> Num;
	return Num;

}

enNumbertype CheckNumberType(int Num) 
{

	int Result = Num % 2;
	if (Result == 0) 
	{
		return enNumbertype::Even;
	}
	else
	{
		return enNumbertype::Odd;
	}
}

void PrintNumberType(enNumbertype NumberType) 
{
	if(NumberType == enNumbertype::Even)
	{
		cout << "\n Number is Even. \n";
	}
	else 
	{
		cout << "\n Number is Odd. \n";
	}

}


int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}

