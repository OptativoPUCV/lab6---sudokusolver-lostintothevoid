#include <stdio.h>
#include <stdlib.h>
#include "list.h"


typedef struct{
   int sudo[9][9];
}Node;

Node* createNode(){
  Node* n=(Node*) malloc(sizeof(Node));
  return n;
}

Node* copy(Node* n){
    Node* new=(Node*) malloc(sizeof(Node));
    *new = *n;
    return new;
}

Node* read_file (char* file_name){
  Node* n = createNode();
  FILE* file = fopen (file_name, "r");
  int i,j;
  for(i=0;i<9;i++){
       for(j=0;j<9;j++){
          if(!fscanf (file, "%d", &n->sudo[i][j]))
            printf("failed to read data!");
       }
  }

  fclose (file);
  return n;
}

void print_node(Node* n){
    int i,j;
    for(i=0;i<9;i++){
       for(j=0;j<9;j++)
          printf("%d ", n->sudo[i][j]);
       printf("\n");
    }
    printf("\n");
}

int subMatriz(Node* n){
  Node* novo = createNode();
  novo =copy(n);
  int k,p; 
  for(k=0; k<9; k++){
    for(p=0;p<9;p++){
      int i=3*(k/3) + (p/3) ;
      int j=3*(k%3) + (p%3) ;
    }
  }
}

int numColum(Node* n){
  Node* novo = createNode();
  novo =copy(n);
  int i, j;
  for(j=0; j<9; j++){
    for(i=0; i<9; i++){
      
    }
  }
}

int numFila(Node* n){
  int i, j;
  for(i=0; i<9; i++){
    for(j=0; j<9; j++){
      int a[9]={0};
      if(n->)
    }
  }
}

int is_valid(Node* n){
  if(numFila(n)==1){
    if(numColum(n)==1){
      if(subMatriz(n)==1){
        return 1;
      }
      else{
      return 0; 
      }
    }
    else{
     return 0; 
    }
  }
  else{
    return 0;
  }
}


List* get_adj_nodes(Node* n){
  List* list=createList();
  int i, j;
  for(i=0; i<9; i++){
    for(j=0; j<9; j++){
      for(int k=1; k<10; k++){
        if(n->sudo[i][j]==0){
          Node* novo = createNode();
          novo =copy(n);
          novo->sudo[i][j]=k;
          pushBack(list, novo);
                
        }
      }
    }
  }
  return list;
}


int is_final(Node* n){
  return 0;
}

Node* DFS(Node* initial, int* cont){
  return NULL;
}



/*
int main( int argc, char *argv[] ){

  Node* initial= read_file("s12a.txt");;

  int cont=0;
  Node* final = DFS(initial, &cont);
  printf("iterations:%d\n",cont);
  print_node(final);

  return 0;
}*/