#include <iostream>
#include <string>
#include <cmath>


void name() {
    std::string username;
   std::cout << "WRITE YOUR NAME" << std::endl;
   std::cin >>  username;
   
   
}

void usersdata(std::string dataname ) {
    std::cout << dataname << std::endl;
}

int main() {
    name();
    usersdata("ASHSISH");
    usersdata("dipti");
    usersdata("RAJENDRA");
    usersdata("shyampyati");


    return 0;


}