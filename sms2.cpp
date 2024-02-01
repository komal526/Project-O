
 #include<iostream>
 #include<vector>
 #include<string>
using namespace std;


class Customer{
	string name;
	int age;
	int phonenumber;
    string address;
    vector<string> itemName;
      vector<int> itemPrice;
      
    
    
    string typeOfStock[4] = {"CLOTHES", "GROCERY", "STATIONERY","ELECTRONICS"};

   string cloths[6][2] =    {{"Dresses    ","500  "},{"Jeans      ","800  "},{"Kurtas     ","400  "},{"T-shirts   ","700  "},{"Shirts     ","500  "},{"Trousres   ","600  "}};
   string grocery[6][2] =   {{"Noodles    ","50   "},{"Rice       ","80   "},{"Flour      ","40   "},{"Oil        ","70   "},{"Dry fruits ","30   "},{"Chocolate  ","20   "}};
   string stationery[6][2]= {{"Pen        ","50   "},{"Copy       ","80   "},{"Pencil     ","10   "},{"Eraser     ","10   "},{"Shool Bag  ","500  "},{"Pencil Box ","100  "}};
   string electronics[6][2]={{"Leptop     ","50000"},{"T.V.       ","10000"},{"Smart Phone","10000"},{"Iron       ","700  "},{"Heater     ","6000 "},{"Headphones ","3000 "}};
	
public:
	
  void cartMenu(){
  	int select;
  		cout<<"****************************************************************"<<endl;
  		cout<<"                CART MENU"<<endl;
  		cout<<"****************************************************************"<<endl;
  		cout<<" ___________________________"<<endl;
		cout<<"|1.   |   Add Item         |"<<endl;  	
  		cout<<"|2.   |   Check out        |"<<endl;
  		cout<<"|3.   |   Exit             |"<<endl;
  		cout<<"|_____|____________________|"<<endl;
  		cin>>select;
  		if(select==1){
  			cout<<"****************************************************************"<<endl;
  			cout<<"                     Add Item "<<endl;
  			cout<<"****************************************************************"<<endl;
  			custom();
		  }
		 
		  else if(select==2){
		  	cout<<"****************************************************************"<<endl;
		  	cout<<"                  Check out"<<endl;
		  	cout<<"****************************************************************"<<endl;
		
		  	printCart(itemName,itemPrice);
		  }
		  
		  else if(select==3){
		  	cout<<"****************************************************************"<<endl;
		  	cout<<"                  Exit"<<endl;
		  	cout<<"****************************************************************"<<endl;
		  	cout<<"\3\3\3 HAPPY SHOPPING \3\3\3"<<endl;
		  	cout<<"*****THANK YOU FOR VISITING*****"<<endl;
		  }
		  
  		else{
  			cout<<"Choose From Above"<<endl;
		  }
  }
	


	
	void printCart(vector<string> &item_name,vector<int> &item_price){
	 int sum=0;

	cout<<" __________________________________________      "   <<endl;
	cout<<"|Sr.No.     |  Items       |    Price            "   <<endl;
	cout<<"|___________|______________|______________       "   <<endl;
    for(int k = 0;k<item_name.size();k++){
    cout<<"|"<<k+1<<".         |"<<item_name[k]<<"   |   Rs "<<item_price[k]<<  endl;
	cout<<"|___________|______________|______________       "   <<endl;
		sum= sum + item_price[k];}
		cout<<"|    TOTAL(Rs)             |    "<<sum<<"                "   <<endl;
			cout<<"|__________________________|_______________       "   <<endl;
			}
		
	
	
	void addToCart(string item_name, string item_price){
		
		itemName.push_back(item_name);
	    itemPrice.push_back(stoi(item_price));
	}
	
  void getinfo(){
  	cout<<endl;
  	cout<<"****************************************************************"<<endl;
    cout<<"                 ENTER THE DETAILS "<<endl;
	cout<<"****************************************************************"<<endl;
  	cout<<"Enter The Name :";
  	cin>>name;
  	cout<<"Enter The Age :";
  	cin>>age;
  	cout<<"Enter The Phone number :";
  	cin>>phonenumber;
  	cout<<"Enter The Address :";
  	cin>>address;
  	cout<<endl;
  }	
  
