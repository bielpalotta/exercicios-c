#include <stdio.h>
#include <stdint.h>

#define MAX_ALUNOS 40
#define MAX_NOTA 10
#define ANO_ATUAL 2026

typedef struct {
    char nome[50];
    uint8_t idade;
    int32_t matricula;
    float nota;
} Aluno;

int main() {
    Aluno aluno = {"Gabriel", 18, 12345, 8.5};

    printf("=== Cadastro de Aluno ===\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %u anos\n", aluno.idade);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota: %.2f\n", aluno.nota);

    printf("\nLimite de alunos: %d\n", MAX_ALUNOS);
    printf("Nota maxima: %d\n", MAX_NOTA);
    printf("Ano atual: %d\n", ANO_ATUAL);

    return 0;
}
