#include <iostream>
#include "InputValidation.h";
using namespace std;

int main()
{

	cout << InputValidation::IsNumberBetween(5, 1, 10) << endl;
	cout << InputValidation::IsNumberBetween(5.4, 1.2, 10.1) << endl;

	cout << InputValidation::IsDateBetween(Date(11, 1, 2024), Date(10, 1, 2024), Date(10, 5, 2024)) << endl;
	cout << InputValidation::IsDateBetween(Date(11, 1, 2024), Date(10, 5, 2024), Date(10, 1, 2024)) << endl;

	int x = InputValidation::ReadInt("Enter Valid Number : ", "Invalid Number, Enter again : ");
	cout << "x = " << x << endl;

	int y = InputValidation::ReadIntInRange("Enter Valid Number : ", 1, 5, "Invalid Number, Enter again : ");
	cout << "y = " << y << endl;
}
