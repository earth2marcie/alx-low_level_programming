#include "main.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
char sl[98] = "Hello";
char s2[] = "World!\n";
char *ptr;

printf("%s", s1);
printf("%s", s2);
ptr = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);
return (0);
}
