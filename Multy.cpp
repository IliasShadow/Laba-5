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
};
int main(){
    Human Me,You,He;
    setlocale(0,"");
    return 0;
}
