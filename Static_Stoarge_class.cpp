//Jasnoor Kaur
//24070123049
//Batch:A2

#include<iostream>
using namespace std;

int a =5;
void func(){
    static int a;
    // We utilise the default value 0. THe variable will hold the value irrespective of the number of function calls.
    cout<<"Address of func variable a: "<<&a<<endl;
    a++;
    cout<<"Size of variable: "<<sizeof(a)<<endl;
    cout<<"The variable is :"<<a<<endl;
    cout<<endl;
}

int main(){
    func();
    func();
    func();
    cout<<"The variable is :"<<a<<endl;
    cout<<"Address of global variable a: "<<&a;
    return 0;
}
