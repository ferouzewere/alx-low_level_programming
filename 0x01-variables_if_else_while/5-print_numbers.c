#include <stdio.h>
/**
 * main - Print single numbers of base 10 strating from 0 - 9
 *
 * Return: Always (Success)
 */
int main(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
