#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
    	int len2;
    _printf("Unsigned hexadecimal:[%x]\n", 77497352);
    printf("Unsigned hexadecimal:[%x]\n", 77497352);
	
	len = _printf("Let's try to _printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    	_printf("Length _printf:[%d, %i]\n", len, len);
    printf("\nLength:[%d, %i]\n", len2, len2);
    _printf("Negative: _printf:[%d] [%i]\n", -762534, -25);
    printf("\nNegative:[%d]\n", -762534);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String checking %c", 'Q');
	printf("\nString:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	printf("This is %%\n");
	_printf("This is %%\n");

    	return (0);
}
