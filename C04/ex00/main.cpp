#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

int main( void ) {
{
    std::cout << "______TESTS FROM THE SUBJECT______" << std::endl;
    const Animal* meta = new Animal();
    const Animal* duke = new Dog();
    const Animal* snowball = new Cat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << duke->getType() << " " << std::endl;
    std::cout << snowball->getType() << " " << std::endl;

    meta->makeSound();
    duke->makeSound();
    snowball->makeSound();

    delete meta;
    delete duke;
    delete snowball;
}

{
    std::cout << std::endl << "______THE BASIC REX______" << std::endl;
    Dog rex;
    rex.makeSound();
    std::cout << std::endl << "______TEST CONSTRUCTOR WITH ARG______" << std::endl;
    Dog toto(rex);
    toto.makeSound();

    std::cout << std::endl << "______TEST OPERATOR= WITH CONSTRUCTOR______" << std::endl;
    Dog max = rex;
    max.makeSound();

    std::cout << std::endl << "______TEST OPERATOR=______" << std::endl;
    Dog bella;
    bella = rex;
    std::cout << bella.getType() << std::endl;
    bella.makeSound();

    std::cout << std::endl << "______DESTRUCTORS______" << std::endl;
}
{
    std::cout << std::endl << "______THE BASIC SNOW______" << std::endl;
    Cat snow;
    snow.makeSound();
    std::cout << std::endl << "______TEST CONSTRUCTOR WITH ARG______" << std::endl;
    Cat percy(snow);
    percy.makeSound();

    std::cout << std::endl << "______TEST OPERATOR= WITH CONSTRUCTOR______" << std::endl;
    Cat maxy = snow;
    maxy.makeSound();

    std::cout << std::endl << "______TEST OPERATOR=______" << std::endl;
    Cat rate;
    rate = snow;
    std::cout << rate.getType() << std::endl;
    rate.makeSound();

    std::cout << std::endl << "______DESTRUCTORS______" << std::endl;
}
{
    std::cout << std::endl << "______TESTS FOR WRONGANIMAL______" << std::endl;
    std::cout << "______TESTS FROM THE SUBJECT______" << std::endl;
    const WrongAnimal* perry = new WrongAnimal();
    const WrongAnimal* garfield = new WrongCat();

    std::cout << perry->getType() << " " << std::endl;
    std::cout << garfield->getType() << " " << std::endl;

    perry->makeWrongSound();
    garfield->makeWrongSound();

    std::cout << std::endl << "______DESTRUCTORS______" << std::endl;
    delete perry;
    delete garfield;
}

    return 0;
}