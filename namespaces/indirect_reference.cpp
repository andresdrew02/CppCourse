#include <iostream>

namespace a{
    int x = 1;
}

int main(){
    using namespace a;
    using namespace std;

    cout << x << endl;
    return 0;
}