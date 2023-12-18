#include<stdio.h>
#include "head.h"
int main()
{
    int choix;
    do
    {
        printf("########################################\n");
        print("\t 1 -> add\n");
        print("\t 2 -> sous\n");
        print("\t 3 -> mul\n");
        print("\t 4 -> div\n");
        print("\t 0 -> QUIT\n");
        printf("\n faites un choix !!");
        scanf("%d",&choix);

    }while(choix != 0);
    

    return 0;
}