#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int SnakeWaterGun(char you, char comp)
{
    // Here 0 Means Draw, 1 Means Win and -1 Means Lose.
    // For Condition ss gg ww
    if (you == comp)
        return 0;

    // For Rest of the Conditions sw ws sg gs wg gw
    if (you == 's' && comp == 'w')
        return 1;

    else if (you == 'w' && comp == 's')
        return -1;

    if (you == 'g' && comp == 's')
        return 1;

    else if (you == 's' && comp == 'g')
        return -1;

    if (you == 'w' && comp == 'g')
        return 1;

    else if (you == 'g' && comp == 'w')
        return -1;
}
int main()
{
    char you, comp;
    int result;
    int number;

    // Random Number Generator
    srand(time(0));
    number = rand() % 100 + 1;

    // Computer Character Choosing
    if (number > 33 && number < 66)
        comp = 's';

    else if (number > 66)
        comp = 'w';

    else
        comp = 'g';

    // Asking User to Input
    printf("Enter 's' for Snake 'w' for Water and'g' for Gun : ");
    scanf("%c", &you);

    // Calling Game Function
    result = SnakeWaterGun(you, comp);

    printf("You Choose %c and Computer Choose %c\n\t So ", you, comp);
    // Checking Conditions
    if (result == 0)
        printf("Game Draw!");

    else if (result == 1)
        printf("You Win!");

    else
        printf("You Lose!");
    return 0;
}