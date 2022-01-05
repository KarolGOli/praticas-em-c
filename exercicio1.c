// exercício utilizando ponteiros e struct
// ler e exibir informacoes do aluno 

#include <stdio.h>
#include <string.h>

// criação da variável aluno
// tipo de dado definido pelo usuario
typedef struct aluno {
    int nRu_aluno;
    char nome_aluno[50];
};

// Função principal
int main(){
    
    // declara variável do tipo struct aluno e
    // declara variável do tipo ponteiro struct aluno
    struct aluno aluno1, *ptr_aluno1;
    ptr_aluno1 = &aluno1;

    int saida = 0, i;

    // leitura de dados do aluno
    printf("\n Informe o Nome do aluno:");
    gets(ptr_aluno1 -> nome_aluno);
    fflush(stdin);

    printf("\n Informe o RU do aluno:");
    scanf_s("%d", &ptr_aluno1 -> nRu_aluno);

    saida = strlen(ptr_aluno1 -> nome_aluno);

    // verifica e exibe se a RU é ímpar ou par
    if(ptr_aluno1 -> nRu_aluno % 2 == 0){
        printf("O RU %d e Par! \n", ptr_aluno1 -> nRu_aluno);
    } else{
        printf("O RU %d e Impar! \n", ptr_aluno1 -> nRu_aluno);
    }

    // função para escrever o nome invertido
    // exibir dados coletados
    for(i = saida; i >= 0; i--){
        printf("%c",ptr_aluno1 -> nome_aluno[i]);
    }

    return 0;

}