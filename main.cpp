#include <iostream> 
#include <vector> 
#include "headers/mathutils.h"

using std::vector, std::cout;  

int main()
{
    vector<float> nums = {1.0, 4.2, 23.2, 4.0}; 
    cout << "average of nums: "<< avg(nums) << "\n"; 
    cout << "factorial of 4: " << factorial(4) << "\n"; 
    cout << "tetration of 3 to the 4th (2↑↑4): " << tetration(2,4) << "\n";
    return 0;
}