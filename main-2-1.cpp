//
//  main-2-1.cpp
//  
//
//  Created by Shea Cowan on 16/8/22.
//
#include <iostream>
#include <string>
#include "function-2-1.cpp"


    


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
