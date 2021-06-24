#include "holberton.h"

/**
 *print_number - print an integer into the standard output
 *@n: - the integer to print
 *Return: 0
 */

void print_number(int n)
{
unsigned int tens, digit, positive = n;
double t_begin = 1;
if (n == 0)
{
_putchar('0');
}
else
{
if (n < 0)
{
positive = n * -1;
_putchar('-');
}
while (t_begin <= positive)
{
t_begin *= 10;
}
tens = t_begin / 10;
while(tens >= 1)
{
digit = positive / tens;
_putchar(digit + '0');
positive = (positive - (tens * digit));
tens /= 10;
}
}
}
