#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //variáveis
    int altura;
    int fila;
    int coluna;
    int space;

    //loop criado para receber o número do usuário
    do
    {
        altura = get_int ("Defina a altura da pirâmide (1 a 8): ");
    }
    while (altura < 1 || altura > 8);

    //quando o programa deve pular a linha
    for (fila = 0; fila < altura; fila++)
    {
        //imprimir espaços
        for(space = 0; space < altura - fila - 1; space++)
        {
            printf(" ");
        }

        //imprimir blocos com #
        for (coluna = 0; coluna <= fila; coluna++)
        {
            printf("#");
        }
        printf("\n");

    }
}
