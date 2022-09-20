//
// Created by x4nyx on 20.09.22.
//

#ifndef LAB_2_VECTOR_H
#define LAB_2_VECTOR_H


#include "Number.h"

class Vector {
        private:
        Number x;
        Number y;
        public:
        static const Vector zeroV;
        static const Vector oneV;

        Vector() {
            x = 0;
            y = 0;
        }

        Vector(Number _x, Number _y) {
            x = _x;
            y = _y;
        }

        Vector operator + (Vector vToAdd);
        Number polarR();
        Number polarF();
        void print();
};


#endif //LAB_2_VECTOR_H
