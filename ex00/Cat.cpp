#include"Cat.hpp"

Cat::Cat():Animal(), type("Cat")
{
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat Cat::operator=(const Cat& copy)
{
    std::cout << "Copy Assignement Operator Cat Called" << std::endl;
    this->type = copy.type;
    return *this;
} 

Cat::Cat(const Cat& copy)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    *this = copy;
}

void Cat::makeSound() const
{
    std::cout << "Cat is meowing ..."<< std::endl;
}
