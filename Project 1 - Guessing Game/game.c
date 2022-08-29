#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,guess_count = 0;
    //Random Number Generator
    srand(time(0));
    number = rand()%100 + 1;

    do
    {
        printf("Guess a Number Between 1 to 100 : ");
        scanf("%d",&guess);

        if(guess > number)
            printf("Lower Number Please!\n");

        else if(guess < number)
            printf("Higher Number Please!\n");

        else 
            printf("You'ves Guessed it Correctly in %d Attemps",guess_count);

        guess_count += 1;

    } while (guess!=number);
    
    return 0;
}