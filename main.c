/* 

    This program generates two random integer arrays of user given
    dimensions, and multiplies them using parallel processing, displaying
    the result.

    Programmers: Christopher Grant and  
    Date: November 15, 2016
*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void printArray(int ** array, int n)
{
    printf("Matrix of size %dx%d: \n", n,n);
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
    time_t t;
    /* ask user for input, how large will these matrices be?
     allow for only one input of nxn, same dimension matrices
     this is only a weeklong project, maybe come back later? */
    printf("Hello, how large would you like the matrices to be? (nxn) ");
    scanf("%d", &n);

    // generate 2 random integer arrays with given dimension
    srand((unsigned) time(&t)); // seed rand with time
    int **arrayOne = malloc(n * sizeof(int*));    
    int **arrayTwo = malloc(n * sizeof(int*));
    int **arrayResult = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        arrayOne[i] = malloc(n * sizeof(int));
        arrayTwo[i] = malloc(n * sizeof(int));
        arrayResult[i] = malloc(n * sizeof(int));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // values are under 10 for pretty-print, perhaps use fields
            // to allow for pretty larger numbered matrices (up to 100?)
            arrayOne[i][j] = rand() % 10;
            arrayTwo[i][j] = rand() % 10;
        }
    }

    printArray(arrayOne, n);
   
    // multiply the arrays

    
    // housekeeping and boilerplate
    free(arrayOne);
    free(arrayTwo);
    return 0;
}
