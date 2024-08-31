#ifndef CALCULATOR_H
#define CALCULATOR_H

using namespace std;

int calculate(double first_number, double second_number, int math_operator)
{
	double result;
	switch(math_operator)
	{
		case 1:
			result = first_number + second_number;
		    break;
		case 2:
			result = first_number - second_number;
		    break;
		case 3:
			result = first_number * second_number;
		    break;
		case 4:
			if (second_number == 0)
			{
				cout << "Can't divisible by zero." << endl << endl;
				return 1;
			}
			else
			{
				result = first_number / second_number;
			}
			break;
		default:
			result = 0;
	}
	cout << result << endl << endl;
	return 0;
}

#endif // CALCULATOR_H