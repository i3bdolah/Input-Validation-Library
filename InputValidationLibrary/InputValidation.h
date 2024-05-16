#pragma once
#include <iostream>
#include "Period.h";
using namespace std;

template <class T>
class InputValidation
{
public:
	//static bool IsNumberBetween(int num, int from, int to) {
	//	return ((num >= from) && (num <= to));
	//}
	//static bool IsNumberBetween(short num, short from, short to) {
	//	return ((num >= from) && (num <= to));
	//}
	//static bool IsNumberBetween(float num, float from, float to) {
	//	return ((num >= from) && (num <= to));
	//}
	//static bool IsNumberBetween(double num, double from, double to) {
	//	return ((num >= from) && (num <= to));
	//}
	static bool IsNumberBetween(T num, T from, T to) {
		return ((num >= from) && (num <= to));
	}
	static bool IsDateBetween(Date date, Date fromDate, Date toDate) {
		return Period::IsDateWithinPeriod(date, Period::Period(fromDate, toDate));
	}




	//static int ReadInt(string errorMsg = "Invalid Input, Re-Enter your number : ") {
	//	int num;

	//	while (!(cin >> num))
	//	{
	//		cin.clear();
	//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//		cout << errorMsg;
	//	}
	//	return num;
	//}

	//static int ReadIntBetween(int from, int to,
	//	string errorMsg = "Invalid Input, Re-Enter your number : ") {

	//	int num = ReadInt(errorMsg);
	//	while (!IsNumberBetween(num, from, to)) {
	//		cout << errorMsg;
	//		num = ReadInt(errorMsg);
	//	};

	//	return num;
	//}



	//static short ReadShort(string errorMsg = "Invalid Input, Re-Enter your number : ") {
	//	short num;

	//	while (!(cin >> num))
	//	{
	//		cin.clear();
	//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//		cout << errorMsg;
	//	}
	//	return num;
	//}

	//static short ReadShortBetween(short from, short to,
	//	string errorMsg = "Invalid Input, Re-Enter your number : ") {

	//	short num = ReadShort(errorMsg);
	//	while (!IsNumberBetween(num, from, to)) {
	//		cout << errorMsg;
	//		num = ReadShort(errorMsg);
	//	};

	//	return num;
	//}



	//static float ReadFloat(string errorMsg = "Invalid Input, Re-Enter your number : ") {
	//	float num;

	//	while (!(cin >> num))
	//	{
	//		cin.clear();
	//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//		cout << errorMsg;
	//	}
	//	return num;
	//}

	//static float ReadFloatBetween(float from, float to,
	//	string errorMsg = "Invalid Input, Re-Enter your number : ") {

	//	float num = ReadFloat(errorMsg);
	//	while (!IsNumberBetween(num, from, to)) {
	//		cout << errorMsg;
	//		num = ReadFloat(errorMsg);
	//	};

	//	return num;
	//}



	//static double ReadDouble(string errorMsg = "Invalid Input, Re-Enter your number : ") {
	//	double num;

	//	while (!(cin >> num))
	//	{
	//		cin.clear();
	//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//		cout << errorMsg;
	//	}
	//	return num;
	//}

	//static double ReadDoubleBetween(double from, double to,
	//	string errorMsg = "Invalid Input, Re-Enter your number : ") {

	//	double num = ReadDouble(errorMsg);
	//	while (!IsNumberBetween(num, from, to)) {
	//		cout << errorMsg;
	//		num = ReadDouble(errorMsg);
	//	};

	//	return num;
	//}

	static string ReadString() {
		string input;
		getline(cin >> ws, input);
		return input;
	}

	static bool IsDateValid(Date date) {
		return Date::IsDateValid(date);
	}

	static T ReadNum(string errorMsg = "Invalid Input, Re-Enter your number : ") {
		T num;

		while (!(cin >> num))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << errorMsg;
		}
		return num;
	}

	static T ReadNumBetween(T from, T to, string errorMsg = "Invalid Input, Re-Enter your number : ") {
		T num = ReadNum(errorMsg);
		while (!IsNumberBetween(num, from, to)) {
			cout << errorMsg;
			num = ReadNum(errorMsg);
		};

		return num;

	}
};
