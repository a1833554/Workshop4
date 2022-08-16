//
//  main-2-1.cpp
//  
//
//  Created by Shea Cowan on 16/8/22.
//
#include <iostream>
#include <string>

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main(){
    float left, right;
    std::string operation;
    
    std::cout<< "Enter Left Number: ";
    std::cin>> left;
    std::cout<< "Enter Right Number: ";
    std::cin>>right;
    std::cout<< "Enter Operation: ";
    std::cin>>operation;

    std::cout << add_op(left,right)<<std::endl;
    std::cout<<subtract_op(left,right)<<std::endl;
    std::cout<<arithmetic_ops(left,right,operation)<<std::endl;
}
