#include <stdio.h>
#include <unistd.h>

/**
 * main - A c program that prints line of the standard error
 *
 * Return: 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
