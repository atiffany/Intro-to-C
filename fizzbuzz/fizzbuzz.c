#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
*/
int fizzbuzz(int n);

int fizzbuzz(int n)
{
    int counter = 0;
    for (int i = 1; i < n; ++i)
    {
        printf("i is equal to %d: \n", i);
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("buzz\n");
        }
        else 
        {
            printf("Not divisible\n");
            counter++;
        }
    }
    printf("Returned nothing %d times.\n", counter);
    return counter;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(7);
    return 0;
}
#endif