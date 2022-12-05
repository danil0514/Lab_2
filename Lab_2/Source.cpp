#include "Header1.h"
#include <iostream>
#include <string>
using namespace std;


void sumEvenlyOrOdd(string& number, int& sumEvenly, int& sumOdd) {
    int i;
    for (i = 0; i < number.length(); i++)
    {
        int n = number[number.length() - i - 1] - '0';
        if ((number.length() - i) % 2 == 0)
        {
            sumEvenly = sumEvenly + n;
        }
        else
        {
            sumOdd = sumOdd + n;
        }
    }
}