  void printinfo(){
  	cout<<endl;
  	cout<<"****************************************************************"<<endl;
    cout<<"                 DETAILS OF THE CUSTOMER  "<<endl;
	cout<<"****************************************************************"<<endl;
  	cout<<"The name of the customer is:"<<name<<endl;
  	cout<<"The age of "<<name<<" is:"<<age<<endl;
  	cout<<"The phonenumber of "<<name<<" is:"<<phonenumber<<endl;
  	cout<<"The address "<<name<<" is:"<<address<<endl;
  	cout<<endl;
  	 }

void custom(){
		
    cout<<"****************************************************************"<<endl;
    cout<<"                 WHAT YOU WANT "<<endl;
	cout<<"****************************************************************"<<endl;
	for(int i=0;i<sizeof(typeOfStock)/sizeof(typeOfStock[0]);i++){
	cout<<i+1<<".     "<<typeOfStock[i]<<endl;
     }
	
	int b;
	cout<<"Enter Your Choice:";
	cin>>b;
	if(b==1){
  
    cout<<"****************************************************************"<<endl;
    cout<<"                  CLOTHS "<<endl;
	cout<<"****************************************************************"<<endl;
    cout<<" __________________________________________      "   <<endl;
	cout<<"|Sr.No.     |  Items       |    Price     |       "   <<endl;
	cout<<"|___________|______________|______________|       "   <<endl;
    for(int k = 0;k<sizeof(cloths)/sizeof(cloths[0]);k++){
    cout<<"|"<<k+1<<".         |"<<cloths[k][0]<<"   |   Rs "<<cloths[k][1]<<"   |"<<  endl;}
	cout<<"|___________|______________|______________|       "   <<endl;
	int c1;
	cout<<"Enter Which Item You Want "<<endl;
	cin>>c1;
		cout<<"****************************************************************"<<endl;
		cout<<"               YOU CHOOSE :  "<<endl;
		cout<<"          "<<c1<<". "<<cloths[c1-1][0]<<"  Rs "<<cloths[c1-1][1]<<" "<<endl; 
		cout<<"****************************************************************"<<endl;
		
       addToCart(cloths[c1-1][0],cloths[c1-1][1]);
      
     cartMenu();
	}

	else if(b==2){
		
	cout<<"****************************************************************"<<endl;
    cout<<"                  GROCERY "<<endl;
	cout<<"****************************************************************"<<endl;
	
    cout<<" __________________________________________      "   <<endl;
	cout<<"|Sr.No.     |  Items       |    Price     |       "   <<endl;
	cout<<"|___________|______________|______________|       "   <<endl;
    for(int k = 0;k<sizeof(grocery)/sizeof(grocery[0]);k++){
    cout<<"|"<<k+1<<".         |"<<grocery[k][0]<<"   |   Rs "<<grocery[k][1]<<"   |"<<  endl;}
	cout<<"|___________|______________|______________|       "   <<endl;

	int c1;
	cout<<"Enter Which Item You Want "<<endl;
	cin>>c1;
		cout<<"****************************************************************"<<endl;
		cout<<"               YOU CHOOSE :  "<<endl;
		cout<<"          "<<c1<<". "<<grocery[c1-1][0]<<"  Rs "<<grocery[c1-1][1]<<" "<<endl; 
		cout<<"****************************************************************"<<endl;
		
       addToCart(grocery[c1-1][0],grocery[c1-1][1]);
      
     cartMenu();
	}	
	
	else if(b==3){
		
	cout<<"****************************************************************"<<endl;
    cout<<"                  STATIONERY "<<endl;
	cout<<"****************************************************************"<<endl;

	cout<<" __________________________________________      "   <<endl;
	cout<<"|Sr.No.     |  Items       |    Price     |       "   <<endl;
	cout<<"|___________|______________|______________|       "   <<endl;
    for(int k = 0;k<sizeof(stationery)/sizeof(stationery[0]);k++){
    cout<<"|"<<k+1<<".         |"<<stationery[k][0]<<"   |   Rs "<<stationery[k][1]<<"   |"<<  endl;}
	cout<<"|___________|______________|______________|       "   <<endl;
int c1;
	cout<<"Enter Which Item You Want "<<endl;
	cin>>c1;
		cout<<"****************************************************************"<<endl;
		cout<<"               YOU CHOOSE :  "<<endl;
		cout<<"          "<<c1<<". "<<stationery[c1-1][0]<<"  Rs "<<stationery[c1-1][1]<<" "<<endl; 
		cout<<"****************************************************************"<<endl;
	
	addToCart(stationery[c1-1][0],stationery[c1-1][1]);
	cartMenu();
	}

	else if(b==4){
			
	cout<<"****************************************************************"<<endl;
    cout<<"                  ELECTRONICS "<<endl;
	cout<<"****************************************************************"<<endl;


    cout<<" __________________________________________      "   <<endl;
	cout<<"|Sr.No.     |  Items       |    Price     |       "   <<endl;
	cout<<"|___________|______________|______________|       "   <<endl;
    for(int k = 0;k<sizeof(electronics)/sizeof(electronics[0]);k++){
    cout<<"|"<<k+1<<".         |"<<electronics[k][0]<<"   |   Rs "<<electronics[k][1]<<"   |"<<  endl;}
	cout<<"|___________|______________|______________|       "   <<endl;
int c1;
	cout<<"Enter Which Item You Want "<<endl;
	cin>>c1;
		cout<<"****************************************************************"<<endl;
		cout<<"               YOU CHOOSE :  "<<endl;
		cout<<"          "<<c1<<". "<<electronics[c1-1][0]<<"  Rs "<<electronics[c1-1][1]<<" "<<endl; 
		cout<<"****************************************************************"<<endl;
	
   addToCart(electronics[c1-1][0],electronics[c1-1][1]);
   cartMenu();
	}
	
	else{
		cout<<"Choose Frome The Above "<<endl;
	}
	
}

};


