#include <iostream>
#include <string>
#include <cmath>
using std::cout ;
using std::cin ;
using std::endl;
using namespace std;


void name() {
    std::string username;
   std::cout << "WRITE YOUR NAME" << std::endl;
   std::cin >>  username;
   
   
}

void usersdata(std::string dataname ) {
    std::cout << dataname << std::endl;
}
void login(){
    string username;
    string password;
    int pin;
    cout << "PLEASE ENTER USERNAME " << endl;
    cin >> username ;
    cout << "PLEASE ENTER PASSWORD" << endl;
    cin >> password ;
    cout << "ENTER 4 DIGIT PIN " << endl;
    cin >> pin ; 
    cout << "USENAME IS " << " "<< username << endl;
    cout << "PASSWORD IS " << " " << password << endl;
    cout << "PIN IS " << pin << endl;
}

int main() {
    name();
    usersdata("ASHSISH");
    usersdata("dipti");
    usersdata("RAJENDRA");
    usersdata("shyampyati");


    login();
    return 0;


}