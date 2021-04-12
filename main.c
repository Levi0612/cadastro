#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// crie um programa em c
// que faca cadastros em um arquivo txt
// que preocure usuarios ja cadatrados
char nomes[20][20];
char lista[] = "lista.txt";
int i, j;
FILE *users;

// Função para cadastrar usuarios
int cadastrar()
{
    system("clear");
    users = fopen(lista, "a");
    printf("\nNome: ");
    scanf("%s", &nomes[i]);
    fprintf(users, "\n%s", nomes[i]);
}
// Função para buscar nomes
int buscar_nome()
{
     
    users = fopen(lista, "r");
    for (i = 0; i < 5; i++)
    {
        fscanf(users, "%s", &nomes[i]);
        printf("\n%s", nomes[i]);
         
    }
    printf("###################");
}
// Menu opcoes
int menu()
{

    do
    {
        printf("\n1 - Cadastrar");
        printf("\n2 - Procurar");
        printf("\n3 - # Sair #");
        printf("\nOpção: ");
        scanf("%i", &i);
        system("clear");
        switch (i)
        {
        case 1:
            cadastrar();
            break;

        case 2:
            buscar_nome();
            break;
        case 3:
            system("clear");
            break;
        default:
            break;
        }
    } while (i != 3);
}

int main()
{
    menu();
}

// .......