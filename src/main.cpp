#include <iostream>
#include "app.h"

int main(int argc, char* argv[]) {
    CApp a(0);
    a.set(2);
    std::cout<<a.get()<< std::endl;
    return 0;
}
