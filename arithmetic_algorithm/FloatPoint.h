// For float num
template<class T, int FractionalBits>
class FloatPoint {
private:
    T value;

public:
    FloatPoint(T val) : value(val) {}

    T getValue() const {
        return value;
    }

    void setValue(T val) {
        value = val;
    }

    void printBinary() const {
        // Converting a float type value to its bit representation
        uint32_t floatBits;
        std::memcpy(&floatBits, &value, sizeof(float));

        // Output the bit representation
        std::bitset<sizeof(float) * 8> binary(floatBits);
        std::cout << binary << std::endl;
    }

    FloatPoint operator+(const FloatPoint& other) const {
        return FloatPoint(value + other.value);
    }

    FloatPoint operator-(const FloatPoint& other) const {
        return FloatPoint(value - other.value);
    }

    FloatPoint operator*(const FloatPoint& other) const {
        return FloatPoint(value * other.value);
    }

    FloatPoint operator/(const FloatPoint& other) const {
        return FloatPoint(value / other.value);
    }

    bool operator<(const FloatPoint& other) const {
        return value < other.value;
    }

    bool operator<=(const FloatPoint& other) const {
        return value <= other.value;
    }

    bool operator==(const FloatPoint& other) const {
        return value == other.value;
    }

    bool operator>(const FloatPoint& other) const {
        return value > other.value;
    }

    bool operator>=(const FloatPoint& other) const {
        return value >= other.value;
    }

    // Overload operator  <<
    friend std::ostream& operator<<(std::ostream& os, const FloatPoint<T, FractionalBits>& obj) {
        os << obj.value;
        return os;
    }
};