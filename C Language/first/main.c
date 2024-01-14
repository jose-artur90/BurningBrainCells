/**
 * @file main.c
 * José Matos (jose.artur.matos90@gmail.com)
 * @brief 
 * version 0.1
 * 2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int start, final, n, years, dif, populationFirstYear=1;

    do
    {
        printf("Indique a populaçao inicial: \n");
        scanf("%d", &start);
    } while (start<9);//numero minimo de populaçao premitida(>9 individuos)

    do
    {
        printf("Indique populaçao final: %d\n");
        scanf("%d", &final);
    } while (start>final);
    
    for (int i = start; i < final; i++)
    {
        populationFirstYear=start+start/3-start/4;
        printf("%d",&populationFirstYear);
    }//ver algo aqui valor gravado em endreço de memoria e ta a ser mal envocado
    

    return 0;

} 