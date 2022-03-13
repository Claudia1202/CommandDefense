#include "Math.h"

int Math::Add(int a, int b)
{
    return a + b;
}
int Math::Add(int a, int b, int c)
{
    return a + b + c;
}
int Math::Add(double a, double b)
{
    return a + b;
}
int Math::Add(double a, double b, double c)
{
    return a + b + c;
}

int Math::Mul(int a, int b)
{
    return a * b;
}
int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}
int Math::Mul(double a, double b)
{
    return a * b;
}
int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}

int Math::Add(int count, ...) // sums up a list of integers
{
    va_list args;
    va_start(args, count);

    int sum = 0;

    for (int i = 0; i < count; i++)
        sum += va_arg(args, int);

    va_end(args);

    return sum;
}

char* Math::Add(const char* a, const char* b)
{
    char* c = new char[strlen(a) + strlen(b) + 1];
    if (!c)
        return nullptr;
   
    for (int i = 0; i < strlen(a); i++)
        c[i] = a[i];
    for (int i = 0; i < strlen(b); i++)
        result[i + strlen(a)] = b[i];
    c[strlen(a) + strlen(b)] = '\0';

    return c;
}