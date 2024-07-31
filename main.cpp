#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "dev build\n";
    std::cout << "argumengts n: " << argc << "\n";
    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << "\n";
    }
    
    std::cout << std::endl;

    return 0;
}
