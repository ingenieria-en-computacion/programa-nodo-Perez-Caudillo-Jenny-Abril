#ifndef NODO_H
#define NODO_H
#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo Nodo;

struct _Nodo {
    DATO dato;
    Nodo* sig;
};

Nodo* crear_nodo();
bool borrar_nodo(Nodo* n);
Nodo* asignar_dato(Nodo* n, DATO d);
DATO obtener_dato(Nodo* n);
Nodo* asignar_referencia(Nodo* n, Nodo* e);
Nodo* obtener_ref(Nodo* n);

#endif