//Resolução Exercicío 1
#include "stdio.h"
int main(){

    char frase[30] = "";
    char out[30] = "";

    while(scanf("%s",&frase) != EOF)
    {
        int i;
        for(i = 0; i < 30; i++)
        {
            if(frase[i] == '-')
                out[i] = '-';
            else if(frase[i] == '0')
                out[i] = '0';            
                else if(frase[i] == '1')
                out[i] = '1';
            else if(frase[i] == 'A' || frase[i] == 'B' || frase[i] == 'C')
                out[i] = '2';
            else if(frase[i] == 'D' || frase[i] == 'E' || frase[i] == 'F')
                out[i] = '3';
            else if(frase[i] == 'G' || frase[i] == 'H' || frase[i] == 'I')
                out[i] = '4';
            else if(frase[i] == 'J' || frase[i] == 'K' || frase[i] == 'L')
                out[i] = '5';
            else if(frase[i] == 'M' || frase[i] == 'N' || frase[i] == 'O')
                out[i] = '6';
            else if(frase[i] == 'P' || frase[i] == 'Q' || frase[i] == 'R' || frase[i] == 'S')
                out[i] = '7';
            else if(frase[i] == 'T' || frase[i] == 'U' || frase[i] == 'V')
                out[i] = '8';
            else if(frase[i] == 'W' || frase[i] == 'X' || frase[i] == 'Y' || frase[i] == 'Z')
                out[i] = '9';
            else if(frase[i] == ' '){
            out[i] = '\0';
            }
        }
        
        printf("%s", out);
        
    }

}