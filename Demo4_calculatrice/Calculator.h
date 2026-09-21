#ifndef CALCULATOR_H
#define CALCULATOR_H
class Calculator{
    public:
    //constructeur 
    Calculator();
    //Destructeur
    ~Calculator();
    //Methodes
    int Addition (int a , int b);
    double Division (double x , double y); 

    //fonctions inline pour l
    template <typename T>
    T Soustraction(T a, T b) {
        return a - b;
    }

    template <typename T>
    T Multiplication(T a, T b) {
        return a * b;
    }
};

#endif