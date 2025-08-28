#include <iostream>
#include <cmath>

class Vector {
private:
    double x, y;

public:
    Vector(double x, double y) : x(x), y(y) {}

    double CalculateMagnitude() { 
        return std::sqrt(x * x + y * y);
    }

    double CalculateRadians() {
        return std::atan2(y, x);
    }

    void PrintCoordinates() {
        std::cout << "Coordinates: x = " << x << ", y = " << y << std::endl;
    }

    void PrintPolarCoordinates() {
        std::cout << "Magnitude: " << CalculateMagnitude() << std::endl;
    }

    void PrintRadians() {
        std::cout << "Radians: " << CalculateRadians() << std::endl;
    }
};

int main() {
    double x, y;
    std::cout << "Write X: ";
    std::cin >> x;
    std::cout << "Write Y: ";
    std::cin >> y;

    Vector vector(x, y);
    vector.PrintCoordinates();
    vector.PrintPolarCoordinates();
    vector.PrintRadians();

    return 0;
}