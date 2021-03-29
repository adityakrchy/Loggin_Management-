#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    cout<<"Enter your responce: "<<endl;
    cout<<"1. Register"  <<endl
        <<"2. Login"<<endl;
    int choice;
    cin>>choice;
    if (choice == 1)
    {
        string username, password;
        cout<<"\t\tRegistration Form"<<endl;
        cout<<"select username"<<endl;
        cin>>username;
        cout<<"select password"<<endl;
        cin>>password;
        ofstream out;
        out.open(username+".txt");
        out<<username<<endl;
        out<<password<<endl;

        main();


    }
    else if (choice == 2)
    {
        string username, password, un, pw;
        cout<<"\t\tLogin Page"<<endl;
        cout<<"Enter username"<<endl;
        cin>>username;
        cout<<"Enter password"<<endl;
        cin>>password;
        ifstream in;
        in.open(username+".txt");
        getline(in, un);
        getline(in, pw);
        if (un == username && pw == password)
        {
            cout<<"Logged in successfully";
        }
        else{
            cout<<"Failed loggin";
        }
        
    }
    
    
    return 0;
}