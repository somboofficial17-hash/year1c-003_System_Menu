#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;

int function1(){
//	1. Valible Somlor Soups & Curries
	string a1 ="Samlor Korko";
	string a2 ="Samlor Mchou Kroeung";
	string a3 ="Chicken Khmer Curry";
	string a4 ="Samlor Proher";
	string a5 ="Samlor Mchou Prolit";
	string a6 ="Chicken Ngam Ngov Soup";
//	1.1 -Valible Somlor Soups & Curries Price:
	int a1_pr = 16000;
	int a2_pr = 14000;
	int a3_pr = 15000;
	int a4_pr = 12000;
	int a5_pr = 10000;
	int a6_pr = 18000;
/*----------------------------------*/
//	1.Soups & Curries
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
//	row 1
	cout<<"|"<<setw(7)<<left<<"Number"
		<<"|"<<setw(28)<<left<<"Name"
		<<"|"<<setw(10)<<right<<"Price(Real)"
		<<"|"<<endl;
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
//	row 2	
	cout<<"|"<<setw(7)<<left<<"1"
		<<"|"<<setw(28)<<left<<a1
		<<"|"<<setw(10)<<left<<a1_pr
		<<"|"<<endl;
//	row 3		
	cout<<"|"<<setw(7)<<left<<"2"
		<<"|"<<setw(28)<<left<<a2
		<<"|"<<setw(10)<<left<<a2_pr
		<<"|"<<endl;
//	row 4		
	cout<<"|"<<setw(7)<<left<<"3"
		<<"|"<<setw(28)<<left<<a3
		<<"|"<<setw(10)<<left<<a3_pr
		<<"|"<<endl;
//	row 5		
	cout<<"|"<<setw(7)<<left<<"4"
		<<"|"<<setw(28)<<left<<a4
		<<"|"<<setw(10)<<left<<a4_pr
		<<"|"<<endl;
//	row 6		
	cout<<"|"<<setw(7)<<left<<"5"
		<<"|"<<setw(28)<<left<<a5
		<<"|"<<setw(10)<<left<<a5_pr
		<<"|"<<endl;
//	row 7		
	cout<<"|"<<setw(7)<<left<<"6"
		<<"|"<<setw(28)<<left<<a6
		<<"|"<<setw(10)<<left<<a6_pr
		<<"|"<<endl;
	
	
	cout<<setfill('-')<<setw(50)<<"-"<<endl<<endl;
// you order

	int order;
	cout<<endl<<"What are You older ?  = ";
	cin>>order;
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
	
	switch(order){
		
		case 1: cout<<"You are order :"<<a1<<"Price :"<<a1_pr<<"Real"<<endl;
		break;
		case 2: cout<<"You are order :"<<a2<<"Price :"<<a2_pr<<"Real"<<endl;
		break;
		case 3: cout<<"You are order :"<<a3<<"Price :"<<a3_pr<<"Real"<<endl;
		break;
		case 4: cout<<"You are order :"<<a4<<"Price :"<<a4_pr<<"Real"<<endl;
		break;
		case 5: cout<<"You are order :"<<a5<<"Price :"<<a5_pr<<"Real"<<endl;
		break;
		case 6: cout<<"You are order :"<<a6<<"Price :"<<a6_pr<<"Real"<<endl;
		break;
		default :
		cout<<"You New Chooce again. You can chooce such as : 1-6"<<endl;
	}
	
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
	
	
}
int function2(){
	//	2. Valible Stir-fries & Fried Dishes :
	string b1 ="Stir-fried Crab with Kampot Pepper";
	string b2 ="Beef Lok Lak";
	string b3 ="Stir-fried Chicken with Ginger";
	string b4 ="Sweet and Sour Fried Fish";
	string b5 ="Khmer Omelet";
//	2.1 -Valible Stir-fries & Fried Dishes Pric:
	int b1_pr =48000;
	int b2_pr =18000;
	int b3_pr =12000;
	int b4_pr =24000;
	int b5_pr =8000;
/*----------------------------------*/

//	Stir-fries & Fried Dishes
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
//	row 1
	cout<<"|"<<setw(7)<<left<<"ID "
		<<"|"<<setw(28)<<left<<"Name"
		<<"|"<<setw(10)<<right<<"Price(Real)"
		<<"|"<<endl;
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
//	row 2	
	cout<<"|"<<setw(7)<<left<<"1"
		<<"|"<<setw(28)<<left<<b1
		<<"|"<<setw(10)<<left<<b1_pr
		<<"|"<<endl;
//	row 3		
	cout<<"|"<<setw(7)<<left<<"2"
		<<"|"<<setw(28)<<left<<b2
		<<"|"<<setw(10)<<left<<b2_pr
		<<"|"<<endl;
//	row 4		
	cout<<"|"<<setw(7)<<left<<"3"
		<<"|"<<setw(28)<<left<<b3
		<<"|"<<setw(10)<<left<<b3_pr
		<<"|"<<endl;
//	row 5		
	cout<<"|"<<setw(7)<<left<<"4"
		<<"|"<<setw(28)<<left<<b4
		<<"|"<<setw(10)<<left<<b4_pr
		<<"|"<<endl;
//	row 6		
	cout<<"|"<<setw(7)<<left<<"5"
		<<"|"<<setw(28)<<left<<b5
		<<"|"<<setw(10)<<left<<b5_pr
		<<"|"<<endl;

	cout<<setfill('-')<<setw(50)<<"-"<<endl<<endl;
	
	int order;
	cout<<endl<<"What are You older ?  = ";
	cin>>order;
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
	
	switch(order){
		
		case 1: cout<<"You are order :"<<b1<<"Price :"<<b1_pr<<"Real"<<endl;
		break;
		case 2: cout<<"You are order :"<<b2<<"Price :"<<b2_pr<<"Real"<<endl;
		break;
		case 3: cout<<"You are order :"<<b3<<"Price :"<<b3_pr<<"Real"<<endl;
		break;
		case 4: cout<<"You are order :"<<b4<<"Price :"<<b4_pr<<"Real"<<endl;
		break;
		case 5: cout<<"You are order :"<<b5<<"Price :"<<b5_pr<<"Real"<<endl;
		break;
		default :
		cout<<"You New Chooce again. You can chooce such as : 1-6"<<endl;
	}
	
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
}
int function3(){
	//	3. Valible Grilled, Salads & Dips
	string c1 ="Tuk Kroeung with Fresh Vegetables";
	string c2 ="Prahok Ktis";
	string c3 ="Green Mango Salad with Smoked Fish";
	string c4 ="Beef Pleah";
	string c5 ="Khmer Grilled Chicken";
//	3.1 -Valible Grilled, Salads & Dips Price:
	int c1_pr =18000;	
	int c2_pr =14000;	
	int c3_pr =12000;	
	int c4_pr =34000;	
	int c5_pr =36000;	
/*----------------------------------*/

//	Grilled, Salads & Dips
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
//	row 1
	cout<<"|"<<setw(7)<<left<<"Number"
		<<"|"<<setw(28)<<left<<"Name"
		<<"|"<<setw(10)<<right<<"Price(Real)"
		<<"|"<<endl;
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
//	row 2	
	cout<<"|"<<setw(7)<<left<<"1"
		<<"|"<<setw(28)<<left<<c1
		<<"|"<<setw(10)<<left<<c1_pr
		<<"|"<<endl;
//	row 3		
	cout<<"|"<<setw(7)<<left<<"2"
		<<"|"<<setw(28)<<left<<c2
		<<"|"<<setw(10)<<left<<c2_pr
		<<"|"<<endl;
//	row 4		
	cout<<"|"<<setw(7)<<left<<"3"
		<<"|"<<setw(28)<<left<<c3
		<<"|"<<setw(10)<<left<<c3_pr
		<<"|"<<endl;
//	row 5		
	cout<<"|"<<setw(7)<<left<<"4"
		<<"|"<<setw(28)<<left<<c4
		<<"|"<<setw(10)<<left<<c4_pr
		<<"|"<<endl;
//	row 6		
	cout<<"|"<<setw(7)<<left<<"5"
		<<"|"<<setw(28)<<left<<c5
		<<"|"<<setw(10)<<left<<c5_pr
		<<"|"<<endl;

	cout<<setfill('-')<<setw(50)<<"-"<<endl<<endl;
	
	int order;
	cout<<endl<<"What are You older ?  = ";
	cin>>order;
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
	
	switch(order){
		
		case 1: cout<<"You are order :"<<c1<<"Price :"<<c1_pr<<"Real"<<endl;
		break;
		case 2: cout<<"You are order :"<<c2<<"Price :"<<c2_pr<<"Real"<<endl;
		break;
		case 3: cout<<"You are order :"<<c3<<"Price :"<<c3_pr<<"Real"<<endl;
		break;
		case 4: cout<<"You are order :"<<c4<<"Price :"<<c4_pr<<"Real"<<endl;
		break;
		case 5: cout<<"You are order :"<<c5<<"Price :"<<c5_pr<<"Real"<<endl;
		break;
		default :
		cout<<"You New Chooce again. You can chooce such as : 1-5"<<endl;
	}
	
	cout<<setfill('-')<<setw(50)<<"-"<<endl;
	cout<<setfill(' ');
}

