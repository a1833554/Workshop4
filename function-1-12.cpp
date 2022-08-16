//
//  function-1-12.cpp
//  
//
//  Created by Shea Cowan on 16/8/22.
//


#include <iostream>


int size_of_variable_star_arr(){

    int *arr = new int[3];
    
    delete arr;
    std::cout<< arr<<std::endl;
    return sizeof(arr);
}
