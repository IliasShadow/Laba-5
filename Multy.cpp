#include <iostream>
#include <string.h>
class Human{
protected:
    string name;
    int age;
    int height;
public:
    Human(){
        name="Nobody";
        age=18;
        height=180;
    }
    void setName(string s){
        name=s;
    }
    string getName(){
        return name;
    }
    void setAge(int s){
        Age=s;
    }
    string getAge(){
        return age;
    }
    void setHeight(int s){
        height=s;
    }
    string getHeight(){
        return height;
    }

};
int main(){
    Human Me,You,He;
    setlocale(0,"");
    return 0;
}

