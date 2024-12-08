#include "Compartimento.h"
#include <stdio.h>
#include <stdlib.h>

void FLVazia_Comp(TCompartimento* comp) {
    comp->Primeiro = 0;
    comp->Ultimo = comp->Primeiro;
}

void LInsere_Comp(TCompartimento* comp, RochaIndv rocha) {
    if (comp->Ultimo >= MaxTam) {
        printf("Erro de incercao\n");
        return;
    }
    comp->Compartimento[comp->Ultimo].ItemR = rocha;
    comp->Ultimo++;
}

void LImprime_Comp(TCompartimento comp) {
    int i;
    for (i = comp.Primeiro; i < comp.Ultimo; i++) {
        printf("Peso: %d\nValor: %d\n", 
        comp.Compartimento[i].ItemR.pesoRocha,
        comp.Compartimento[i].ItemR.valorRocha);
        if (comp.Compartimento->ItemR.usada == 1) {
            printf("Usada\n");
        }else {
            printf("Disponivel\n");
        }
    }
}

int LEhVazia_Comp(TCompartimento* comp) {
    return comp->Ultimo == comp->Primeiro;
}