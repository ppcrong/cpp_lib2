#include <iostream>
#include "FuncMinus.h"

FuncMinus::FuncMinus()
{
}

FuncMinus::~FuncMinus()
{
}

int32_t FuncMinus::minus(int32_t a, int32_t b)
{
    std::cout << "(Hey! I add 123 to the result...) ";
    return a - b + 123;
}