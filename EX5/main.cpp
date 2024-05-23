/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class myString {
    private:
        string m_str;
    public:
        myString(string s) {
            m_str = s;
        }
};

class ReadClass
{
    private:
        int amount=0;
        string filename="main.cpp";
    
    public:
        ReadClass(){}
        void showClass(){
            ifstream in;
            string line;
            in.open(filename);
            if(in.fail()){
                cout<<"Error opening a file"<<endl;
            }
            while(getline(in, line)){
                if(line[0]=='c'){
                    amount+=1;
                }
            }
            cout<<amount<<" class in "<<filename<<endl;
            in.close();
            
            in.open(filename);
            while(getline(in, line)){
                if(line[0]=='c'){
                    cout<<line<<endl;
                }
            }
            
            in.close();
        }
};


int main() {
    ReadClass rfile;
    rfile.showClass();

    return 0;
}