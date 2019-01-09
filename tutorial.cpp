#include <iostream>
#include "TutorialConfig.h"
#include "MathFunctions.h"

int main (int argc, char** argv) {
    std::cout << "Tutorial works! version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << " result operation: " << MathFunctions::mysqrt(2,2) << std::endl;
    return 0;
}