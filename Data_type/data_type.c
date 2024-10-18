#include <stdio.h>

// There are 3 types of data type:
// Primitive: void, short, int, float, double, char, ...
// Also, there are have unsigned and signed, long and long long

// Derived Types: array, pointer, function.

// User Defined Data Types: struct, enum, union

// void is not a valid type for declaring variables. void * is valid though.
void primitive_type()
{
    int integer_type = 6;
    float float_type = 6.11;
    double double_type = 6.132;
    char char_type = 'd';
    printf("Integer = %d\n", integer_type);
    printf("Float = %f\n", float_type);
    printf("Double = %lf\n", double_type);
    printf("char_type = %c", char_type);
}

int main () 
{
    primitive_type();
}