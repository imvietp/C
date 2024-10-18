#include <stdio.h>
#include <stdint.h>

// Integer pointer
void _integer_pointer()
{
    int *ptr; // Integer pointer
    int num = 10;
    ptr = &num;

    printf("Value of Pointer = %d\n", *ptr);
    printf("Address of Pointer = %p\n", ptr);

}
 
// Array pointer
void _array_pointer()
{
    int array1[10] = {1, 3, 5, 7 ,6};
    int *ptr1;

    int array2[5] = {1, 3, 2, 5, 7};
    int (*ptr2)[5];


    ptr1 = array1;
    ptr2 = &array2;

    printf("Value of first element: %d\n", *ptr1);
    printf("Address of first element: %p\n", ptr1);
    printf("Value of second element: %d\n", *ptr2);
    printf("Address of second element: %p\n", ptr2);
}

// Structure pointer
struct student
{
    char name[10];
    int age;
    char class[10];
};

void _structure_pointer()
{
    struct student s1;
    struct student *ptr = &s1;

    printf("Name: ");
    scanf("%s", &ptr -> name);
    printf("Age: ");
    scanf("%d", &ptr -> age);
    printf("Class: ");
    scanf("%s", &ptr -> class);

    printf("\nName is %s\n", ptr -> name);
    printf("Age is %d\n", ptr -> age);
    printf("Class is %s\n", ptr -> class);

}

// Function pointer
int _function_pointer(int a, int b)
{
    return a + b;
}

void _print_function_pointer()
{
    int (*ptr)(int, int);
    ptr = &_function_pointer;

    int sum = (*ptr)(2, 3);

    printf("Sum of function pointer: %d", sum);
}

int main()
{
    //_integer_pointer();
    //_array_pointer();
    //_structure_pointer();
    _print_function_pointer();
}