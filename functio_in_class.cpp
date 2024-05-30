#include<bits\stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nam, int ag, int m1, int m2){
        name =nam;
        age = ag;
        marks1 = m1;
        marks2 =m2;
        
    }

    void hello(){
        // cout<<"hello inside"<<endl;
        cout<<name << " "<<age<<endl;
    }
    int  totle_marks(){
        return marks1 + marks2;
    }
};
int main ( ) {

Person rakib("Rakib Ashan", 24, 95, 85);
cout <<rakib.name<< " "<<rakib.age;
cout<<rakib.totle_marks()<<endl;
    return 0;
}