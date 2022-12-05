#include "Header2.h"
#include <iostream>
#include <string>
using namespace std;

void printStr(int sumEvenly, int sumOdd) {
    if (sumEvenly > sumOdd)
    {
        std::cout << "Чётные числа больше, не чётных"<<endl;
    }
    else
    {
        std::cout << "Не чётные числа больше чётных"<<endl;
    }
    std::cout << "Сумма чётных чисел " << sumEvenly << endl;
    std::cout << "Сумма не чётных чисел " << sumOdd << endl;
}