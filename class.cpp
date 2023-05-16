#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string best_friend;
    public:
        string name;
        int roll;
        int id;
        void showInfo(){
            cout<<"Name :"<<name<<endl<<"Roll :"<<roll<<endl<<"Id :"<<id<<endl;
        }
        Student(string a,int b,int c){
            name = a;
            roll = b;
            id = c;
        }
        void identity(){
            cout<<"I am a student"<<endl;
        }
        void setFriend(string friendName) {
            best_friend = friendName;
        }
        void friends(){
            cout<<best_friend<<endl;
        }

};

class Human:public Student{
    public:
        int hands;
        int legs;
        Human(int a,int b,string name):Student(name, 01, 8001){
            name = name;
            hands = a;
            legs = b;
        }
        void show_detail(){
            cout<<"hands :"<<hands<<endl<<"legs :"<<legs<<endl;
        }
};

int main(){
    Human Bipul(2,2,"Bipul Chandro roy");
    Bipul.showInfo();
    Bipul.setFriend("John doe");
    Bipul.friends();
    Bipul.show_detail();
    return 0;
}
