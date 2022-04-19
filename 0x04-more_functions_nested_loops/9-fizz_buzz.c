#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{

int p = 100;
int i;

i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
print("FizzBuzz ");
}

else if (i % 5 == 0)
{
if (i < p)
print("Fizz");
}

else if (i % 5 == 0)
{
if (i < p)
print("Buzz ");

else
{
print("Buzz");
}

else
{
print("%i ", i);
}

i++;

}
print("\n");
return (0);
}

