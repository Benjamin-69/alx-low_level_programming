#include "main.h"

/**
 * _isalpha - checks if a char is alphabetic
 * @c: the char to be checked 
 * 
 * Return: 1 if character is a letter, lowr or upper, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
} 
