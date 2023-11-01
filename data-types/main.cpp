#include <iostream>

int main(){
    // Integers
    int a = 10;
    int b = 10;
    std::cout << a + b << std::endl;

    // Decimals
    float c = 10.5;
    double d = 10.5;
    std::cout << c + d << std::endl;

    // Char
    char e = 'a';
    std::cout << e << std::endl;

    // Boolean
    bool f = true;
    std::cout << f << std::endl;

    // String
    std::string g = "Hola";

    std::cout << g << std::endl;

    // String concat
    std::string nombre = "Alfonso";

    std::cout << "Hola " << nombre << std::endl;

    // Constants
    const float PI = 3.1416;
    std::cout << PI << std::endl;
    return 0;
}