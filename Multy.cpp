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
        age=15;
        height=170;
    }
    Human(string s1,int s2,int s3){
        name=s1;
        age=s2;
        height=s3;
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
    int getAge(){
        return age;
    }
    void setHeight(int s){
        height=s;
    }
    int getHeight(){
        return height;
    }

};
class Student:protected Human{
protected:
    string school;
public:
    Student(){
        name="Nobody";
        age=18;
        height=180;
        school="No school"
    }
    Student(string s1,int s2,int s3,string s4{
        name=s1;
        age=s2;
        height=s3;
        school=s4;
    }
};
int main(){
    Human Me,You,He;
    setlocale(0,"");
    return 0;
}

