#include "main.h"

/**
 * main - Prints a specific line
 *
 * Return: Always (Success).
 */

int main(void)
{
char arr[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(arr[i]);
}
_putchar('\n');
return (0);
}
