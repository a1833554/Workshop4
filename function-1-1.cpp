//
//  function-1-1.cpp
//  
//
//  Created by Shea Cowan on 16/8/22.
//

#include <iostream>


int size_of_variable_star_t(){
    int a, *p;
    p = &a;
    
    return sizeof(p);
    
}
