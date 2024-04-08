#include <iostream>
#include "InputValidation.h";
using namespace std;

int main()
{

	cout << "Is Number 5 Between 1 and 10 ? = " << InputValidation::IsNumberBetween(5, 1, 10) << endl;
	cout << "Is Number 5.4 Between 1.2 and 10.1 ? = " << InputValidation::IsNumberBetween(5.4, 1.2, 10.1) << endl;

	cout << "Is 11/1/2024 Within 10/1/2024 and 10/5/2024 Period ? = " << InputValidation::IsDateBetween(Date(11, 1, 2024), Date(10, 1, 2024), Date(10, 5, 2024)) << endl;
	cout << "Is 11/1/2024 Within 10/5/2024 and 10/1/2024 Period (Reversed Period) ? = " << InputValidation::IsDateBetween(Date(11, 1, 2024), Date(10, 5, 2024), Date(10, 1, 2024)) << endl;

	printf("\nPlease Enter a Number : ");
	int x = InputValidation::ReadInt();
	cout << "x = " << x << endl;

	printf("\nPlease Enter a Float Number between 1 and 5 : ");
	float y = InputValidation::ReadFloatBetween(1, 5, "Number is not within range, Enter again : ");
	cout << "y = " << y;

	cout << endl << InputValidation::IsDateValid(Date(35, 12, 2022)) << endl;

}
