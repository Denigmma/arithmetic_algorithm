#include <iostream>
#include <cstdint>
#include <bitset>
#include <locale>

#include"FixedPoint.h"
#include"FloatPoint.h"


int main() {
    setlocale(LC_ALL, "ru");
    //std::cout << "������� ������ ����� : ";
    //int32_t num1;
    //std::cin >> num1;

    //std::cout << "������� ������ ����� : ";
    //int32_t num2;
    //std::cin >> num2;

    int32_t num1 = 15;
    int32_t num2 = 3;

    FixedPoint<int32_t> fixedNum1(num1);
    FixedPoint<int32_t> fixedNum2(num2);

    std::cout << " -----------------int32_t----------------- " << std::endl;
    std::cout << "������ ����� � �������� ����: ";
    fixedNum1.printBinary();
    std::cout << "������ ����� � �������� ����: ";
    fixedNum2.printBinary();

    FixedPoint<int32_t> sum = fixedNum1 + fixedNum2;
    FixedPoint<int32_t> diff = fixedNum1 - fixedNum2;
    FixedPoint<int32_t> prod = fixedNum1 * fixedNum2;
    FixedPoint<int32_t> quot = fixedNum1 / fixedNum2;

    std::cout << "����� � �������� ��: ";
    sum.printBinary();
    std::cout << "�������� � �������� ��: ";
    diff.printBinary();
    std::cout << "������������ ����� � �������� ����: ";
    prod.printBinary();
    std::cout << "������� ����� � �������� ����: ";
    quot.printBinary();

    std::cout << "����� ����� � ���������� ������� ���������: " << sum.getValue() << std::endl;
    std::cout << "�������� ����� � ���������� ������� ���������: " << diff.getValue() << std::endl;
    std::cout << "������������ ����� � ���������� ������� ���������: " << prod.getValue() << std::endl;
    std::cout << "������� ����� � ���������� ������� ���������: " << quot.getValue() << std::endl;

    std::cout << " -----------------float----------------- " << std::endl;

    const int fractionalBits = 16; // 8 bit for the fractional part (�������)

    FloatPoint<float, fractionalBits> floatNum1(3.14);
    FloatPoint<float, fractionalBits> floatNum2(1.527);

    std::cout << "FloatPoint<float, " << fractionalBits << ">:" << std::endl;
    std::cout << "�����: " << floatNum1 + floatNum2 << std::endl;
    std::cout << "��������: " << floatNum1 - floatNum2 << std::endl;
    std::cout << "������������: " << floatNum1 * floatNum2 << std::endl;
    std::cout << "�������: " << floatNum1 / floatNum2 << std::endl;

    return 0;
}