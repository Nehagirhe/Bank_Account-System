#include <iostream>

using namespace std;
class Account
{
    public:
    string sac;
    string uname;
    string pass;
    string fname;
    string mname;
    string lname;
    string add;
    string tuname;
   int amount=0;
   int damount=0;
   int wamount=0;
   int tamount=0;
    int ramount=
	0;
    int aType;
    
    
    Account()
{


	fname=" UNKNOWN ";
	mname=" UNKNOWN ";
	lname=" UNKNOWN ";
	add  =" UNKNOWN ";
	aType=0;
	uname=" UNKNOWN ";
	pass =" UNKNOWN ";
	
}



    void createAcc()
    {
    	cout<<"\nNAME     :";
			 cin>>fname;
			 cout<<"OK...";
             cout<<"\nLASTNAME :";
			 cin>>lname;
			  cout<<"OK...";
			 cout<<"\nMOTHERNAME :";
			 cin>>mname;
			  cout<<"OK...";
             cout<<"\nADDRESS  :";
			 cin>>add;   
			  cout<<"\nOK...";
        cout<<"\nCREATE USERNAME :";
        cin>>uname;
         cout<<"OK...";
        cout<<"\nCREATE PASSWORD :";
        cin>>pass;
         cout<<"OK...";
        cout<<"\n\nSELECT ACCOUNT TYPE :";
        cout<<"\n1.SAVING ACCOUNT"<<endl;
        cout<<"2.CURRENT ACCOUNT"<<endl;
        cout<<"Choice :";
        cin>>aType;
        cout<<"OK.."<<endl;
        cout<<endl<<"ACCOUNT CREATED SUCCESSFULLY..."<<endl;

    }

    int loginAcc(string un,string pws){
        if(uname==un&&pass==pws)
            {
                return 1;
            }

       return 0;
    }

