#include <iostream>

typedef std::string text_t;
using number_t = int;

int main(){
    text_t saludo = "Hola";
    number_t numero = 10;

    std::cout << numero << std::endl;
    std::cout << saludo << std::endl;

    return 0;
}