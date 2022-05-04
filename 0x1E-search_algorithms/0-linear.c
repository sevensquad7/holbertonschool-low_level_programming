#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("value checked array[%ld] = [%i]\n", i, value);
            return i;
        }
        if (i == size)
        {
            return -1;
        }
        
    }
    return -1;

}
