#include "no.h"

typedef struct lista {
    t_apont_no prim, ult;   
} t_lista;

void initList(t_lista *);

void insertList(t_lista *);

void removeList(t_lista *);

int isEmptyList(t_lista *);

int countList(t_lista *);

void createTest(t_lista *, int);
