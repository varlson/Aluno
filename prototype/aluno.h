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