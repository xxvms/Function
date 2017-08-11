//
// Created by tombr on 11/08/2017.
//

#include "Utility.h"
#include <iostream>

bool IsPrime(int x)
{
    bool prime = true;
    for (size_t i = 2; i <= x/i; i++)
    {
        int factor = x/i;
        if (factor *i == x)
        {
            std::cout << "factor found: " << factor << '\n';
            prime = false;
            break;
        }
    }
    return prime;
}
bool is2MorePrime(int x)
{
    x = x+2;
    return IsPrime(x);
}
