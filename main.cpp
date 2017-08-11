#include <iostream>
#include "Utility.h"

int main() {
    int x;
    std::cout << "Enter number: \n";
    std::cin >> x;

    if (IsPrime(x))
    {
        std::cout << x << " is prime\n";
    } else
    {
        std::cout << x << " is not a prime\n";
    }

    if (is2MorePrime(x))
    {
        std::cout << x << "+2 is prime\n";
    } else
    {
        std::cout << x << "+2 is not prime\n";
    }



    return 0;
}