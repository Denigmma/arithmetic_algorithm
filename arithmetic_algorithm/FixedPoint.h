// For num whith fixed point
template<class T>
class FixedPoint {
private:
    T value;
public:
    FixedPoint(T val) : value(val) {}

    T getValue() const {
        return value;
    }

    void setValue(T val) {
        value = val;
    }

    void printBinary() const {
        std::bitset<sizeof(T) * 2> binary(value);
        std::cout << binary << std::endl;
    }

    FixedPoint operator+(const FixedPoint& other) const {
        return FixedPoint(value + other.value);
    }

    FixedPoint operator-(const FixedPoint& other) const {
        return FixedPoint(value - other.value);
    }

    FixedPoint operator*(const FixedPoint& other) const {
        return FixedPoint((value * other.value));
    }

    FixedPoint operator/(const FixedPoint& other) const {
        return FixedPoint((value) / other.value);
    }

    bool operator<(const FixedPoint& other) const {
        return value < other.value;
    }

    bool operator<=(const FixedPoint& other) const {
        return value <= other.value;
    }

    bool operator==(const FixedPoint& other) const {
        return value == other.value;
    }

    bool operator>(const FixedPoint& other) const {
        return value > other.value;
    }

    bool operator>=(const FixedPoint& other) const {
        return value >= other.value;
    }

    // Overload operator  <<
    friend std::ostream& operator<<(std::ostream& os, const FixedPoint<T>& obj) {
        os << obj.value;
        return os;
    }
};