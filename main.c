/* 

    This program generates two random integer arrays of user given
    dimensions, and multiplies them using parallel processing, displaying
    the result.



    Programmers: Christopher Grant and  
    Date: November 15, 2016
*/

#include "stdio.h"
#include "stdlib.h"

void printArray(int ** array, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int n;
    /* ask user for input, how large will these matrices be?
     allow for only one input of nxn, same dimension matrices
     this is only a weeklong project, maybe come back later? */
    printf("Hello, how large would you like the matrices to be? (nxn) ");
    scanf("%d", &n);

    // generate a random integer array with given dimension
    // malloc will have to be used, using a 2d array 
        

    // multiply the arrays
}
