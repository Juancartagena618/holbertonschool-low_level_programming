#include "main.h"

/**
 * _isalpha - write a function that checks for alphabetic character
 * @c: character to check
 * Return: 0
 */

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? (1) : (0));
}
