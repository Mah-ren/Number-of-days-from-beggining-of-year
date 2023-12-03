#include <iostream>
using namespace std;


short DaysFromBeggingOfYear(int, short, short);
bool isLeapYear(int);
short NumberOfDaysInMonth(int, short);
short NumberOfDaysInMonthInLeapYear(int, short);


int main()
{
	int year = 1;
	short month = 1, day = 1;

	cout << "\nPlease Enter Day: ";
	cin >> day;

	cout << "\nPlease Enter Month: ";
	cin >> month;

	cout << "\nPlease Enter Year: ";
	cin >> year;

	cout << "\nNumber Of Days From Beginning Of Year is: " << DaysFromBeggingOfYear(year, month, day);
}

short DaysFromBeggingOfYear(int year, short month, short day)
{
	short numberOfDaysInAMonth = 0;

	for (short i = 1; i < month; i++)
	{
		numberOfDaysInAMonth += NumberOfDaysInMonth(i, year);
	}
	return numberOfDaysInAMonth += day;
}

bool isLeapYear(int year)
{
	return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short NumberOfDaysInMonthInLeapYear(int year, short month)
{
	short array[] = { 1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return array[month];
}

short NumberOfDaysInMonth(int year, short month)
{
	return((isLeapYear(year) && month == 2) ? 29 : NumberOfDaysInMonthInLeapYear(month, year));
}