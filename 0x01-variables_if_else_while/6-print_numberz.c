#include <stdio.h>
/**
*main - entry point
*Return: 0 (successful)
*/
int main(void)
{
int i = 0;

for (i = 0; i <= 9; i++)

putchar(i % 10 + '0');
putchar('\n');
return (0);
}
