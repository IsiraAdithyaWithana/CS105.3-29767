#include <stdio.h>
int main()
{

    //Selection & Loops
    //Part A
    //Question 05
    int mo;

    printf("Enter a month number\n");
    scanf("%d",&mo);
    printf("\n");

    switch(mo)
    {
        case 1:printf("January - 31 Days");break;
        case 2:printf("February - 28 Days");break;
        case 3:printf("March - 31 Days");break;
        case 4:printf("April - 30 Days");break;
        case 5:printf("May - 31 Days");break;
        case 6:printf("June - 30 Days");break;
        case 7:printf("July - 31 Days");break;
        case 8:printf("August - 31 Days");break;
        case 9:printf("September - 30 Days");break;
        case 10:printf("October - 31 Days");break;
        case 11:printf("November - 30 Days");break;
        case 12:printf("December - 31 Days");break;
        default:printf("This is not a valid month number");
        /*
        case 1:
        case 2:
        case 3:
        printf("ghsdfjka");break;   //we can also use this method
        */
    }
    printf("\n\n");
}
