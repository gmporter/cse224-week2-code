#include <iostream>
#include <thread>
#include <chrono>

void functionSleep(){
    std::cout << "Start functionSleep" << std::endl;
    std::cout << "Sleeping for 5 seconds...." << std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(5));
    std::cout << "Finished sleeping" << std::endl;
}

void functionWithArguments(int socket, std::string word ){
    std::cout << std:: endl << "Start functionWithArgs" << socket << std::endl;
    std::cout << "I'll run on socket " << socket << std::endl;
    std::cout << "I'll also read " << word << std::endl;
    std::cout << "Finished functionWithArgs " << std::endl << std::endl;
}

int main(){
    std::thread functionThread (functionSleep);
    std::thread argThread (functionWithArguments, 8000, "filename");
    functionThread.join();
    argThread.join();
    std::cout << "Finished main function" << std::endl;
}

