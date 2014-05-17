typedef struct no * t_apont_no;

typedef struct no {
    int info;
    t_apont_no prox;
} t_no;

t_apont_no createNo(int);
