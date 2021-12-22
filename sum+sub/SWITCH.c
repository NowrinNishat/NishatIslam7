#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("\nThis Is a Grade Checker Program\n");
    printf("\n");
    printf("\nEnter The Marks : ");
    scanf("%d", &marks);
    if(marks>100)
    {
        /* Marks greater than 100 */
        printf("\nDon't Be Smart Enter your Marks Between Limit\n");
    }
    else
    {
        switch(marks/10)
        {
        case 10 :
        case 9 :
            /* Marks between 90-100 */
            printf("\nYour Grade Is: A+");
            break;
        case 8 :
        case 7 :
            /* Marks between 70-89 */
            printf("\nYour Grade Is: A  " );
            break;
        case 6 :
            /* Marks between 60-69 */
            printf("\nYour Grade Is: A-  " );
            break;
        case 5 :
        case 4 :
            /* Marks between 40-59 */
            printf("\nYour Grade Is: B  ");
            break;
        default :
            /* Marks less than 40 */
            printf("\nYou Grade Is: F  \n");
        }
    }
    return 0;
}


