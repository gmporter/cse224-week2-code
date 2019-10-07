#include <iostream>
#include <thread>

int function(){
    std::cout << "I'll run a thing!" << std::endl;
}

int functionWithArguments(int socket, std::string word ){
    std::cout << "I'll run on socket " << socket << std::endl;
    std::cout << "I'll also read " << word << std::endl;
}

int main(){
    std::thread functionThread (function);
    std::thread argThread (functionWithArguments, 8000, "filename");
    functionThread.join();
    argThread.join();
}