int main(){
//	my color
	system("color D7");
	
//	system window for prosess of symbol 
	system("chcp 65001 > nul");
//	my varible
	int n;
	string r = "Real";
	cout<<"_____________WELCOM TO MY SHOP__________"<<endl;
	
	cout<<"\t•─────────•°•❀•°•─────────•"<<endl<<endl;
	cout<<"✦----- ━━ 👨‍🍳 MENU CARD 👩‍🍳 ━━ ------✦"<<endl;
	cout<<endl<<endl;
	
	cout<<"There are such as :"<<endl;
	cout<<"0.Done"<<endl;
	cout<<"1.Soups & Curries"<<endl;
	cout<<"2.Stir-fries & Fried Dishes"<<endl;
	cout<<"3.Grilled, Salads & Dips"<<endl<<endl;
	do{
		cout<<"You Can Choose Number :";cin>>n;
		switch(n){
			case 0:
			cout<<"Thank Everyone"<<endl;
			break;
			case 1:
			cout<<"1.Soups & Curries"<<endl;
			function1();
			break;
			
			case 2:
			cout<<"2.Stir-fries & Fried Dishes"<<endl;
			function2();
			break;
				
			case 3:
			cout<<"3.Grilled, Salads & Dips"<<endl;
			function3();
			break;
			
			default:
			cout<<"You Can sellect Number 1,2,3"<<endl<<endl;	
		}
	}while(n>0);
	
	
	return 0;
}