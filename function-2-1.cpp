//
//  function-2-1.cpp
//  
//
//  Created by Shea Cowan on 16/8/22.
//

#include <iostream>
#include <string>

float add_op(float left, float right){
    
    float sum = left + right;
    return sum;
    
}

float subtract_op(float left, float right){
    
    float minus = left - right;
    return minus;
}

float arithmetic_ops(float left, float right, std::string op){
    
    
    if (op == "+"){
        float sum = add_op(left,right);
        return sum;
    }else if(op == "-"){
        float minus = subtract_op(left,right);
        return minus;
    }
    return 0;
}
    
