#ifndef CALCULATOR_H
#define CALCULATOR_H

namespace calculator
{
	int calculate(int first_number, int second_number, int math_operator)
{
	switch(math_operator)
	{
		case 1:
			return(first_number + second_number);
		    break;
		case 2:
			return(first_number - second_number);
		    break;
		case 3:
			return(first_number * second_number);
		    break;
		case 4:
			return(first_number / second_number);
			break;
		default:
			return 0;
	}
}

}

#endif // CALCULATOR_H