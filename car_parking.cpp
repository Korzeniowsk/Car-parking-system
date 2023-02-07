#include <iostream>
using namespace std;
int main()
{
	int u_input, amount=0, count=0, r=0, c=0, b=0;
	cout << "\n\n\t WELCOME TO PRAKASH CAR PARKING SYSTEM"<<endl;
	cout << "\n\n\t ****************************************************************"<<endl;
	cout << "\n Name: Rithu Prakash"<< endl;
	cout << "\n\n\t ****************************************************************"<<endl;
	cout << " vehicle limit: 50"<<endl;
	cout << " rickshaw parking charge: 100"<< endl;
	cout << " car parking charge: 200"<< endl;
	cout << " bus parking charge: 300" << endl;
    cout << "\n\n\t ****************************************************************"<<endl;
    
    
    	
	while(true)	
{
    	cout << " choose our services:"<<endl;
    	cout << " press 1 for rickshaw" << endl;
    	cout << " press 2 for car" << endl;
    	cout << " press 3 for bus" << endl;
    	cout << " press 4 to show the record" << endl;
    	cout << " press 5 to delete the record" << endl;
    	cout << "\n\n\t ****************************************************************"<<endl;
    	
	
   
    cin >> u_input;
    
    if (u_input == 1)
    {
    	if (count<=50)
    	{
    		r++;
    		amount = amount+100;
    		count = count+1;
    		cout << "\n\n\t****************************************************************"<<endl;
    		cout << " a new rickshaw has been parked!"<< endl;
    		cout << " total number of vehicles: "<< count<< endl;
    		cout << " now free space: "<< 50-(r+c+b) << endl;
    		cout << "\n\n\t****************************************************************"<<endl;
    		
		}
		else 
		{
			cout << " Sorry, parking is full!" << endl;
		}
	}
	else if (u_input == 2)
	{
		if (count <=50)
		{
			c++;
			amount = amount+200;
    		count = count+1;
    		cout << "\n\n\t****************************************************************"<<endl;
    		cout << " a new car has been parked!"<< endl;
    		cout << " total number of vehicles: "<< count<< endl;
    		cout << " now free space: "<< 50-(r+c+b) << endl;
    		cout << "\n\n\t****************************************************************"<<endl;
			
		}
		else 
		{
			cout << " Sorry, parking is full!" << endl;
		}
	}
	else if (u_input == 3)
	{
		if (count <=50)
		{
			b++;
			amount = amount+300;
    		count = count+1;
    		cout << "\n\n\t****************************************************************"<<endl;
    		cout << " a new bus has been parked!"<< endl;
    		cout << " total number of vehicles: "<< count<< endl;
    		cout << " now free space: "<< 50-(r+c+b) << endl;
    		cout << "\n\n\t****************************************************************"<<endl;
			
		}
		else 
		{
			cout << " Sorry, parking is full!" << endl;
		}
	}
	else if (u_input == 4)
	{
		
		
			cout << "\n\n\t****************************************************************"<<endl;
			cout << " Total amount: " << amount << endl;
			cout << " Total vehicles parked: " << count << endl;
			cout << " Number of rickshaws parked: " <<r<<endl;
			cout << " Number of cars parked: " <<c<<endl;
			cout << " Number of buses parked: " <<b<<endl;
			cout << "\n\n\t****************************************************************"<<endl;
			
		
	}
	else if (u_input == 5)
	{
		amount =0,r=0,c=0,b=0,count =0;
		cout << "\n\n\t****************************************************************"<<endl;
		cout << " All record deleted"<<endl;
		cout << "\n\n\t****************************************************************"<<endl;
	}
	else 
	{
		cout << "\n\n\t****************************************************************"<<endl;
		cout << " INVALID INPUT"<< endl;
		cout << "\n\n\t****************************************************************"<<endl;
	}
}
	return 0;
	
	}
