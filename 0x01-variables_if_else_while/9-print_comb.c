#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always (Success);
 */
int main(void)
{
int sdNum;
for (sdNum = '0'; sdNum <= '9'; sdNum++)
{
putchar(sdNum);
if (sdNum != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
