#include "main.h"

/**
 * _islower - checks if a char is lowercase.
 * @c: The char to be checked
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
} 