    void acctInfo()
{
          cout<<"\n-----------------------ACCOUNT INFO----------------------"<<endl;

             cout<<"ACCOUNT TYPE : ";
             switch(aType)
             {
             case 1:
                cout<<"SAVING ACCOUNT"<<endl;
                break;
             case 2:
                 cout<<"CURRENT ACCOUNT"<<endl;
                break;
             }
             cout<<"\nNAME       :"<<fname;
             cout<<"\nLASTNAME   :"<<lname;
             cout<<"\nMOTHERNAME :"<<mname;
             cout<<"\nADDRESS    :"<<add;
             cout<<"\nUSERNAME   :"<<uname;
             cout<<"\nPASSWORD   :"<<pass;
             cout<<"\nBALANCE    :"<<amount;
             cout<<"\nok.."<<endl;
}


void update()
{
	string newsac;
	string newusername;
	string npass;
	string newname;
	string newlname;
	string newmname;
	int newatype;
	string nadd;
	int ch,ch1;
cout<<endl<<"\n\n------------------UPDATE INFO-------------------";
	cout<<endl<<"\n1.AccountType"<<"\n2.UserName"<<"\n3.Password"<<"\n4.First Name"<<"\n5.Last Name";
	cout<<endl<<"6.Mother Name"<<endl<<"7.Address";
	cout<<"\nChoice : ";
	cin>>ch;
	switch(ch)
	{
	case 1:
	{
	cout<<"\n----------------ACCOUNTTYPE CHANGE--------------------";
	cout<<endl<<"current AccountType is: "<<aType;
	cout<<endl<<"Select New AccountType is :";
	cout<<"\n1.SAVING ACCOUNT "<<endl<<"2.CURRENT ACCOUNT  : ";
	cin>>newatype;
	switch(newatype)
	{
	
	case 1:
		{
		cout<<"Saving Account\n\n";	
		}break;
		case 2:
			{
			cout<<"Current Account\n\n";	
			}break;
	
	}
	cout<<endl<<"Do You Really Want To Change "<<aType<<" to "<<newatype<<"(1.y/2.n) : ";
	cin>>ch1;
	switch(ch1)
	{
		case 1:{
        aType=newatype;
        cout<<"\nOk... Account Type Updated....";
    }break;
    case 2:
    	{
    	cout<<"\nOk... Account Type Is Not Updated...";	
		}break;
			
	}
	
	}
	
	break;
	case 2:
	{
	cout<<"\n-------------------USERNAME CHANGE----------------------";
	cout<<endl<<"current UserName is "<<uname;
	cout<<endl<<"Enter New Username :";
	cin>>newusername;
	cout<<endl<<"Do You Really Want To Change "<<uname<<" to "<<newusername;
	cout<<"(1.y/2.n)";
	cin>>ch1;
	switch(ch1)
	{
    case 1:
	{
	uname=newusername;
	cout<<"\nOk Username Updated";
	}break;
	case 2:
	{
	cout<<"\nOk Username Not Updated";
    }
	break;
	}	
	}
	break;
	case 3:
	{
	cout<<"\n--------------------PASSWORD CHANGE----------------------";
	cout<<endl<<"current Password is: "<<pass;
	cout<<endl<<"Enter New Password is :";
	cin>>npass;
	cout<<endl<<"Do You Really Want To Change "<<pass<<" to "<<npass;
	cout<<"(1.y/2.n)";
	cin>>ch1;
	switch(ch1)
	{
	case 1:
	{
	pass=npass;
   cout<<"\nOk Password Updated";     
	}break;
	case 2:
	{
	cout<<"\nOk Password Not Updated";
	}
	break;
	}	
    }
	break;
	case 4:
	{
	cout<<"\n-------------------FIRSTNAME CHANGE------------------------";
	cout<<endl<<"current Name is: "<<fname;
	cout<<endl<<"Enter NewName is :";
	cin>>newname;
	cout<<endl<<"Do You Really Want To Change "<<fname<<" to "<<newname;
	cout<<"(1.y/2.n)";
	cin>>ch1;
	switch(ch1)
	{
	case 1:
	{
	 fname=newname;
	 cout<<"\nOk Name Updated";
			             
	}break;
	case 2:
	{
	cout<<"\nOk Name Not Updated";
	}
	break;
	}
	}
	break;
	case 5:
	{
	cout<<"\n\n-----------------------LASTNAME CHANGE------------------------";
	cout<<endl<<"current LastName is: "<<lname;
	cout<<endl<<"Enter New LastName is :";
	cin>>newlname;
	cout<<endl<<"Do You Really Want To Change "<<lname<<" to "<<newlname;
	cout<<"(1.y/2.n)";
	cin>>ch1;
	switch(ch1)
	{
	case 1:
  {
lname=newlname;
 cout<<"\nOk LastName Updated";     
    }break;
	case 2:
	{
	cout<<"\nOk LastName Not Updated";
		}
	break;
	}
	}
	break;
	case 6:
	{
	cout<<"\n\n------------------MOTHERNAME CHANGE-----------------------------";
	cout<<endl<<"MotherName is: "<<mname;
	cout<<endl<<"Enter New Mothername  :";
	cin>>newmname;
	cout<<endl<<"Do You Really Want To Change "<<mname<<" to "<<newmname;
	cout<<"(1.y/2.n)";
	cin>>ch1;
	switch(ch1)
	{
	case 1:
	{
    mname=newmname;
	cout<<"\nOk MotherName Updated";     
	}break;
	case 2:
	{
	cout<<"\nOk MotherName Not Updated";
	}
	break;
	}
	}break;
	case 7:
	{
	cout<<"\n-----------------------ADDRESS CHANGE-----------------------";
	cout<<endl<<"Address is: "<<add;
	cout<<endl<<"Enter New Address :";
	cin>>nadd;
	cout<<endl<<"Do You Really Want To Change "<<add<<" to "<<nadd;
	cout<<"(1.y/2.n)";
	cin>>ch1;
	switch(ch1)
   {
	case 1:
	{
   add=nadd;
	cout<<"\nOk Address Updated";
		             
	}break;
	case 2:
	{
	cout<<"\nOk Address Not Updated";
	}
	break;
	}
	}
	}		
	
}



void transfermoney(Account acc[],int n)
{


		cout<<"\n\n----------------------TRANSFER MONEY---------------------------";
		cout<<"\nCURRENT BALANCE : "<<amount;
		cout<<"\nENTER THE AMOUNT TO BE TRANSFER : ";
		cin>>tamount;
		if(amount>tamount){
		cout<<"\nENTER USERNAME YOU  WANT TO TRANSFER MONEY : ";
		cin>>tuname;
		for(int i=0;i<n;i++){
		if(tuname==acc[i].uname)
		{
		acc[i].amount=acc[i].amount+tamount;
		acc[i].ramount=acc[i].amount;
		amount=amount-tamount;
		cout<<"\nAMOUNT TRANSFERRED TO "<<tuname<<" "<< tamount;
		cout<<"\nTRANSFERRED SUCCESSFULLY...";	
		}
	/*	else
		{
		//cout<<"\nWRONG USERNAME ";
		tamount=0;
		}*/
	}
	
	}
	else
	{
	tamount=0;
	cout<<"\nBALANCE NOT SUFFICIENT...!";
	}
}

void loginaccount(Account acc[],int n)
{
	int lp=1,ch;
while(lp)
{

cout<<"\n\n1.CHECK BALANCE"<<"\n2.DEPOSIT CASH"<<"\n3.WITHDRAWL CASH"<<"\n4.TRANSFER MONEY";
	cout<<"\n5.ACCOUNT INFO"<<"\n6.UPDATE INFO"<<"\n0.EXIT";
	cout<<"\nChoice : ";
	cin>>ch;
    switch(ch)
	{
	case 1:
	{
	cout<<"\n\n---------------------- BALANCE DASHBOARD---------------------------";
	
	cout<<endl<<"TRANSACTION         |    "<<"AMOUNT    ";
	if(damount!=0)
	{
	cout<<endl<<"DEPOSIT             |    "<<"+"<<damount;
	} 
	if(amount>wamount && wamount>0)
	{
	cout<<endl<<"WITHDRAWL           |   "<<"-"<<wamount;
    }

    if(tamount>0)
    	{
    	cout<<endl<<"TRANSFER TO "<<tuname<<"      |      "<<tamount;
    }
    

	for(int i=0;i<n;i++)
	{
	if(uname==acc[i].tuname){
    if( amount>=ramount  )
	cout<<endl<<"RECEIVED FROM "<<acc[i].uname<<"     |      "<<acc[i].tamount;
}

	}
	
	cout<<endl<<"--------------------------------------------------"<<endl<<"  ACCOUNT BALANCE :  "<<amount;             		
	}
	break;
	case 2:
	{
	
	cout<<endl<<"\n\n----------------------DEPOSIT CASH-------------------------";
	cout<<"\nCURRENT BALANCE : "<<amount;
	cout<<endl<<"ENTER DEPOSIT AMOUNT : ";
	cin>>damount;
	amount=amount+damount;
	cout<<endl<<"CASH DEPOSIT SUCCESSFUL....";
	cout<<endl<<"Ok..";	  
		}
		break;
	    case 3:
		{
			
		cout<<endl<<"\n\n--------------------WITHDRAWL CASH-----------------------";
		cout<<endl<<"CURRENT BALANCE : "<<amount;
		cout<<endl<<"ENTER WITHDRAWL AMOUNT : ";
		cin>>wamount;
		if(amount>wamount)
		{
		amount=amount-wamount;
		cout<<endl<<"CASH WITHDRAWL SUCCESSFUL....";
	cout<<endl<<"Ok..";}
	else
	{
		wamount=0;
	cout<<endl<<" NOT ENOUGH BALANCE ...";
	}	
	}
	break;
	case 4:
		transfermoney(acc,n);


		break;
	case 5:
		{
		acctInfo();	
	 }
		break;
		case 6:
			{
			update();	
			}
			break;
			case 0:
		{
		lp=0;
	    }
	break;
}


}
}
};