class Entry{
	public:
	void start(){
	
	cout<<"****************************************************************"<<endl;
	cout<<"                WELCOME TO OUR STORE"<<endl;
	cout<<"****************************************************************"<<endl;
	
	cout<<"1. ENTRY"<<endl;
    cout<<"2. EXIT"<<endl;
    cout<<"Press1 for ENTRY and Press2 for EXIT"<<endl;
    
	cout<<"Enter Your Choice:";
	Customer ct;
	int a;
    cin>>a;
	if(a==1){
	cout<<endl;
	cout<<"1. EMPLOYEE"<<endl;
    cout<<"2. CUSTOMER"<<endl;
    cout<<"Press1 for EMPLOYEE and Press2 for CUSTOMER"<<endl;
	cout<<"Enter Your Choice: ";
	
	int a;
	cin>>a;
	if(a==1){
		int select;
	cout<<"****************************************************************"<<endl;
	cout<<"                EMPLOYEES"<<endl;
	cout<<"****************************************************************"<<endl;
	cout<<"Name of Employees::"<<endl;
	cout<<"1. Prisha"<<endl;
	cout<<"2. Akshay"<<endl;
	cout<<"3. Riyaan"<<endl;
	cout<<"4. Yashika"<<endl;	
	cout<<"Write the number whose details you want::";	
	cin>>select;
	switch(select){
		
		case 1:{
			cout<<"***PRISHA***"<<endl;
			cout<<"Accountant"<<endl;
			cout<<"Employee id : CB-4952"<<endl;
			cout<<"Age         : 32 years old"<<endl;
			cout<<"Phone no    : 8288594257"<<endl;
			cout<<"Email id.   : prisha4952@gmail.com"<<endl;
			cout<<"Address     : Chauma,Palam Vihar,Gurgaon "<<endl;
			break;
		}
			
	case 2:{
			cout<<"***AKSHAY***"<<endl;
			cout<<"Security"<<endl;
			cout<<"Employee id : CB-4953"<<endl;
			cout<<"Age         : 30 years old"<<endl;
			cout<<"Phone no    : 9472984254"<<endl;
			cout<<"Email id.   : akshay4953@gmail.com"<<endl;
			cout<<"Address     : Hamirpur,Himachal Pradesh "<<endl;
			break;
		}
	case 3:{
			cout<<"***RIYAAN***"<<endl;
			cout<<"Sales Person"<<endl;
			cout<<"Employee id : CB-4954"<<endl;
			cout<<"Age         : 23 years old"<<endl;
			cout<<"Phone no    : 9832564927"<<endl;
			cout<<"Email id.   : akshay4954@gmail.com"<<endl;
			cout<<"Address     : Mumbai,Maharastra "<<endl;
			break;
		}
		case 4:{
			cout<<"***YASHIKA***"<<endl;
			cout<<"Sales Person"<<endl;
			cout<<"Employee id : CB-4955"<<endl;
			cout<<"Age         : 27 years old"<<endl;
			cout<<"Phone no    : 73562527383"<<endl;
			cout<<"Email id.   : yashika4955@gmail.com"<<endl;
			cout<<"Address     : 127/4,Borboria,Amarpur "<<endl;
			break;
		}
	default:
	{
		cout<<"Invalid Input"<<endl;
		}	
		break;
	}
	
	}
	else if(a==2){
	ct.getinfo();
	ct.printinfo();
	ct.custom();
	}
	else{
		cout<<"Choose From The above";
	}
	
	}
    else if(a==2){
    	cout<<"\3\3\3THANK YOU FOR VISITING\3\3\3"<<endl;
	}
    else{
    	cout<<"Choose From The Above"<<endl;
	}

}
};

int main(){
  Entry en;  	
  Customer ct;
  en.start();
  
  

	return 0;
}
