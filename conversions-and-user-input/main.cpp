#include <iostream>
#include <string>

int main(){
    int a = 10;
    float b = 10.5;

    std::cout << a / b << std::endl;
    std::cout << (int)(a / b) << std::endl;

    std::string name;
    int age;

    // Primera forma
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Segunda forma
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    return 0;
}