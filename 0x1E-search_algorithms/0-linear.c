#include "search_algos.h"
/**
 * function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: in array task
 * @size: size of the array
 * @value: value to compare
 * Return: Every time you compare a value in the array to the value
 * you are searching, you have to print this value (see example below)
 */
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
