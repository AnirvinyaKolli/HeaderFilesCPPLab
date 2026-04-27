#include "headers/mathutils.h"

#include <string>
#include <iostream> 

void sayHello(std::string name){
    std::cout << "Hi!, " << name << "\n"; 
}
void sayGoodbye(std::string name){
    std::cout << "Bye!, " << name << "\n"; 
} 
int countChars(std::string s){
    return s.size(); 
}
