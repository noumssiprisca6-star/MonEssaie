#include"Calculator.h"
#include<iostream>
Calculator::Calculator(){
    std::cout<<"la calculatrice cree"<<std::endl;
}
Calculator::~Calculator(){
    std::cout<<"calculatrice detruite "<<std::endl;
}

int Calculator ::Addition(int a , int b){
    return a + b;
}
 double Calculator ::Division(double  x ,double y){
    if (y == 0){
        std::cout<<"erreur division par zero "<<std::endl;
        return 0;

    }else{
        return x /y ;
    }
 }