void menu()
{
    cout<<"1.CREATE ACCOUNT"<<endl;
    cout<<"2.LOGIN ACCOUNT"<<endl;
    cout<<"0.EXIT"<<endl;
}

int main()
{
    int lp=1,i,choice=0,x,n=0,wcount=0;
    string uname,pass;
    Account acc[15];
  cout<<"\n************** BANK ACCOUNT SYSTEM *****************\n";
        while(lp)
         {
             menu();
             cout<<"ENTER YOUR CHOICE :";
             cin>>choice;
             switch(choice)
             {
         case 1:
         
         cout<<endl<<"CREATE"<<endl;
         acc[n].createAcc();
         n++;
            break;
         case 2:
         cout<<endl<<"\n\n----------------------LOGIN--------------------------"<<endl;
            cout<<"USERANME :";
            cin>>uname;
            cout<<"PASSWORD :";
            cin>>pass;
            for(i=0;i<n;i++){

            x=acc[i].loginAcc(uname,pass);

            if(x==1)
            {
            cout<<"User Login"<<endl;
            acc[i].loginaccount(acc,n);
            wcount=0;
            }
            else
            wcount++;
            }
            if(wcount==n)
            {
            cout<<"WRONG USER NAME"<<endl;
            wcount=0;
            }
        break;
        case 0: 
        cout<<"\n\n T H A N K  Y O U!";
        cout<<"\nFOR USING SYSTEM ";
        lp=0;
        break;
        }
        }
	return 0;
}
