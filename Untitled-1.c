#include <stdio.h>

#define MAX 50

typedef struct {
    char descricao[50];
    float valor;
    int status; 
} Conta;

int main() {
    Conta pagar[MAX], receber[MAX];
    int qtdPagar = 0, qtdReceber = 0;
    int opcao, i, codigo;
    float totalPagar, totalReceber;

do {
    printf("\n===== CONTROLE FINANCEIRO =====\n");
        printf("1 - Cadastrar conta a pagar\n");
        printf("2 - Cadastrar conta a receber\n");
        printf("3 - Listar contas a pagar\n");
        printf("4 - Listar contas a receber\n");
        printf("5 - Resumo financeiro\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
}
   