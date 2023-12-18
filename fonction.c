#include <stdio.h>
#include "head.h"

int addition(int a , int b)
{
    int som;
    som = a+b;
    return som;
}
int multiplication(int a , int b)
{
    int pro;
    pro = a*b;
    return pro;
}
int soustration(int a , int b)
{
    int sous;
    sous = a-b;
    return sous;
}
int division(int a , int b)
{
    int div;
    if(b!=0)
        div = a/b;
    return div;
}