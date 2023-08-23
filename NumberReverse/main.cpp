/*
* Creator:     Kozlova Elizabeth Paula
*
* Title:	   Number Reverse
*
* Description:
*			   This program contains a function which reverses a number, entered by the user
*/

#include <iostream>
using namespace std;

//function prototype 

int reverse(int number);

//main function 

int main()
{
	int number = 0;

	reverse(number);

	return 0;
}

//function which reverses the entered number 

int reverse(int number)
{
	int numberX;

	//accepting a number from the user 

	cout << "Enter a number: ";
	cin >> number;

	//displaying the answer 

	cout << "The reversed number is: ";
	while (number != 0)
	{
		//calculating the last digit of the entered number 

		numberX = number % 10;

		//displaying the calculated digit 

		cout << numberX;

		//calculating the remaining digits 

		number = number / 10;
	}

	return 0;
}