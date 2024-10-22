#include <stdio.h>

int _swap_function(int *first_number, int *second_number)
{
    int temp;
    temp = *first_number;
    *first_number = *second_number;
    *second_number = temp;
}

int _bubble_sort(int array[], int size_array)
{   
    int swapped;
    for (int i = 0; i < size_array - 1; ++i)
    {
        swapped = 0;
        for (int j = 0; j < size_array - 1 - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                _swap_function(&array[j], &array[j + 1]);
                swapped = 1;
            }
        } 
        if (swapped == 0)
        {
            break;
        }
    }


    
}


int main()
{
    int array_main[100];
    
    int size_of_element;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size_of_element);

    printf("Nhap %d phan tu trong mang: ", size_of_element);
    for (int i = 0; i < size_of_element; i++)
    {
        scanf("%d", &array_main[i]);
    }
    
    _bubble_sort(array_main, size_of_element);

    for (int i = 0; i < size_of_element; i++)
    {
        
        printf("%d ", array_main[i]);
    }
    
    



}