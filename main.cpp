#include <iostream>
#include <cmath>

using namespace std;

// it's a programme where calcuting how much we can earn if we keep 10000 bucks in the stock market and we are getting 1% interest every day.and at the end of 20 day let's calculaate...
// a = amount of money we will have after 20days

// p = principal amount we have
// r = rate of interest

int main()
{
    float a;
    float p = 10000;
    float r = 0.01;

    for (int day = 1; day <= 20; day++)
    {
        a = p * pow(1 + r, day); // it's a formula
        cout << day << "-----" << a << endl;
    }
}