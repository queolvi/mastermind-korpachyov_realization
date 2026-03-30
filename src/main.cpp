#include "icppm/core.ixx"
import module Core;
int main () {
    BaseGenerator bg; Pallete p;
    std::string str = GenerateString(bg, p);
    std::cout << str;
}