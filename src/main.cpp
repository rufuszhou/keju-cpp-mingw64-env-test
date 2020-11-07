#include <iostream>
#include "app.hpp"

int main(int argc, char* argv[]) {
    CApp a(0);
    a.set(2);
    std::cout<<a.get()<< std::endl;
    return 0;
}
