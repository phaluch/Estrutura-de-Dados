#include <stdlib.h>
#include <stdio.h>
#include <C:/Users/pedro/Git/Estrutura-de-Dados/haluch.h>

/*  Insertion-Sort implementation

    Values are reordered inplace, following the same logic
as someone picking cards off of a pile.
    You pick the first card, and after that compare the next one
to the ones you already have. You insert the card as soon as you
find a next-value that's bigger than the current one.   */

void main()
{
    int * v;
    int current,i,j,n = 6;

    //Declaring a n-size integer vector
    v = n_vector_int(n);

    //Manually filling the values for testing's sake
    v[0] = 4;
    v[1] = 3;
    v[3] = 2;
    v[2] = 1;
    v[4] = 5;
    v[5] = 0;


    for(i=1;i<n;i++)
    /*
    Notice this for loop starts at the second item, because you can't
    compare the first one to nothing.
    */
    {

        current = v[i]; //This is the value that's just "been picked"
        j = i-1; //j will be the indexes we'll iterate over. It starts at the value immediately before i
        while(j >= 0 && v[j] > current)
        /*

        */
        {
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = current;
    }

    for(i=0;i<n;i++)
    {
        printf("%d...",v[i]);
    }
}
