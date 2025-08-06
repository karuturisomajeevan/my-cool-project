// main.cpp
#include <iostream>
#include <string>

// Function prototype
void greetUser(const std::string& name);

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "edited by harsha"<< std::endl;
    greetUser(name);

    return 0;
}

void greetUser(const std::string& name) {
    std::cout << "Hello, " << name << "! Welcome to our GitHub project!" << std::endl;
}
