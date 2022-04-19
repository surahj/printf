# _printf
A formatted output conversion C program completed as part of the low-level programming and algorithm track at Holberton School. The program is a pseudo- recreation of the C standard library function, ```printf```.

# Description

The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.

```Prototype: int _printf(const char *format, ...)```;

# Return value
Upon successful return, ```_printf``` returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns ```-1```

# man_3_printf
This acts as a manual to the print f functions
Here are some examples
.B This means Bold
.BI This means Bold italic alternating
.BR This means Bold Roman alternating
.IP idented paragraph

# Supported Format Types

TYPE - OUTPUT
c - Single character

s - String of character

r - String in reverse

R - String in rot13

d - Integer in decimal

i - integer

% - Percent sign

x - Lowercase hex(loervase)

X - Uppercase hex (unsigned)

b - signed binary

o - signed octal

u - unsigned integer

p - pointer address

# Examples
Character: printf("%c", A); Output:: A

String: printf("%s", This is a string.); Output: This is a string.

Integer: printf("%i", 5); Output: 5

