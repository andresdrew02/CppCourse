#include <iostream>

namespace a {
    int x = 2;
}

namespace b {
    int x = 3;
}

int main(){
    int x = 1;

    std::cout << x << std::endl;
    std::cout << a::x << std::endl;
    std::cout << b::x << std::endl;
    return 0;
}