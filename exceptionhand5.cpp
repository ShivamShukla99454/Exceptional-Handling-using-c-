#include<iostream>
using namespace std;
class Sample{
    public:
    sample(){
        cout<<"exception caught by class"<<endl;
    }
    void value(int num){
        cout<<num;
    }
    void value(float num){
        cout<<num;
    }
    void value(char ch){
        cout<<ch;
    }
};
int main(){
    int a;
    float b;
    char c;
    cout<<"enter the values"<<endl;
    cin>>a;
    try{
        Sample();
        value(a);
        throw a;
    }catch(int a){
        cout<<"value"<<a;
    }
}
