#include<iostream>
#include<conio.h> 
using namespace std;
  int insertedData = 0;
 
  struct Bank{
    int accountNumber;
	double balance;
	string CNIC;
    string name;
   }s[40];
   void insert()
  {
  	
  	system("cls");
  	cout<<"\n\t\t***INSERT RECORD***\n";
  	
  	cout<<"\n\t\tEnter name : ";
  	cin>>s[insertedData].name;
 	cout<<"\n\t\tEnter CNIC : ";
  	cin>>s[insertedData].CNIC;
  	cout<<"\n\t\t Your account number is : ";
  	cin>>s[insertedData].accountNumber;
  	cout<<"\n\t\tEnter balance  : Rs";
  	cin>>s[insertedData].balance;
  	insertedData++;
  	cout<<"\n\t\t***Inserted sucessfully***\n";
  	cout<<"\n\t\t***BANK ACCOUNT CREATED SUCCESSFULLY***\n";
  }
   	void deposit(){
   	double d;
   	int accNum,found;
		system("cls");
		cout<<"\n\t\t***DEPOSIT***\t\n";
		if(insertedData==0)
       cout<<"No data has been inserted till now";
      else
       
   	        cout<<"\n\t\tEnter Account number : ";
   	        cin>>accNum;
   	         for(int i = 0;i<insertedData; i++)
          {
       	    if(accNum==s[i].accountNumber)
   	        {
			if(d!=0)
			{
				cout<<"\n\t\tEnter Amount to be deposited in your account : ";
				cin>>d;
				s[i].balance+=d;
			cout<<"\n\t\tRs "<<d<<" has been added to your account.\n\t\t Now your account balance is Rs "<<s[i].balance<<endl;
			found++;
			cout<<"\n\t\t***Deposited sucessfully***\n";
			}
			}
	}
		
		}
		
	void withdraw()
	{
		system("cls");
		double w;
		int accNum,found;
		if(insertedData==0)
       cout<<"No data has been inserted till now";
		cout<<"\n\t\t***WITHDRAW***\t\n";
		cout<<"\n\t\tEnter Account number : ";
   	    cin>>accNum;
   	    for(int i=0;i<insertedData;i++){
		   
   	    if(accNum==s[i].accountNumber){
		if(w>s[i].balance)
		{
			cout<<"\n\t\tYour bank account does not contain this much amount.Please try again"<<endl;
		}
		else
		{ 
		cout<<"\n\t\tEnter Amount to be withdrawen from your account: ";
		cin>>w;
		s[i].balance-=w;
		cout<<"\n\t\tRs"<<w<<" has been with drawen from your bank account.\n\t\t Now your account have Rs "<<s[i].balance<<endl;
		found++;
		cout<<"\n\t\t****WITHDRAWEN SUCCESSFULLY****\t\n";
		}
	}
	}
	
	}
   void search()
  {
  int accNum,found;
  system("cls"); 
  
  cout<<"\n\t\t***SEARCH ACCOUNT***\n";
   if(insertedData==0)
   cout<<"No data has been inserted till now";
   else
   {
   	cout<<"Enter account number : ";
   	cin>>accNum;
   	    for(int a = 0;a<insertedData; a++)
     {
       	if(accNum==s[a].accountNumber)
       	{
       		cout<<"Account number : "<<s[a].accountNumber<<endl;
       		cout<<"User CNIC : "<<s[a].CNIC<<endl;
       		cout<<"User name :"<<s[a].name<<endl;
       		cout<<"Index number:"<<insertedData<<endl;
       	    found++;
		}
		 
	      cout<<"Account does not exist";}
	  //  for(int a=0;a<insertedData;a++){
		
	//	 if(accNum!=s[a].accountNumber)
	//	{
	//		cout<<"The account does not exist";
	//	}
}
		
       	
	 
          cout<<"\n\t\t***Searched sucessfully***\n";
	  
  }
  void del()
  {
  	int accNum,found;
    system("cls"); 
 
  cout<<"\n\t\t***DELETE ACCOUNT***\n";
   if(insertedData==0)
   cout<<"No data has been inserted till now";
   else
   {
   	cout<<"\n\t\tEnter Account number : ";
   	cin>>accNum;
   	 for(int a=0;a<insertedData;a++)
   	 {
   	 	if(accNum==s[a].accountNumber)
   	 	{
   	 		for(int m=a;m<insertedData-1;m++)
   	 		{
   	 		  s[m].accountNumber = s[m+1].accountNumber;
   	 		  s[m].name = s[m+1].name;
   	 		  s[m].balance = s[m+1].balance;
   	 		  s[m].CNIC = s[m+1].CNIC;	 		  

			}
			cout<<"\n\t\t***Account deleted***";
			insertedData--;
			break;
		}
	 }
   }
  }
  void display(){
  		int accNum;
  system("cls"); 
  
  
  cout<<"\n\t\t***DISPLAY***\n";
   if(insertedData==0)
   cout<<"***No record found***";
   else
   {
   	cout<<"\n\t\tEnter Account number to display details: ";
   	cin>>accNum;
   	   for(int a = 0; a<insertedData; a++)
     {
     	if(accNum==s[a].accountNumber)
       		cout<<"\n\t\tName :  "<<s[a].name;
       		cout<<"\n\t\tCNIC : "<<s[a].CNIC;
       		cout<<"\n\t\taccountNumber:  "<<s[a].accountNumber;
       		cout<<"\n\t\tBalance : Rs"<<s[a].balance;
       		cout<<"\n\t***************************************************\n\t";
       	    
       
	 
    }
		cout<<"\n\t\t***Showed all sucessfully***\n";	
  }
  }
  
  int main(){
	fP:
		system("cls");
	int choice;
	cout<<"\n\n\t\tWELLCOME TO BANKING SYSTEM!\n";
	cout<<"\n\n\t\t***MAIN MENU***\n";
	cout<<"\n\n\t\t1:CREATE ACCOUNT\n";
	cout<<"\n\n\t\t2:FIND ACCOUNT\n";
	cout<<"\n\n\t\t3:DEPOSIT AMOUNT\n";
	cout<<"\n\n\t\t4:WITHDRAW AMOUNT\n";	
	cout<<"\n\n\t\t5:DELETE ACCOUNT\n";	
    cout<<"\n\n\t\t6:DISPLAY ACCOUNT\n";
    cout<<"\n\n\t\t7:EXIT \n";
    cin>>choice;
    switch(choice)
    {
    	case 1:
        insert();
    		break;
	
	
	case 2:
		search();
		break;
	
	 
	case 3:
		deposit();
		break;

	
	 case 4:
	 	withdraw();
		break;
	
	
	 case 5:
	    del();
		break;
		
		
	 case 6:
	 	display();
	 	break;
	 	
	 	
	 case 7:
	 	exit(0);
		break;
	
	default:
		cout<<"Invalid input";
		break;
	}
	getch();
		goto fP;
	
}

