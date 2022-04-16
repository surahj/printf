# _printf
A formatted output conversion C program completed as part of the low-level programming and algorithm track at Holberton School. The program is a pseudo- recreation of the C standard library function, ```printf```.

# Description

The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.

```Prototype: int _printf(const char *format, ...)```;

# Return value
Upon successful return, ```_printf``` returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns ```-1```

