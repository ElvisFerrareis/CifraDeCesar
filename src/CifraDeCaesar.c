/***********************************************/
/* Aluno: Elvis Jonas Ferrareis                */
/* N�mero FEI: 22209073-0                      */
/* Exercicio 17 Lista 8 (String)               */
/* CC2621 --2010 --turma 610 --Prof. Monael    */
/* Compilador: 4.9.9.2 (DevC++) vers�o 4.9.9.2 */
/***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

void CifraDeCaesar(char*, char*);

int main(void)
{
    char texto[TAM], codificado[TAM];
    
    printf("CODIFICADOR DE CAESAR");
    printf("\n\nDigite a frase que deseja codificar:\n\n     ");
    gets(texto);
    CifraDeCaesar(texto, codificado);
    printf("\nSua frase:  %s\nCodificada: %s\n\n", texto, codificado);
    system("pause");
}    

void CifraDeCaesar(char *t, char *c)
{
    int i;
    
    for(i = 0; i < TAM; i++)
    {
        if((t[i] >= 65 && t[i] <= 90) || (t[i] >= 97 && t[i] <= 122))
        {
             if((t[i] >= 88 && t[i] <= 90) || (t[i] >= 120 && t[i] <= 122))
             {
                 c[i] = t[i] - 23;                 
             }
             else
             {                  
                 c[i] = t[i] + 3;
             }        
        }        
        else
        {
             c[i] = t[i];
        }
    }
}
