
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    int cent;

    do
    {
        dollar = get_float("Change: ");
        cent = round(dollar * 100);
    }
    while (dollar < 0.0);

    int counter = 0;

    while (cent >= 25)
    {
        counter++;
        cent = cent - 25;
    }

    while (cent >= 10 && cent < 25)
    {
        counter++;
        cent = cent - 10;
    }

    while (cent >= 5 && cent < 10)
    {
        counter++;
        cent = cent - 5;
    }

    while (cent >= 1 && cent < 5)
    {
        counter++;
        cent = cent - 1;
    }

    printf("%i\n", counter);
}
