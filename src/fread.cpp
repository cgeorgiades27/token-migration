#include "fread.h"

#include <iostream>
#include <fstream>

ReadResult read_token_file(std::string file_path)
{
    std::ifstream ifs(file_path);
    if (!ifs.is_open())
    {
            
    }
}

void print_hello()
{
    std::cout << "hello" << std::endl;
}