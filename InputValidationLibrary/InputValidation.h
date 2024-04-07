#pragma once
#include <iostream>
#include "Period.h";
using namespace std;

class InputValidation
{
public:
	static bool IsNumberBetween(int num, int from, int to) {
		return ((num >= from) && (num <= to));
	}
	static bool IsNumberBetween(short num, short from, short to) {
		return ((num >= from) && (num <= to));
	}
	static bool IsNumberBetween(float num, float from, float to) {
		return ((num >= from) && (num <= to));
	}
	static bool IsNumberBetween(double num, double from, double to) {
		return ((num >= from) && (num <= to));
	}
	static bool IsDateBetween(Date date, Date fromDate, Date toDate) {
		return Period::IsDateWithinPeriod(date, Period::Period(fromDate, toDate));
	}

	static int ReadInt(string msg, string errorMsg = "Try Again : ") {
		int num = 0;
		do {
			cout << msg;
			cin >> num;
		} while (num < 0);

		return num;
	}
	static int ReadIntInRange(string msg, int from, int to, string errorMsg = "Try Again : ") {
		int num;
		do {
			cout << msg;
			cin >> num;
		} while (!IsNumberBetween(num, from, to));

		return num;
	}
	static short ReadShort(string msg, string errorMsg = "Try Again : ") {
		short num;
		do {
			cout << msg;
			cin >> num;
		} while (num < 0);

		return num;
	}
	static short ReadShortInRange(string msg, short from, short to, string errorMsg = "Try Again : ") {
		short num;
		do {
			cout << msg;
			cin >> num;
		} while (!IsNumberBetween(num, from, to));

		return num;
	}
	static float ReadFloat(string msg, string errorMsg = "Try Again : ") {
		float num;
		do {
			cout << msg;
			cin >> num;
		} while (num < 0);

		return num;
	}
	static float ReadFloatInRange(string msg, float from, float to, string errorMsg = "Try Again : ") {
		float num;
		do {
			cout << msg;
			cin >> num;
		} while (!IsNumberBetween(num, from, to));

		return num;
	}
	static double ReadDouble(string msg, string errorMsg = "Try Again : ") {
		double num;
		do {
			cout << msg;
			cin >> num;
		} while (num < 0);

		return num;
	}
	static double ReadDoubleInRange(string msg, double from, double to, string errorMsg = "Try Again : ") {
		double num;
		do {
			cout << msg;
			cin >> num;
		} while (!IsNumberBetween(num, from, to));

		return num;
	}

	static bool IsDateValid(Date date) {
		return Date::IsDateValid(date);
	}
};

