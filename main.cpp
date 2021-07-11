/*
    grade calculating algorithm for British universities
    subject to covid-19 mitigations for UCL
    covid-19 mitiations are: 6 year1 modules weighted at 1 out of 9, 4 year2 modules weighted at 3 out of 9, 8 year3 modules weighted at 5 out of 9.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double averageMark(int year, int moduleCount)
{
    double totalMark = 0.00;

    cout << "Enter your year " << year << " grades." << endl;

    for (int i = 0; i < moduleCount; i++)
    {
        cout << "Module " << i + 1 << ": ";
        double mark;
        cin >> mark;
        totalMark += mark;
    }

    return totalMark / moduleCount;
}

int main()
{
    double result90 = (averageMark(1, 6) / 9) + (3 * (averageMark(2, 4) / 9)) + (5 * (averageMark(3, 8) / 9));
    double result = (result90 * 100) / 90;

    cout << "Your final result is: " << fixed << setprecision(2) << result << endl; // Round to 2 decimal places and print

    return 0;
}
