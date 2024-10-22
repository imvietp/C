#include <stdio.h>

int _swap_function(int *number_one, int *number_two)
{
    int temp;
    temp = *number_one;
    *number_one = *number_two;
    *number_two = temp;
}

int _selection_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                min_index = j;
            }
        }
        _swap_function(&array[i], &array[min_index]);
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
    
    _selection_sort(array_main, size_of_element);

    for (int i = 0; i < size_of_element; i++)
    {
        
        printf("%d ", array_main[i]);
    }
}