//christopher cruz
//cis 1202
//july 27th, 2024
#include <iostream>
#include <cmath>
#include <type_traits>

// Function template to handle floating-point types
template <typename T>
typename std::enable_if<std::is_floating_point<T>::value, T>::type
half(T value) {
    return value / 2.0;
}

// Function template to handle integer types
template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type
half(T value) {
    return static_cast<T>(std::round(value / 2.0));
}

int main() {
    // Testing the half function with different types

    // Test with an integer
    int intVal = 5;
    std::cout << "Half of " << intVal << " is " << half(intVal) << std::endl;

    // Test with a float
    float floatVal = 5.5f;
    std::cout << "Half of " << floatVal << " is " << half(floatVal) << std::endl;

    // Test with a double
    double doubleVal = 5.5;
    std::cout << "Half of " << doubleVal << " is " << half(doubleVal) << std::endl;

    // Test with another integer
    int anotherIntVal = 4;
    std::cout << "Half of " << anotherIntVal << " is " << half(anotherIntVal) << std::endl;

    return 0;
}
