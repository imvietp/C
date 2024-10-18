#include <stdio.h>
#include <stdint.h>

/*
    OPERATOR
    - Unary Operator (toán tử một ngôi): ++, --
    - Binary Operator
        +  -  *  /  % 
        ==  <=  >=  !=
        >>  <<  |  &  ^  ~ 
        && || ! 
        =  +=  -=  *=  /=  %=

*/

uint8_t bit_manipulation(uint8_t number_original, uint8_t number_change)
{
    // uint8_t number_original = 1;

    number_change = (number_original >> 1);
    

    // *number_change_2 = (number_original << 1);

    return number_change;
}

void _print_bit_manipulation()
{
    uint8_t number_o;
    uint8_t number_c;
    printf("Type any number you want: ");
    scanf("%hhu", &number_o);
    // uint8_t result = bit_manipulation(&number_one, &number_two);
    uint8_t result = bit_manipulation(number_o, number_c);
    printf("The number after change: %hhu", result);
}

int _arithmetic_Operator(int first_number, int second_number, int *sum, int *minus, float *time, float *division)
{
    *sum         = first_number + second_number;
    *minus       = first_number - second_number;
    *time        = first_number * second_number;
    *division    = first_number / second_number;
}

void _print_arithmetic_Operator()
{
    int a, b;
    printf("Type number a and b: ");
    scanf("%d%d", &a, &b);

    int sum, minus;
    float time, division;

    _arithmetic_Operator(a, b, &sum, &minus, &time, &division);

    printf("Sum      = %d\n", sum);
    printf("Minus    = %d\n", minus);
    printf("Time     = %f\n", time);
    printf("Division = %f\n", division);

}


// Increment postfix
int _unary_Operator_IncrementA(int k, int index)
{
    k = index++;
    return k;
}

void _print_unary_Operator_IncrementA()
{
    int k = 0;
    int index;

    printf("Type index = ");
    scanf("%d", &index);

    int total = _unary_Operator_IncrementA(k, index);

    printf("\nAfter postfix: K = %d", total);
}


// Increment prefix
int _unary_Operator_PreIncrementA(int k, int index)
{
    k = ++index;
    return k;
}

void _print_unary_Operator_PreIncrementA()
{
    int k, index;

    printf("Type index = ");
    scanf("%d", &index);

    int total = _unary_Operator_PreIncrementA(k, index);

    printf("\nAfter prefix: K = %d", total);
}


int main()
{
    // _print_arithmetic_Operator();
    // _print_unary_Operator_IncrementA();
    _print_unary_Operator_PreIncrementA();
}