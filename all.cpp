#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// SYNTAXES 
// O = OUTPUT 
// I = IN[UT 
// E = ERROR]

int main() {
	/* CHICHKING THE COUT FOR OUTPUT COMMAND */
	 
	std::cout << "HELLO USER THIS IS A FORM FOR YU PLEASE FILL IT " << endl;
	std::cout << "IF ANY ERROR ARISES PLEASE MAIL AT officialwork.ashish@gmail.com" << endl;

	/* suing \t chracter of adding a tap space betwwn the line */

	std::cout << "TAP \t used here" << endl;

	/* using (/) character to add / betwwen the texts */

	std::cout << "ashish \\ ashish" << endl;

	/* using \" for adding " betwwn the words */

	std::cout << "ashish \" ashish \" ashish" << endl;

	// variable , vsrisblrd ,vsrisblrd 
	
	int x = 10;
	std::cout << x << endl ;

	int mynumber = 31;
	cout << mynumber << endl;

	// assingh the value of the variable later on rather than with variable type 
	
	int mysecondnumber;
	mysecondnumber =10;
	cout << mysecondnumber << endl;

	// we can overwrite the assigned value of our variable just by assigning a new valude to the same variable 
	
	int mythirdnumber =44; // Older value of the variable (mythirdnumber) = 44 
	mynumber  = 55; // new assigned value 55 which will overwrite the older value i.e, 44
	// here the value of my the variable (mythirdnumber) ie; 44 is overwrited by the new value 55 
	cout << mythirdnumber << endl; // output = 55
	
	//* combining the variable value  and a text together with the help of << op *//
	
	int myage = 19 ; // variable defined myage eith value 19
	cout << "My Age is " /* this is a text */ << myage /* this is a variagele whose value 19 will be displayed in the output */ << endl;

	// ADDING TWO INTEGER TYPE VARIABLES WITH THE HELP OF + OPERATOR 
	
	int a,b,c; //two variables a and b of type integer are defined here ;
	a=50 , b=50 ; // valued to both the integer is defined
	c = a+b ;
	cout << "Sum of the integer a and b whose values are 50 both is " << c << endl;

	// we can declare many variable of single type in one line also
	int raabta =50 , dil= 40 , m = 66 ; // diffrent variables of same type in a single line 
	std::cout << raabta << dil << m << endl;
	std::cout << raabta*dil*m << endl; //multiplied the variables using * coperator
	
	//* WE CAN ASSIGH SAME VALUES TO THE DIFFRENT VARIABLE
	//BY SIMPLY EQUATING THEM TO EACH OTHER AND THEN DEFINING THE VALUES */
	//
	int e,f,g;
	e=f=g=50; // assigned the equal values to all the variables in a single line by simple equating them ......
	std::cout << e+f+g << endl;

	// to fix the value of any variable we use (const) object before the 
	// variable type 
	//ex-------------------------------
	const int h = 66;
	 // from here the older value will not be overwrited because the integertype is using ----- 
				// -------------a const object
	cout << h << endl;

	/* FOR TAKING INPUT FROM THE USER WE USE cin object .... */
	int i;
	std::cout << "TYPE A NUMBER " << endl;
	cin >> i ; // we never use endl with cin 
	cout << "THE NUMBER IS " <<i << endl;

	// DEFINING NUMERIC DATA TYPES 
	// INT DOUBLE AND FLOAT 
	int j = 1000;
	double k = 5.66;
	float l = 8.8;
	std::cout << "INT J DEFINED IS " << j << endl; // COUT FOR INT
	std::cout << "DOUBLE K DEFINED HERE IS " << k << endl; // COUT FOT DOUBLE
	std::cout << " FLOAT L DEFINED HERE IS " << k << endl; // COUT FOR FLOAt	
	//BOLLEAN DATA TYPE
	bool coadingisfun = true; // for true value it gives 1 as output
															 
	bool fishistasty = false ; // for false it goves 0 as ouptut 
	std::cout << coadingisfun << endl;
	std::cout << fishistasty << endl;


	//CHARACTER DATA TYPE 
	char ashishfirstletter = a ; // this takes onl;y single character input 
	std::cout << ashishfirstletter << endl;

	//STRING DATA TTYPE 
	string name; //strind data type can take a letter as a input.
	name = "ashish" ;
	std::cout << name << endl;
	
	// STRING CONCATENATION - additing pf two string variable values 
	string firstname = "Ashish" ;
	string lastname = "Singh" ;
	string fullname = firstname = lastname ; // here the catenation is done 
																					 // but this the space will not come betwwn the ashish ans singh
																					 // the output for this full name string variable will be ashishsingh
	// we can fix it by adding a space character beteen the both variables .........
	//
	string fullnamewithspace = firstname + " " + lastname ;
	// Now thw outtput will be ashish singh
	std::cout << fullname << endl; //with out space
	std::cout << fullnamewithspace << endl; // with space
																					//
																					//
	//APPEND OPERATOR
	//append can also be used to concatenate two strings
	string firstword = "ASHISH" ;
	string lastword = "SINGH" ;
	string fullword = firstword.append(lastword);
	std::cout << fullword << endl;

	// (+) op functions diffrent for int data type and string data type 
	// for int it performs addition 
	// for string it performs concatenation 
	//
	


	// LENGTH OF A STRING 
	string letter = "ashish " ;
	std::cout << "LENGTH OF THE VARIABLE letter is " << letter.length() << endl;
	std::cout << "LENGTH IS " << letter.size() << endl;

	// ACCESSING A CHARACTER IN A STRING 
	// can be accessed by refering to the index number 
	string aname = "cppcode"; // indexing is 0123456
	std::cout << aname[2] << endl; // OUTPUT  = p 
	std::cout << aname[0] << endl; // O = c
	
	// a string character can also be change by referring the index nimber of the value character .....
	string bname = "python " ; //indexing is 01234 
	bname[1] = 'X' ; // index no 1 = y replaced by z
	std::cout << bname << endl; //o = pzthon

	// string with cin
	string cname;
	cout << "INSERT CNAME PLEASE" << endl;
	cin >> cname ;
	cout << "THE ENTRY WAS " << cname ; //O = INPUT BY THE USER
	
	// HERE IF THE USER TNSERTS THE SENTENCE THEN THE SPACES WIIL BE CONSIDERED AS  TERIMINATING CHARACTER ;
	// TO RESOLVE THAT WE USE getline function ........
	//
	string dname;
	cout << "INSERT DNAME " << endl;
	getline(cin,dname); // here the spaces will not be considered as a terminating chatracter +
	std::cout << "THE INSERCTION IS " << dname << endl;

  // namespace cand be omitted with standard library
	
	// all ops 
	//
	
	// library added <cmath>
	// #included <cmath> as an header file
	

	int o , p , q ,r ;
	o=p=q=r=10;
	//ARTHEMATIC OPS 
	//
	std::cout << "ADD" <<o+p+q+r << endl ;
	std::cout << "SUB " << o-p-q-r << endl;
	std::cout << "MUL" << o*p*q*r << endl;
	std::cout << "DIV" << o/p << "\n";
	// using operators in cout , can be used also with the new int variable defined ;
	int nn = ++q;
	int mm = --q;
	std::cout << nn << endl ; // ++ increasing the value of q by 1 
	std::cout << mm << "\n" ; // -- decresing the value of q by 1
	
	// ASSIGNMENT OPS
	// for assigning the values 
	
	int s = 20;
	// = a assign op
	s += 5; // addition of 5 to 20 
	cout << s  << endl;
	int t = 20 ;
	t -= 5 ; // sub of 5
	std::cout << t << "\n";
	int u = 20;
	u *= 5 ; //multiplucation of 5 to 20
	std::cout << u << endl;
	int v =10 ;
	v /= 5; // div of 5
	std:: cout << v << endl;
	// similatry mod and power assign ops are used ....
	//
	

	// COMPARISON OPS
	// return value is 0 and 1 0 for false 1 for true .....
	int w = 20;
	int bb = 10;
	int asb = bb>w;
	int asba = bb<w;
	int asbb = bb!=11 ;
	int asbc = bb==20;
	int asbd = bb>=10;

	cout << asb << endl; // o = 0
	cout << asba << endl ; // o - = 1
	cout << asbb << endl ; //not equal op // o =0									
	cout << asbc << endl ; //o =0
	cout << asbd << endl ; 


	// if else statment ......
	// if - runs the code if the condition is true
	// else - runs the block of code if the condition is false ..
	// else if - if is false then else if will be executed
	
	int za = 10 , zb = 30 , zc = 40 ;
	if ( za =10 ) {
		std::cout << "I LOVE INDIA" << "\n";

	};
	// the the if cond is true .....
	
	// if and else 
	//
	if (za==50 ){
		std:: cout << "COND WAS TRUE " << endl;

	} else {
		cout << "THE COND WAS FALSE" << endl;
	};// O
	

	// IF ENSEIF AND ELSE 
  if (za == 45185) {
		std::cout << "THE IF WAS TRUE" << endl;
	} else if (za==100) {
		std::cout << "THE FIRST ELSE IF WAS CORRECT" << endl;
	} else if (za<zb){
		cout << "SECOND ELSE IF WAS CORRECT" << endl;
	} else {
		cout << "SAB GALAT HAI " << endl;
	};
	


	//SWITCH 
	//
	int zzz ;
	std::cout << "ENTER A NUMBER BETWEEN 1 TO 10 " << endl;
	cin >> zzz ;
	switch (zzz) {
		case 1: 
			//block of code 1
			std::cout << "NUMBER ENTERED IS 1 AND CASE 1 IS EXECUTED "<< endl;
				break;
		case 2: 
				//block of code 2
				std::cout << "NUMBER ENTERED IS 2 AND THE CASE 2 IS EXECUTED "<< endl;
				break;
		case 3:
				//block of code 3
				std::cout << "CASE 3 NUM 3" << endl;
				break;
		case 4:
				//b4
				std::cout << "CASE 4 NUM 4"<< endl;
				break;
		case 5:
				//b5
				std::cout << "CASE 5 NUM  5"<< endl;
					break;
		case 6:
					//b6
					std::cout << "CASE 6 NUM 6" << endl;
					break;
		case 7:
					//b7
					std::cout << "CASE 7 NUM 7"<< endl;
					break ;
		case 8:
					//b8
					std::cout << "CASE 8 NUM 8"<< endl;
					break ;
		case 9:
					//b9
					std :: cout <<" CASE 9 NUM 9" << endl;
					break ;
		case 10 :
					//b10
					std::cout << "CASE 10 NUM 10"<< endl;
					break ;
		default:
					//bdefault
					std::cout << "NO CASE MATCHED "<< endl;
					break;
	};

	//LOOOPS
	// while loop
	int caa ;
	caa =4566;
	while (caa=4566){
		std::cout<< "THE WHILE CONDITIO WAS TRUE "<< endl;
		break;
		caa++;
	};
	
	// do while looop
	//
	int cab;
	cab = 5644;
	do {
		cout << "THIS IS A DO SECTION OF THE LOOP"<< endl;
		break ;
	}
	while (cab =4566);{
		std::cout << " THIS IS THE WHILE CONDITION OF THE LOOP IT SI EXECUTED WHEN TEH LOOP CONDITION WAS TRUE"<< endl;
		
		cab++;
	};

	// for loop; ok ashish
	
	for (int i = 0; i < 5; i++) {
		cout<< i << endl;
	};

	// c++ arr
	//
	string names1[10] = {"ashish " , "dipti " , "radhika" , "darsil" , "soham" , "rahul" , "vaibhav" , "aniket" , "chirag" , "aryan"  }; //indexing is 0112345678910
																																		//using this indexing for reffering the main values in the array main init

	std:: cout << names1[5] << endl; // o =  rahul coz the index no is 5 to the 6th value 
	// changeing the array element using index number 
	names1[9] = "DESPACITO "; 
	std::cout << names1[9] << "VALUE WAS CHANGED " << endl;


	// using loop with arrays
	//
	//
	string colors[5] = {"violet" , "blue" , "indigo" , "greem " ,  "yeelo"};
	for (int za = 0 ; za<5  ; za++) {
		std::cout << colors[za] << endl;
	};

	// getting the size of the array 
	//
	int character[5] = { 5,8,5,8,4 };
	int characterarraysize = sizeof(character)/sizeof(string);
	cout<< "SIZE OF THE ARRAY IS " << characterarraysize << endl;
	//
	//
	//

		
	//
	//
	//
	string names2[3][2]= {
		{ "ashish0", "ashish1" },
		{ "ashish2" ,  "ashish3" },
		{ "ashish4", "ashish5" },

		
	};
	std::cout << names2[2][1] << endl;
	//
	//
	//
	//LOOP THROUGH THE MULTIDIMENSTIONAL ARRAY 
	//
	//
	//
	string names3[2][3] = {
		{ "ashish1", "ashish2" , "ashish3" },
		{ "ashish4" , "Ashish5", "ashish6" },
	};

	for (int aaaa=0;aaaa<2;aaaa++){
		for (int bbbb=0; bbbb<3;bbbb++){
			cout << names3[aaaa][bbbb] << endl;
		}
	};

	// ashish commit checking 
	//
	// new coomit 
	// new commits 










	



	
	

	




	
	




	return 0;
}

