#include "aluno.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

// Manter como especificado
void lerInfos(int *qtd, char *option) {

    scanf("%c", option);
    setbuf(stdin, NULL);
    scanf("%d", qtd);

}

// Manter como especificado
Aluno* alocaAluno() {

  Aluno* aluno =  malloc(sizeof(Aluno));
  if(aluno == NULL){
    return NULL;
  }
  return aluno;
  
}

// Manter como especificado
Turma* alocaTurma(int quantidadeDeAlunos) {
  // Use a funcao alocaAluno aqui
  Turma* turma = malloc(sizeof(Turma));

  if(turma == NULL){
    return NULL;
  }

  turma->tamanho = quantidadeDeAlunos;

  turma->alunos = malloc(sizeof(Aluno)* quantidadeDeAlunos);

  for(int i=0; i<quantidadeDeAlunos; i++){
      turma->alunos[i] = alocaAluno();
  }

  return turma;
}

// Manter como especificado
void desalocaAluno(Aluno **pAluno) {

  free(*pAluno);
  
}

// Manter como especificado
void desalocaTurma(Turma **pTurma) {
  for (int i=0; i < (*pTurma)->tamanho; i++){
    desalocaAluno(&(*pTurma)->alunos[i]);
  }
}

// Manter como especificado
void lerTurma(Turma *pTurma) {
  for (int i=0; i<pTurma->tamanho; i++){
    scanf(" %s", pTurma->alunos[i]->nome);
    scanf(" %s", pTurma->alunos[i]->curso);
    scanf(" %f", &pTurma->alunos[i]->nota);
  }
}

// Manter como especificado
float calcularMetrica(Turma *pTurma, char* curso, char option) {
  float media = 0;
  float soma = 0;
  int qunt=0;
  
  for(int i=0; i<pTurma->tamanho; i++){
    if(strcmp(curso, pTurma->alunos[i]->curso)==0){
      soma += pTurma->alunos[i]->nota;
      if(option == 'M'){
        qunt++;
      }
    }
  }

  if(option == 'S'){
    return soma;
  }

  media = soma/qunt;
  return media;

}

// Manter como especificado
void printMetrica(char* curso, float metrica, char option) {
  printf("A %s no curso de %s eh %.1f\n", option == 'S' ? "soma" : "media", curso, metrica);
}
