#ifndef ROCHA_H
#define ROCHA_H


typedef struct{
    int valorRocha;
    int pesoRocha;
    int usada;
} RochaIndv;

void set_valor(RochaIndv* rocha, int valorRocha);
void set_pesoRocha(RochaIndv* rocha, int pesoRocha);
void set_usada(RochaIndv* rocha, int usada);
void iniciaRocha(RochaIndv* rocha, int valorRocha, int pesoRocha, int usada);
void imprimeRocha(RochaIndv rocha);

#endif