#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tabuleiro[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            tabuleiro[i][j] = '-';
            if ((i < 2) && ((i + j) % 2 != 0))
            {
                tabuleiro[i][j] = '#';
            }
            else if ((i > 3) && ((i + j) % 2 != 0))
            {
                tabuleiro[i][j] = 'o';
            }

            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }
    char letraColuna, direcao;
    int coluna, linha;

    scanf("%c%d", &letraColuna, &linha);
    coluna = letraColuna;
    
    switch (coluna)
    {
    case 97:
        coluna = 0;
        break;
    case 98:
        coluna = 1;
        break;
    case 99:
        coluna = 2;
        break;
    case 100:
        coluna = 3;
        break;
    case 101:
        coluna = 4;
        break;
    case 102:
        coluna = 5;
        break;
    }
    switch(linha){
        case 1: linha=5;break;
        case 2: linha=4;break;
        case 3: linha =3;break;
        case 4: linha= 2;break;
        case 5: linha=1;break;
        case 6: linha=0;break;
    }
    printf("A linha é %d e a coluna é %d\n",linha,coluna);
    
    tabuleiro[linha][coluna] = '0';
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}