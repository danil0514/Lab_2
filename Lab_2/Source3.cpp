#include "Header2.h"
#include <iostream>
#include <string>
using namespace std;

void printStr(int sumEvenly, int sumOdd) {
    if (sumEvenly > sumOdd)
    {
        std::cout << "׸���� ����� ������, �� ������"<<endl;
    }
    else
    {
        std::cout << "�� ������ ����� ������ ������"<<endl;
    }
    std::cout << "����� ������ ����� " << sumEvenly << endl;
    std::cout << "����� �� ������ ����� " << sumOdd << endl;
}