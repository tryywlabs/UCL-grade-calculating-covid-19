//grade calculating algorithm for British universities
//subject to covid-19 mitigations for UCL
//covid-19 mitiations are: 6 year1 modules weighted at 1 out of 9, 4 year2 modules weighted at 3 out of 9, 8 year3 modules weighted at 5 out of 9.

#include <iostream>
using namespace std;

class grades
{
public:
    int g11, g12, g13, g14, g15, g16, g21, g22, g23, g24, g31, g32, g33, g34, g35, g36, g37, g38;
    int firstyear, secondyear, thirdyear;
};

int year1()
{
    int g11, g12, g13, g14, g15, g16;
    cout << "Enter your year 1 grades" << endl;
    cin >> g11 >> g12 >> g13 >> g14 >> g15 >> g16;
    int firstyear = (g11+g12+g13+g14+g15+g16)/6;
    return firstyear;
}

int year2()
{
    int g21, g22, g23, g24;
    cout << "Enter your year 2 grades" << endl;
    cin >> g21 >> g22 >> g23 >> g24;
    int secondyear = (g21+g22+g23+g24)/4;
    return secondyear;
}

int year3()
{
    int g31, g32, g33, g34, g35, g36, g37, g38;
    cout << "Enter your year 3 grades" << endl;
    cin >> g31 >> g32 >> g33 >> g34 >> g35 >> g36 >> g37 >> g38;
    int thirdyear = (g31+g32+g33+g34+g35+g36+g37+g38)/8;
    return thirdyear;
}

int main()
{
    int result90 = (year1()/9) + (3*(year2()/9)) + (5*(year3()/9));
    int result = (result90 * 100)/90;
    cout << result;
    return 0;
}
