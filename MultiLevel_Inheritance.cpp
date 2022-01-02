#include <iostream>
using namespace std;
class Student {
    protected :
        int roll;

    public :
        int setRoll(int );
        void getRoll(void);

};
int Student ::  setRoll(int r){
    roll = r;
} 
void Student ::  getRoll(void){
    cout<<"The roll no is "<<roll<<endl;
} 
class Exam : public Student{
    protected :
        float Physics; 
        float Maths;
    public :
        void setMarks(float,float);
        void getMarks(void); 
};
void Exam :: setMarks(float p , float m){
    Physics = p;
    Maths = m;
}
void Exam :: getMarks(void){
   cout<<"Physics - "<<Physics<<endl;
   cout<<"Maths - "<<Maths<<endl;
   
}
class Result : public Exam{
    float Percentage;
        public :
            void Display(){
                getRoll();
                getMarks();
                cout<<"Percentage  - " <<(Physics + Maths)/2 <<"%"<<endl;
            };

};
int main(){
    int a1;
    float a2,a3;
    cout<<"Enter Your roll no"<<endl;
    cin>>a1;
    Result aryan;
    aryan.setRoll(a1);
    cout<<"Enter Your Marks in Physics"<<endl;
    cin>>a2;
    cout<<"Enter your Marks in Maths"<<endl;
    cin>>a3;
    aryan.setMarks(a2,a3);
    aryan.Display();
    return 0;
}