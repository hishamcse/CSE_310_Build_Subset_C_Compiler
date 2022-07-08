/*
    Utilities Other than IO
    Created by Hisham on 21-May-22.
*/

#ifndef SYMBOL_TABLE_MANAGER_1805004_UTILS_H
#define SYMBOL_TABLE_MANAGER_1805004_UTILS_H

#include<iostream>

using namespace std;

unsigned int sbdmHash(const string &str) {

    unsigned int hash = 0;

    for (char i: str) {
        hash = i + (hash << 6) + (hash << 16) - hash;
    }

    return hash;
}

enum Operations {
    I, L, D, P, S, E, INT
};

Operations getOperation(const string &op) {
    if (op == "I") return I;
    if (op == "L") return L;
    if (op == "D") return D;
    if (op == "P") return P;
    if (op == "S") return S;
    if (op == "E") return E;
    return INT;
}

#endif //SYMBOL_TABLE_MANAGER_1805004_UTILS_H