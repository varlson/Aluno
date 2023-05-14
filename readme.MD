# About this Repo

# This is the a first challenge given by data structure teacher

The challenge consist in an implementation using a prototype given by teacher

## Prototype

```c
// This is aluno header file
#ifndef ALUNO_H
#define ALUNO_H

typedef struct aluno Aluno;

typedef struct turma Turma;

// Manter como especificado
void lerInfos(int*, char*);

// Manter como especificado
Aluno* alocaAluno();

// Manter como especificado
Turma* alocaTurma(int);

// Manter como especificado
void desalocaAluno(Aluno**);

// Manter como especificado
void desalocaTurma(Turma**);

// Manter como especificado
void lerTurma(Turma*);

// Manter como especificado
float calcularMetrica(Turma*, char*, char);

// Manter como especificado
void printMetrica(char*, float, char);

#endif // ALUNO_H

// Data Type
struct aluno {
  // nome
  char nome[21];
  // curso
  char curso[21];
  // nota
  float nota;

};

struct turma {
  Aluno** alunos;
  // vetor de ponteiro de alunos
  int tamanho;
  // inteiro com o tamanho da turma
};


```
