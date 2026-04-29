/*
Sai Anirvinya Kolli 
4/29/2026
Header Files Lab
*/

#include <iostream> 
#include <vector> 
#include "headers/mathutils.h"

// setting vector and cout 
using std::vector, std::cout;  

int main()
{
    // Calling each function
    vector<float> nums = {1.0, 4.2, 23.2, 4.0}; 
    cout << "average of nums: "<< avg(nums) << "\n"; 
    cout << "factorial of 4: " << factorial(4) << "\n"; 
    cout << "tetration of 3 to the 4th (2↑↑4): " << tetration(2,4) << "\n";
    return 0;
}