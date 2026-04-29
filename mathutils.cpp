#include "headers/mathutils.h"

#include <string>
#include <iostream> 

// defination for avg
float avg(std::vector<float> nums){
    float accumul = 0;   
    for (float n : nums){
        accumul += n; 
    }
    return accumul/nums.size(); 
}

// defination for factorial
int factorial(int n){
    
    int res = 1; 
    while(n > 0){
        res *= n; 
        n--;
    }
    return res; 
} 

// defination for tetration
int tetration(int a, int n){

    if (n == 0){
        return 1; 
    }else if (n == 1){
        return a;
    }

    int res = a;
    int mult = a;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < a-1; j++){
            res *= mult;
        }
        mult = res;
    }
    
    return res;
}

