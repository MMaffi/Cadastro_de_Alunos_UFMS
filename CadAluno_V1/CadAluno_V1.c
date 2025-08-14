#include <stdio.h>

/* Declaração do Registro */
typedef struct {

    int RGA;
    int nome[51];
    float nota1, nota2, nota3;
    float media;
    int aprovado; /* 1 = aprovado | 0 = reprovado */

} reg_aluno;

int menu();

int main(void) {

    /* -------- Declaração de variaveis ------- */
    reg_aluno alunos[50];
    int n = 0;
    int opcao;
    int RGA;
    int pos_aluno;
    /* --- Fim das declarações de variáveis --- */

    do {

        opcao = menu();

        switch (opcao) { /* Início do Switch Case */
            case 1: /* Cadastrar Aluno */
                scanf("%d", &RGA);

                /* -----------Inicio---------- */
                /* Transformar na função busca */
                /* --------------------------- */
                encontrou = 0;
                for (i = 0; i < n; i++) {
                    if (alunos[i].RGA == RGA) {
                        encontrou = 1;
                        i = n;
                    }
                }
                /* ------------Fim------------ */
                /* Transformar na função busca */
                /* --------------------------- */

                if (encontrou) {
                    printf("Aluno Já Cadastrado!");
                } else {
                    alunos[n].RGA = RGA;
                    printf("Informe o seu nome:");
                    scanf(" %[^\n]", alunos[n].nome);
                    prinf("Informe as suas notas: ");
                    scanf("%f %f %f", &alunos[n].nota1, &alunos[n].nota2, &alunos[n].nota3);
                    alunos[n].media = (alunos[n].nota1 + alunos[n].nota2 + alunos[n].nota3) / 3;
                    if (alunos[n].media >= 6) {
                        alunos[n].aprovado = 1;
                    } else {
                        alunos[n].aprovado = 0;
                    }
                    n++;
                }
                break;

            case 2: /* Remover um aluno através do RGA */
                printf("Excluir Aluno!");
                break;

            case 3: /* Atualizar dados do aluno pelo RGA */
                printf("Atualizar Dados Aluno!");
                scanf("%d", &RGA);

                /* -----------Inicio---------- */
                /* Transformar na função busca */
                /* --------------------------- */
                encontrou = 0;
                for (i = 0; i < n; i++) {
                    if (alunos[i].RGA == RGA) {
                        encontrou = 1;
                        pos_aluno = i;
                        i = n;
                    }
                }
                /* ------------Fim------------ */
                /* Transformar na função busca */
                /* --------------------------- */

                if (!encontrou) {
                    printf("\n Aluno não cadastrado!");
                } else {
                    prinf("Digite suas novas notas: ");
                    scanf("%f %f %f", &alunos[pos_aluno].nota1, &alunos[pos_aluno].nota2, &alunos[pos_aluno].nota3);
                    alunos[pos_aluno].media = (alunos[pos_aluno].nota1 + alunos[pos_aluno].nota2 + alunos[pos_aluno].nota3) / 3;
                    if (alunos[pos_aluno].media >= 6) {
                        alunos[pos_aluno].aprovado = 1;
                    } else {
                        alunos[pos_aluno].aprovado = 0;
                    }
                }
                break;

            case 4: /* Relatórios */
                printf("Exibir o relatórios!");
                break;

            case 5: /* Mostrar todos os dados */
                printf("\n RGA \t Nome \t N1 \t N2 \t N3 \t Média \t Aprovado");
                for (i = 0; i < n; i++) {
                    printf("\n %d \t %s \t %.2f \t %.2f \t %.2f \t %.2f \t %d", alunos[n].RGA, alunos[n].nome, alunos[n].nota1, alunos[n].nota2, alunos[n].nota3, alunos[n].media, alunos[n].aprovado);
                }
                break;

            case 0: /* Encerrar Sistema */
                printf("Encerrar o Sistema!");
                break;

            default:
                printf("Opção inválida!");
                break;
        } /* Fim do Switch Case */

    } while (opcao != 0);

    return 0;
}

/* Função do MENU */
int menu() {

    int opcao;

    printf("MENU");
    scanf("%d", opcao)

    return opcao;
}
