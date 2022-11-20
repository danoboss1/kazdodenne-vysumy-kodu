#include <stdio.h>

enum week{Mon, Tue, Wed, Thu, Fri, Sat, Sun} day;

int main()
{
    unsigned num_days;

    printf("Enter num of days and i will write which day it is\n");
    scanf("%u", &num_days);

    day = num_days % 7;

    switch(day)
    {
        case 0:
            printf("On this date is Monday");
            break;
        case 1:
            printf("On this date is Tuesday");
            break;
        case 2:
            printf("On this date is Wednesday");
            break;
        case 3:
            printf("On this date is Thursday");
            break;
        case 4:
            printf("On this date is Friday");
            break;
        case 5:
            printf("On this date is Saturday");
            break;
        case 6:
            printf("On this date is Sunday");
            break;

        default:
            printf("ERROR = something went wrong!");
    }

    printf("\n");
    printf("I count days from 0, so 1st Monday is 0");

    return 0;
}