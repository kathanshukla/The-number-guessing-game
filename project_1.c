#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, number, s, i, guess = 0;
    srand(time(0));
    num = rand();
    s = num % 100 + 1;
    // printf("%d",s);
restart:
    printf("Guess the number........\n");
    
    do
    {

        scanf("%d", &number);
        if (number < s)
        {
            printf("Enter a higer number!\n");
        }
        if (number > s)
        {
            printf("Enter a lower number!\n");
        }
        guess++;
    } while (number != s);

    printf("You guess it in %d try\n", guess);

    printf("Enter 0 for Exit\n");
    scanf("%d", &i);


    return 0;
}
