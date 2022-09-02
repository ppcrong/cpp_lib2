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
    std::cout << "(FuncMinus is lib2-v6.0...) ";
    return a - b;
}