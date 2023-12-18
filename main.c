#include<stdio.h>
#include <stdlib.h>
#include "head.h"
int main()
{
    int choix;
    int a,b;
    do
    {
        system("clear");
        printf("########################################\n");
        printf("\t 1 -> add\n");
        printf("\t 2 -> sous\n");
        printf("\t 3 -> mul\n");
        printf("\t 4 -> div\n");
        printf("\t 0 -> QUIT\n");
        printf("\n faites un choix !!");
        scanf("%d",&choix);
        if( choix > 0 && choix < 5)
        {
            printf("entrez les deux nombre a et b\n");
            scanf("%d %d",&a,&b);
        }
        switch (choix)
        {
    
            case 3:
                printf("la somme est : %d ", multiplication(a,b));
                break;
            case 2:
                printf("la division est %d ", soustration(a,b));
                break;
            case 1:
                printf("somme est %d\n",addition(a,b));
                break;
            case 4:
                printf("la divition est %d\n",division(a,b));
                break;
            case 0:
                printf("merci:)\n");
                break;
            default:
                printf("option invalide !!\n");
                break;
        }
    }while(choix != 0);
    
    

    return 0;
}