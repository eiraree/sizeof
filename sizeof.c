#include <stdio.h>

int main() {
    
    char arr1[25] = "\0";
    short arr2[30] = {0}; 
    int arr3[40] = {0};
    
    printf ("Size of char: %d \n", (int)sizeof (char));
    printf ("Size of short: %d \n", (int)sizeof (short));
    printf ("Size of int: %d \n", (int)sizeof (int));
    printf ("Size of long: %d \n", (int)sizeof (long));
    printf ("Size of float: %d \n", (int)sizeof (float));
    printf ("Size of double: %d \n", (int)sizeof (double));
    printf ("Size of arr1: %d \n", (int)sizeof (arr1));
    printf ("Size of arr2: %d \n", (int)sizeof (arr2));
    printf ("Size of arr3: %d \n", (int)sizeof (arr3));
 
}