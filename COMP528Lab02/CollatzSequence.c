/*
 * Written by Dr Maryam Abo-Tabik
*/ 

#include <stdio.h>


/*Collatz should return f(x) where 
f(x) is x/2 if x is even, 
and f(x) is 3x+1 if x is odd*/
int collatz(unsigned int x)
{
    if (x % 2)
        return (3 * x) + 1;
    else
        return x / 2;
}

/*The function returns the length of the sequence
/*It should take x, and repeatedly call collatz 
until x == 1, while counting how many calls it makes*/
int count_length(unsigned int x)
{
    int count = 0;
    while (x != 1) {
        x = collatz(x);
        count++;
    }
    return count;
}

int main(int argc, char* argv[])
{
    unsigned int i, init = 0, count = 0;

    for (i = 1; i < 1000000; i++)
    {
        //Find the length of the collatz sequence starting from i
        unsigned int k = count_length(i);
        
        if (k > count)
        {
            /*Only print if we find a longer sequence length*/
            count = k;
            i;
            printf("The sequence length for the number %u equals %u \n", i, count);
        }
    }

    return 0;
}

//
