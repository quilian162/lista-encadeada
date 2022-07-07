#include <stdio.h>
#include <stdlib.h>

#define N 40

struct _func{
    int cod;
    char nome[N];
    double salario;
    struct _func *next;
};

typedef struct _func Funcionario;

int emptyList(Funcionario *first){
    if (first == NULL)
        return 1;
    return 0;
}

Funcionario *addHead(Funcionario *first, Funcionario *new){
    if (emptyList(first)){
        return new;
    }

    new->next = first;
    first = new;
    
    return first;
}

Funcionario *createFunc (int cod, char nome[], double salario){
    Funcionario *new = malloc(sizeof(Funcionario));
    new->cod = cod;
    snprintf(new->nome, sizeof(new->nome), "%s", nome);
    // strcpy(new->nome, nome);
    new->salario = salario;
    new->next = NULL; //parar a lista
    return new;
}

void printList(Funcionario *first){
     
    
    Funcionario *aux;

    for (aux = first; aux != NULL; aux=aux->next){
         printf("%d %s %lf\n", aux->cod, aux->nome, aux->salario);
    }
    printf("\n");
} 

int main(){
    Funcionario *first = NULL;

    first = addHead(first, createFunc(1, "Teste", 23.4));
    first = addHead(first, createFunc(2, "Teste 2", 54.4));
    first = addHead(first, createFunc(3, "Teste 3", 30.4));
    first = addHead(first, createFunc(4, "Teste 4", 28.4));
    
    printList(first);
}

#include <stdio.h>
#include <stdlib.h>

#define N 40

struct _func{
    int cod;
    char nome[N];
    double salario;
    struct _func *next;
};

typedef struct _func Funcionario;

int emptyList(Funcionario *first){
    if (first == NULL)
        return 1;
    return 0;
}

Funcionario *addHead(Funcionario *first, Funcionario *new){
    if (emptyList(first)){
        return new;
    }

    new->next = first;
    first = new;
    
    return first;
}

Funcionario *addTail(Funcionario *first, Funcionario *new){
    Funcionario *aux;   
    if (emptyList(first)){
        return new;
    }
    for(aux=first; aux->next != NULL; aux = aux->next);
    // aux=first;
    // while(aux->next == NULL)
    //     aux = aux->next
    aux->next = new
}



Funcionario *createFunc (int cod, char nome[], double salario){
    Funcionario *new = malloc(sizeof(Funcionario));
    new->cod = cod;
    snprintf(new->nome, sizeof(new->nome), "%s", nome);
    // strcpy(new->nome, nome);
    new->salario = salario;
    new->next = NULL; //parar a lista
    return new;
}

void printList(Funcionario *first){
    if (first == NULL) //printar ao inveso
        return;
    printListI(first->next)
        
    Funcionario *aux;

    for (aux = first; aux != NULL; aux=aux->next){
        printf("%d %s %lf\n", aux->cod, aux->nome, aux->salario);
    }
    printf("\n");
} 

int main(){
    if (first == NULL)
        return;
    prinListI(first->next)
    
    Funcionario *first = NULL;

    first = addHead(first, createFunc(1, "Teste", 23.4));
    first = addHead(first, createFunc(2, "Teste 2", 54.4));
    first = addHead(first, createFunc(3, "Teste 3", 30.4));
    first = addHead(first, createFunc(4, "Teste 4", 28.4));
    
    printList(first);

    printListI(first);
}
