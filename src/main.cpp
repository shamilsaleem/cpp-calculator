#include <iostream>
#include "../include/calculator.h"
using namespace std;

int main()
{
	int first_number;   // First integer
	int second_number;  // Second integer
	int math_operator;       // Mathematical operator

	cout << "Enter your first number: "; // Prompting for first number.
	cin >> first_number;

	cout << "Enter your second number: "; // Prompting for first number.
	cin >> second_number;

	cout << "1. Addition(+)\n" 
		 << "2. Substraction(-)\n" 
		 << "3. Multiplication(x)\n" 
		 << "4. Division(/)\n" 
		 << "Select an operation: ";

	cin >> math_operator;

	using namespace calculator;
	cout << "Answer is " << calculate(first_number, second_number, math_operator) << endl;


	return 0;
}