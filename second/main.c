
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
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //inserçao do utilizador 
    int n=0;
    do
    {
        printf("insira tamnaho da piramide: \n");
        scanf("%d", &n);
    } while(n<1 && n>9);
  
    //deenho da piramide
    for (int linha = 0; linha < n; linha++)
    {
        for (int espaco = 0; espaco < n-linha-1 ; espaco++)
        {
            printf("-");
        }        
        for (int coluna = 0; coluna <=linha ; coluna++)
        {
            printf("+");
        }
        printf("\n");
    } 
return 0;
}
