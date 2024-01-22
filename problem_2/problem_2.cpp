/*

Craig Bodo
Project Euler

Problem 2
Even Fibonacci Numbers

Description:
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

To Run:

g++ problem_2.cpp -o problem_2
./problem_2

*/
#include <iostream>

int even_fib (int max_value, int first, int second);

int main() {

    int sum = 0;

    sum = even_fib(4000000, 0, 1);

    std::cout << std::endl 
              << "The sum of the even terms in the Fibonacci sequence whose values do not exceed four million is: " 
              << sum 
              << std::endl 
              << std::endl;

    return 0;
}

// Recursive function for summing all even-valued fibonacci numbers under a max value.
// To start at the beginning of the fibonacci sequence, use first = 0 and second = 1.
int even_fib (int max_value, int first, int second) {
    // Return if base case is met (max value reached).
    if (first > max_value) { return 0; }

    // Add even fibonacci numbers to the sum.
    int sum = (first %2 == 0) ? first : 0;

    // Iterate through all fibonacci values from first to max value.
    return sum + even_fib(max_value, second, first + second);
}