
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Problem: design a program that takes in numbers
    from users and stores them in an array of which
    the user will determine the size of the array.
    The program should also print the stored values
    entered in the array...
    */

    printf("Would you Like To Store your numbers? (y/n) \n");
    char proceed;
    char pstv = 'y';
    char ngtv = 'n';
    scanf("%c", &proceed);

    char next1 = tolower(proceed);
    printf("%c \n", next1);

    if (next1 == pstv){
        printf("Enter the number of value you want store: ");

    }else if(next1 == ngtv){
        printf("Thank you \n do have a lovely day ahead.");
    }else{
        printf("Invalid Entry");
    }

    return 0;
}
