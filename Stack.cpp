//
// Created by ASUS on 11/4/2018.
//
#include <iostream>
#include <string>
#include "Stack.h"
#define nullptr 0

using namespace std;

Stack::Stack() {

}

void Stack::push() {
    cout << "Insertar nodo: ";
    string str;
    cin >> str;

    pila *tmp = bottom; //PRIMERO EN INGRESAR
    pila *tmp2 = top; //ULTIMO

    if (str == "+") {
        if (tmp == nullptr) {
            cerr << "Ingrese mas numeros!" << endl;
        }
        while (tmp->sig != tmp2) { //Colocarse atras del ultimo
            tmp = tmp->sig;
        }
        int sum = tmp->valor + tmp2->valor; //Suma
        tmp->valor = sum;
        tmp->sig = nullptr;
        top = tmp;
    }
    else if (str == "-") {
        if (tmp == nullptr) {
            cerr << "Ingrese mas numeros!" << endl;
        }
        while (tmp->sig != tmp2) {
            tmp = tmp->sig;
        }
        int res = tmp->valor - tmp2->valor; //Resta
        tmp->valor = res;
        tmp->sig = nullptr;
        top = tmp;
    }
    else if (str == "*") {
        if (tmp == nullptr) {
            cerr << "Ingrese mas numeros!" << endl;
        }
        while (tmp->sig != tmp2) {
            tmp = tmp->sig;
        }

        int multi = tmp->valor * tmp2->valor; //Multiplicacion
        tmp->valor = multi;
        tmp->sig = nullptr;
        top = tmp;
    }
    else if (str == "/") {
        if (tmp == nullptr) {
            cerr << "Ingrese mas numeros!" << endl;
        }
        while (tmp->sig != tmp2) {
            tmp = tmp->sig;
        }

        int div = tmp->valor / tmp2->valor; //Divicion
        tmp->valor = div;
        tmp->sig = nullptr;
        top = tmp;
    }
    else {
        pila *nuevoPila = new pila();
        nuevoPila->valor = stoi(str); //STOI Convierte string en int

        if (bottom == nullptr) {
            bottom = top = nuevoPila;
            nuevoPila->sig = nullptr;
        } else {
            top->sig = nuevoPila;
            top = nuevoPila;
            top->sig = nullptr;
        }
    }
}

void Stack::print() {
    pila *tmp = bottom;

    if (tmp == nullptr)
    {
        cerr << "La pila esta vacia!" << endl;
    }
    else {
        cout<<""<<endl;
        cout << "IMPRIMIENDO" << endl;
        while (tmp != nullptr)
        {
            cout << tmp->valor << " ";
            tmp = tmp->sig;
        }
        cout<<""<<endl;
        cout << "" << endl;
    }
}