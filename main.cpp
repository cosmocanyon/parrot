#include <iostream>

int main(int argc, char** argv)
{
<<<<<<< HEAD
    std::cout << "main build\n";
=======
    std::cout << "dev build\n";
>>>>>>> dev
    std::cout << "argumengts n: " << argc << "\n";
    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << "\n";
    }
    
    std::cout << std::endl;

    return 0;
}
