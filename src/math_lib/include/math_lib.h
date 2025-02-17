#pragma once

#include <stdexcept>
#include <vector>

namespace MathLib
{   
    // Function for addition
    template <typename T>
    T add(T a, T b)
    {
        return a + b;
    }
    
    // Function for subtraction
    template <typename T>
    T subtract(T a, T b)
    {
        return a - b;
    }
    
    // Function for multiplication
    template <typename T>
    T multiply(T a, T b)
    {
        return a * b;
    }
    
    // Function for division
    template <typename T>
    T divide(T a, T b)
    {
        if (b == 0)
        {
            throw std::invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }
    
    // Function for comparing two floating point values
    bool isEqual(double a, double b, double tolerance = 0.000000001);

    // Square root function
    template <typename T>
    double sqrt(T a)
    {
        if (a == 0)
            return 0;
        if (a < 0)
            throw std::invalid_argument("Cannot get the square root of a negative number");
        double x = a;
        double result;
        int count = 0;
        while (true)
        {
            count++;
            result = 0.5 * (x + (a / x));
            if (isEqual(result, x, 0.00001))
                break;
            x = result;
        }
        return result;
    }

    bool isPrime(int n);

    int leastCommonMultiple(int a, int b);

    int GCD(int a, int b);

    int factorial(int n);

    int fibonacci(int n);

    double average(const std::vector<double>& numbers);
}
