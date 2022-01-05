// exercício utilizando ponteiros, struct e criação de arquivo

#define _CRT_SECURE_NO_WARNINGS

// import das bibliotecas para execução do código
#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

// criação da variável de cadastro
// tipo de dado definido pelo usuário
typedef struct{
    char tefone_aluno[100];
    char email_aluno[100];
    char nome_aluno[100];
    char ru_aluno[100]; 
} LISTA_ALUNO;

// Função principal
int main(){

    //criação das variáveis para criação do arquivo de cadastro
    int cont = 0, i;

    LISTA_ALUNO lista_aluno[10], *aluno;

    // cria a estrutura para cadastrar o aluno
    aluno = lista_aluno;

    // comando para salvar os alunos listados
    FILE* arquivo = fopen("3310118.csv", "w");

    // registra os caracteres em português
    setlocale(LC_ALL, "Portuguese");

    // laço de repetição para cadastrar 10 alunos e
    // para verificar qual campo foi preenchido
    for(i = 0; i < 10; i++){
        printf("Aluno: %d\n", cont + 1);

        // recebe e registra o nome do aluno
        printf("Insira o NOME do aluno para registro: ");
        gets(aluno[cont].nome_aluno); 
        getchar();

        // recebe e registra o telefone do aluno
        printf("Insira o TELEFONE do aluno para registro: ");
        gets(aluno[cont].tefone_aluno); 
        getchar();

        // recebe e registra o e-mail do aluno
        printf("Insira o E-MAIL do aluno para registro: ");
        gets(aluno[cont].email_aluno); 
        getchar();

        // recebe e registra o RU do aluno
        printf("Insira a RU do aluno para registro: ");
        gets(aluno[cont].ru_aluno); 
        getchar();

        cont++;
        printf("\n___________________________________________________________________________________\n");
    }

    // laço de repetição para verificar os 10 registros e salvar o arquivo
    for(i = 0; i < cont; i++){
        fprintf(arquivo, "%s;", aluno[i].nome_aluno);
        fprintf(arquivo, "%s;", aluno[i].email_aluno);
        fprintf(arquivo, "%s;", aluno[i].tefone_aluno);
        fprintf(arquivo, "%s;", aluno[i].ru_aluno);
        fprintf(arquivo, "\n");
    }

    // comando para fechar o arquivo
    fclose(arquivo);

    return 0; 
}