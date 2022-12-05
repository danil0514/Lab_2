#include <iostream>
#include "Header.h"
#include "Header1.h"
#include "Header2.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string number;
    int sumEvenly = 0;
    int sumOdd = 0;
    check_and_change_int(number);
    sumEvenlyOrOdd(number, sumEvenly, sumOdd);
    printStr(sumEvenly, sumOdd);
    return 0;
}