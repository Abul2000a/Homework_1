#include <iostream>
class Players{
    private:
    std::string name;
    public:
    Players():name("Hello"){}
    std::string getName(){
        return name;
    };
};

class Team{
    private:
    Players pl;
    std::string name;
    int countOfPlayers;
    public:
    std::string getName();
    std::string getPlName(){
        return pl.getName();
    }

};

int main(){
    Team obj;
    std::cout << obj.getPlName();
}