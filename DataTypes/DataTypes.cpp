// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const unsigned short MAX_DAYS = 7;
    const float TAX = 0.25f;
    const float wage = 14.25;

    string name;
    unsigned short daysWorked = 0;
    unsigned short hoursWorkedPerWeek[MAX_DAYS];
    unsigned short age = 0;
    unsigned short zipcode = 84102;
    unsigned short totalHours = 0;
	float grossIncome = 0;
    float netIncome = 0;
    char initial;
	bool isAdult = false;

    cout << "1-3 Payroll" << endl;
    cout << "-----------" << endl;
    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;
	if (age >= 18) isAdult = true;

	cout << "Enter days worked: ";
    cin >> daysWorked;
	if (daysWorked > MAX_DAYS) daysWorked = 7;

	for (int i = 0; i < daysWorked; i++)
    {
        short temp;
        cout << "Hours worked on Day " << i + 1 << ": ";
        cin >> temp;
        while (temp > 24)
        {
            cout << "Invalid answer. Try again: ";
            cin >> temp;
        }
        hoursWorkedPerWeek[i] = temp;
        totalHours += temp;
    }

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX);

    cout << "*******************" << endl;
    cout << name << " worked " << totalHours << " hours in " << daysWorked << " days at " << wage << "/hr" << endl;
    cout << "Gross income: " << grossIncome << endl;
	cout << "Net income: " << netIncome;
}