#include <filesystem>
#include <iostream>

int main(int argc, char** argv)
{
    if (argc < 2)
        return 0;

    for(auto& p: std::filesystem::directory_iterator(argv[1]))
        std::cout << p.path() << std::endl;

    return 0;
}
