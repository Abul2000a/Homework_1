#include <iostream>
class Room{
    private:
    std::string room;
    public:
    Room():room("first"){}
    std::string getRoom(){
        return room;
    }
};
class Course{
    std::string name;
    int count;
    public:
    Course():name("C1"),count(20){}
    public:
    std::string getName(){
        return name;
    }
    std::string getclRoom(Room & obj){
        return obj.getRoom();
    }
};



int main(){
    Room s1;
    Course p1;
    std::cout << p1.getclRoom(s1);
}