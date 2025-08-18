#include <stdio.h>

/* Declaração do Registro */
typedef struct {

    int RGA;
    char nome[51];
    float nota1, nota2, nota3;
    float media;
    int aprovado; /* 1 = aprovado | 0 = reprovado */

} reg_aluno;

int menu();

int buscaalunos(reg_aluno alunos[], int RGA, int n);

int main(void) {

    /* -------- Declaração de variaveis ------- */
    reg_aluno alunos[50];
    int n = 0;
    int opcao;
    int RGA;
    int pos_aluno;
    int i;
    /* --- Fim das declarações de variáveis --- */

    do {

        opcao = menu();

        switch (opcao) { /* Início do Switch Case */
            case 1: /* Cadastrar Aluno */
                printf("Informe o seu RGA: ");
                scanf("%d", &RGA);

                /* Chamada da função Busca Alunos */
                pos_aluno = buscaalunos(alunos, RGA, n);

                if (pos_aluno != -1) {
                    printf("\nAluno Já Cadastrado!\n");
                } else {
                    alunos[n].RGA = RGA;
                    printf("Informe o seu nome:");
                    scanf(" %[^\n]", alunos[n].nome);
                    printf("Informe as suas notas: ");
                    scanf("%f %f %f", &alunos[n].nota1, &alunos[n].nota2, &alunos[n].nota3);
                    alunos[n].media = (alunos[n].nota1 + alunos[n].nota2 + alunos[n].nota3) / 3;
                    if (alunos[n].media >= 6) {
                        alunos[n].aprovado = 1;
                    } else {
                        alunos[n].aprovado = 0;
                    }
                    n++;
                }
                printf("\nPressione ENTER para continuar...\n");
                getchar(); /* consome o \n que sobrou do scanf */
                getchar(); /* espera o ENTER */
                break;

            case 2: /* Remover um aluno através do RGA */
                printf("Excluir Aluno!\n");
                printf("\nPressione ENTER para continuar...\n");
                getchar();
                getchar();
                break;

            case 3: /* Atualizar dados do aluno pelo RGA */
                printf("Informe o seu RGA: ");
                scanf("%d", &RGA);

                /* Chamada da função Busca Alunos */
                pos_aluno = buscaalunos(alunos, RGA, n);

                if (pos_aluno == -1) {
                    printf("\n Aluno não cadastrado!\n");
                } else {
                    printf("Digite suas novas notas: ");
                    scanf("%f %f %f", &alunos[pos_aluno].nota1, &alunos[pos_aluno].nota2, &alunos[pos_aluno].nota3);
                    alunos[pos_aluno].media = (alunos[pos_aluno].nota1 + alunos[pos_aluno].nota2 + alunos[pos_aluno].nota3) / 3;
                    if (alunos[pos_aluno].media >= 6) {
                        alunos[pos_aluno].aprovado = 1;
                    } else {
                        alunos[pos_aluno].aprovado = 0;
                    }
                }
                printf("\nPressione ENTER para continuar...\n");
                getchar();
                getchar();
                break;

            case 4: /* Relatórios */
                printf("Exibir o relatórios!\n");
                printf("\nPressione ENTER para continuar...\n");
                getchar();
                getchar();
                break;

            case 5: /* Mostrar todos os dados */
                printf("\n RGA \t Nome \t N1 \t N2 \t N3 \t Média \t Aprovado");
                printf("\n --- \t ---- \t -- \t -- \t -- \t ----- \t --------");
                for (i = 0; i < n; i++) {
                    printf("\n %d \t %s \t %.2f \t %.2f \t %.2f \t %.2f \t %d",
                        alunos[n - 1].RGA,
                        alunos[n - 1].nome,
                        alunos[n - 1].nota1,
                        alunos[n - 1].nota2,
                        alunos[n - 1].nota3,
                        alunos[n - 1].media,
                        alunos[n - 1].aprovado);
                }
                printf("\nPressione ENTER para continuar...\n");
                getchar();
                getchar();
                break;

            case 0: /* Encerrar Sistema */
                printf("Sistema Encerrado!\n");
                break;

            default:
                printf("Opção inválida!\n");
                printf("\nPressione ENTER para continuar...\n");
                getchar();
                getchar();
                break;
        } /* Fim do Switch Case */

    } while (opcao != 0);

    return 0;
}

/* Função do MENU */
int menu() {

    int opcao;

    printf("=============================================\n");
    printf("       🏫  Seja Bem-Vindo ao CadAlunos!  🏫\n");
    printf("=============================================\n");
    printf("Esse programa permite:\n");
    printf(" - Cadastro de novos alunos\n");
    printf(" - Alterações de registros\n");
    printf(" - Exclusões\n");
    printf(" - Exibição de relatórios\n");
    printf("---------------------------------------------\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("  [1] Novo Aluno\n");
    printf("  [2] Excluir Aluno\n");
    printf("  [3] Alterar Cadastro\n");
    printf("  [4] Exibir Relatórios\n");
    printf("  [5] Mostrar Todos os Dados\n");
    printf("  [0] Sair\n");
    printf("=============================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    return opcao;
}

/* Função buscar alunos */
int buscaalunos(reg_aluno alunos[], int RGA, int n) {

    int i;

    for (i = 0; i < n; i++) {
        if (alunos[i].RGA == RGA) {
            return i;
        }
    }
    return -1;

}
