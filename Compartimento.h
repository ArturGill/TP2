#ifndef COMPARTIMENTO_H
#define COMPARTIMENTO_H
#define MaxTam 1000

#include "Rocha.h"

typedef RochaIndv TRocha;
typedef int ApontadorC;

typedef struct
{
    TRocha ItemR;
} TItemR;

typedef struct 
{
    TItemR Compartimento[MaxTam];
    ApontadorC Primeiro, Ultimo;
} TCompartimento;

void FLVazia_Comp(TCompartimento* comp);
void LInsere_Comp(TCompartimento* comp, RochaIndv rocha);
void LImprime_Comp(TCompartimento comp);
int LEhVazia_Comp(TCompartimento* comp);

#endif