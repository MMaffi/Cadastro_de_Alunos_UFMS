# Cadastro de Alunos

**Autor:** Mateus Maffi  
**Data de Início:** 13/08/2025  
**Disciplina:** Algoritmos e Programação II  
**Descrição:**  
Este programa gerencia o cadastro de alunos da disciplina de Algoritmos e Programação II (2º semestre de 2025).  
O sistema utiliza um **vetor de structs** para armazenar no máximo **50 alunos**, permitindo cadastro, remoção, atualização de notas e exibição de relatórios de desempenho.

---

## Funcionalidades

- ✅ Criar `struct` para representar os alunos (nome, RGA, três notas e média de aproveitamento - MA)
- ✅ Implementar função para **cadastrar novo aluno**
- ✅ Implementar função para **atualizar notas** de um aluno pelo RGA
- ✅ Implementar função de busca dos alunos já cadastrados
- ⬜ Implementar função para **remover aluno** pelo RGA
- ⬜ Exibir **aprovados**:
  - ⬜ Mostrar nome, três notas e MA  
  - ⬜ Ordenar **por nome (ordem alfabética crescente)**
- ⬜ Exibir **reprovados**:
  - ⬜ Mostrar nome, três notas e MA  
  - ⬜ Ordenar **por MA (ordem decrescente)**  
  - ⬜ Caso MA igual → ordenar **por nome (ordem alfabética crescente)**
- ⬜ Exibir médias:
  - ⬜ Média das MAs dos aprovados  
  - ⬜ Média das MAs dos reprovados  
  - ⬜ Média das MAs de todos os alunos
- ⬜ Criar **menu interativo** para navegação das opções
- ⬜ Adicionar **tratamento de erros** (validação de entradas, limites, etc.)
- ⬜ Organizar o código em **funções auxiliares**
- ⬜ Comentar o código e adicionar cabeçalho com nome, data e descrição

Legenda:  
⬜ Não iniciado | ✅ Concluído

---

## Estrutura do Aluno (`struct`)

```c
typedef struct {
    int RGA;
    int nome[51];
    float nota1, nota2, nota3;
    float media;
    int aprovado; /* 1 = aprovado | 0 = reprovado */
} reg_aluno;
