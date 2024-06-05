#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &cpy);
        Animal &operator=(const Animal &other);

        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif