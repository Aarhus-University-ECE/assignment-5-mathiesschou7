#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>




int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
 /* Creating a boolean array, where all values is false as default */
    int exist[size - 1];
    for(int i = 0; i < size - 1; i++)
    {
        exist[i] = 0;
    }

    /* For-loop with a nested if-else expression for calculating the differences */
    for(int i = 0; i < size - 1; i++)
    {
        int t; 

        if(seq[i] > seq[i + 1])
        {
            t = seq[i] - seq[i + 1];
        }
        else
        {
            t = seq[i + 1] - seq[i];
        }
        
    /* If our temporary value is over 0, and t is smaller than size, return 'false'*/
        if(t > 0 && t < size)
            exist[t - 1] =  1;
    }    
    
    /* Checking if all differences of values is present */
        for(int i = 0; i < size; i++)
        {
            if(exist[i] == 0)
            return 0;
        }

// Postcondition: answer to exercise 7.a 
    return 1;
}

