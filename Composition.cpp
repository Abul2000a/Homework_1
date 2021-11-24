#include <iostream>

class Person{
    private:
    class Name{
        private:
        std::string name;
        public:
        Name():name("Heloo"){}
        std::string getName()const{
            return name;
        }
        
    };
    Name name;
    public:
    void getName(){
        std::cout << "My name is " << name.getName();
    }
};

int main(){
    Person person;
    person.getName();
}