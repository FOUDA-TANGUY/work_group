#include<stdio.h>
#include "head.h"
int main()
{
    int choix;
    int a,b;
    do
    {
        printf("########################################\n");
        printf("\t 1 -> add\n");
        printf("\t 2 -> sous\n");
        printf("\t 3 -> mul\n");
        printf("\t 4 -> div\n");
        printf("\t 0 -> QUIT\n");
        printf("\n faites un choix !!");
        scanf("%d",&choix);
        if( choix != 0)
        {
            printf("entrez les deux nombre a et b\n");
            scanf("%d %d",&a,&b);
        }
        switch (choix)
        {
        case 1:
            printf("")
            /* code */
            break;
        
        default:
            break;
        }
    }while(choix != 0);
    

    return 0;
}