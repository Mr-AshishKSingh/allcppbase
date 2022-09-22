#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using namespace std;

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

void assets() {
    cout << "ahsish" << endl;
} 

int main() {


    cout << "UR DETEILS WERE" << endl;
    login();
    assets();
    return 0; 


}