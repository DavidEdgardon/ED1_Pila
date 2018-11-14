//
// Created by ASUS on 11/4/2018.
//

#ifndef ED1PILA_STACK_H
#define ED1PILA_STACK_H


struct pila{
    pila *sig;
    int valor;
};


class Stack {
private:
    pila *top = nullptr;
    pila *bottom = nullptr;
public:
    Stack();
    void push();    //Agregar
    void print();
};


#endif //ED1PILA_STACK_H
