#include <iostream>
int main() {
    int painting1 = 4200;
    int painting2 = 8500;
    int painting3 = 1000;
    int painting4 = 1300;
    if (painting1 > painting2 && painting1 > painting3 && painting1 > painting4) {
        std::cout << "The oldest painting is " << painting1 << " years old." << std::endl;
    } 
    else if (painting2 > painting1 && painting2 > painting3 && painting2 > painting4) {
        std::cout << "The oldest painting is " << painting2 << " years old." << std::endl;
    } 
    else if (painting3 > painting1 && painting3 > painting2 && painting3 > painting4) {
        std::cout << "The oldest painting is " << painting3 << " years old." << std::endl;
    } 
    else {
        std::cout << "The oldest painting is " << painting4 << " years old." << std::endl;
    }
    return 0;
}

