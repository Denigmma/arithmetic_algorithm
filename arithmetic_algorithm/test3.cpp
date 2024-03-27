//#include <iostream>
//#include <cstdint>
//#include <bitset>
//#include <locale>
//
//// For num whith fixed point
//template<class T>
//class FixedPoint {
//private:
//    T value;
//public:
//    FixedPoint(T val) : value(val) {}
//
//    T getValue() const {
//        return value;
//    }
//
//    void setValue(T val) {
//        value = val;
//    }
//
//    void printBinary() const {
//        std::bitset<sizeof(T) * 2> binary(value);
//        std::cout << binary << std::endl;
//    }
//
//    FixedPoint operator+(const FixedPoint& other) const {
//        return FixedPoint(value + other.value);
//    }
//
//    FixedPoint operator-(const FixedPoint& other) const {
//        return FixedPoint(value - other.value);
//    }
//
//    FixedPoint operator*(const FixedPoint& other) const {
//        return FixedPoint((value * other.value));
//    }
//
//    FixedPoint operator/(const FixedPoint& other) const {
//        return FixedPoint((value) / other.value);
//    }
//
//    bool operator<(const FixedPoint& other) const {
//        return value < other.value;
//    }
//
//    bool operator<=(const FixedPoint& other) const {
//        return value <= other.value;
//    }
//
//    bool operator==(const FixedPoint& other) const {
//        return value == other.value;
//    }
//
//    bool operator>(const FixedPoint& other) const {
//        return value > other.value;
//    }
//
//    bool operator>=(const FixedPoint& other) const {
//        return value >= other.value;
//    }
//
//    // Overload operator  <<
//    friend std::ostream& operator<<(std::ostream& os, const FixedPoint<T>& obj) {
//        os << obj.value;
//        return os;
//    }
//};
//
//// For float num
//template<class T, int FractionalBits>
//class FloatPoint {
//private:
//    T value;
//
//public:
//    FloatPoint(T val) : value(val) {}
//
//    T getValue() const {
//        return value;
//    }
//
//    void setValue(T val) {
//        value = val;
//    }
//
//    void printBinary() const {
//        // Converting a float type value to its bit representation
//        uint32_t floatBits;
//        std::memcpy(&floatBits, &value, sizeof(float));
//
//        // Output the bit representation
//        std::bitset<sizeof(float) * 8> binary(floatBits);
//        std::cout << binary << std::endl;
//    }
//
//    FloatPoint operator+(const FloatPoint& other) const {
//        return FloatPoint(value + other.value);
//    }
//
//    FloatPoint operator-(const FloatPoint& other) const {
//        return FloatPoint(value - other.value);
//    }
//
//    FloatPoint operator*(const FloatPoint& other) const {
//        return FloatPoint(value * other.value);
//    }
//
//    FloatPoint operator/(const FloatPoint& other) const {
//        return FloatPoint(value / other.value);
//    }
//
//    bool operator<(const FloatPoint& other) const {
//        return value < other.value;
//    }
//
//    bool operator<=(const FloatPoint& other) const {
//        return value <= other.value;
//    }
//
//    bool operator==(const FloatPoint& other) const {
//        return value == other.value;
//    }
//
//    bool operator>(const FloatPoint& other) const {
//        return value > other.value;
//    }
//
//    bool operator>=(const FloatPoint& other) const {
//        return value >= other.value;
//    }
//
//    // Overload operator  <<
//    friend std::ostream& operator<<(std::ostream& os, const FloatPoint<T, FractionalBits>& obj) {
//        os << obj.value;
//        return os;
//    }
//};
//
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    //std::cout << "Введите первое число : ";
//    //int32_t num1;
//    //std::cin >> num1;
//
//    //std::cout << "Введите второе число : ";
//    //int32_t num2;
//    //std::cin >> num2;
//
//    int32_t num1=15;
//    int32_t num2=3;
//
//    FixedPoint<int32_t> fixedNum1(num1);
//    FixedPoint<int32_t> fixedNum2(num2);
//
//    std::cout << " -----------------int32_t----------------- " << std::endl;
//    std::cout << "Первое число в двоичном коде: ";
//    fixedNum1.printBinary();
//    std::cout << "Второе число в двоичном коде: ";
//    fixedNum2.printBinary();
//
//    FixedPoint<int32_t> sum = fixedNum1 + fixedNum2;
//    FixedPoint<int32_t> diff = fixedNum1 - fixedNum2;
//    FixedPoint<int32_t> prod = fixedNum1 * fixedNum2;
//    FixedPoint<int32_t> quot = fixedNum1 / fixedNum2;
//
//    std::cout << "Сумма в двоичной сс: ";
//    sum.printBinary();
//    std::cout << "Разность в двоичной сс: ";
//    diff.printBinary();
//    std::cout << "Произведение чисел в двоичном коде: ";
//    prod.printBinary();
//    std::cout << "Частное чисел в двоичном коде: ";
//    quot.printBinary();
//
//    std::cout << "Сумма чисел в десятичной системе счисления: " << sum.getValue() << std::endl;
//    std::cout << "Разность чисел в десятичной системе счисления: " << diff.getValue()<< std::endl;
//    std::cout << "Произведение чисел в десятичной системе счисления: " << prod.getValue() << std::endl;
//    std::cout << "Частное чисел в десятичной системе счисления: " << quot.getValue()<< std::endl;
//
//    std::cout << " -----------------float----------------- " << std::endl;
//
//    const int fractionalBits = 16; // 8 bit for the fractional part (дробная)
//
//    FloatPoint<float, fractionalBits> floatNum1(3.14);
//    FloatPoint<float, fractionalBits> floatNum2(1.527);
//
//    std::cout << "FloatPoint<float, " << fractionalBits << ">:" << std::endl;
//    std::cout << "Сумма: " << floatNum1 + floatNum2 << std::endl;
//    std::cout << "Разность: " << floatNum1 - floatNum2 << std::endl;
//    std::cout << "Произведение: " << floatNum1 * floatNum2 << std::endl;
//    std::cout << "Частное: " << floatNum1 / floatNum2 << std::endl;
//
//    return 0;
//}