#include <iostream>
#include <string.h>
using namespace std;
class Human{
protected:
    string name{"Nobody"};
    int age{15};
    int height{170};
public:
    Human(){
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
        age=s;
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
class Specialization{
private:
    int type{0};
public:
    Specialization(){
    }
    Specialization(int t){
        type=t;
    }
    void setSpec(int t){
        type=t;
    }
    int getSpec(){return type;
    }
    void Prezentation(){
        cout<<"У меня "<<type+2<<" тип специализации, согласно уставу организации"<<endl;

    };
};
class Programmer:public Specialization{
private:
    string company{"No one"};
public:
    Programmer(){}
    void setCom(string s){
        company=s;
    }
    string getCom(){
    return company;}
};
class Worker:public Programmer{
private:
    unsigned int year{0};
public:
    Worker(){}
    void Say(){
        cout<<"Это мой"<<year <<"первый год работы на этой специальности(код специальности - "<<getSpec()<<")"<<endl;
    }
};
class Student:public Human{
protected:
    string school;
public:
    Student(){
        name="Nobody";
        age=18;
        height=180;
        school="No school";    }
    Student(string s1,int s2,int s3,string s4){
        name=s1;
        age=s2;
        height=s3;
        school=s4;
    }
};
int main(){
    Human You,He;
    cout<<He.getHeight()<<endl;
    Student Me;
    Me.setAge(19);
    cout<<Me.getAge()<<endl;
    cout<<Me.getHeight()<<endl;
    setlocale(0,"");
    return 0;
}
