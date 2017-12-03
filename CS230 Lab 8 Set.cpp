//this application implements use of a simple set
//program does data insertion,searching, and deletion
//program will represent a set of keys
//a user can add a key, delete a key, and check for duplicate keys
//GROUP: Zalika, Lukas, Will, and Malik
#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
string key, answer,answer2;
int i;

std::set<std::string> Keyring;

//prompts user to insert elements in set
for(i = 0; i < 5; i++)
{
cout<<"\nInsert Key " <<i+1<<" Onto Key Ring. Use _ For Spaces"<<endl;
cin >>key;
Keyring.insert(key);

}
//shows resulting key ring
cout<<"\nHere is Completed Key Ring\n"<<endl;
for(std::set<std::string>::iterator it=Keyring.begin(); it !=Keyring.end(); it++) //the '<' operator keeps UNIQUE elements in sorted order
{
std::cout<<" "<<"\n"<< *it; 
}


//Set Deletion and Addition
cout<<"\nWould You Like to Add or Delete From Key Ring?"<<endl;
cout<<"\nType add or delete"<<endl;
cin>>answer;

if(answer=="add")
{
cout<<"\nAdd Another Key. Use _ For Spaces"<<endl;
cin>>key;
Keyring.insert(key);

	if(Keyring.insert(key).second) //checks to see if key already present in set
	{
	cout<<key<<" Successful Addition!"<<endl;
	}	
	else if(!Keyring.insert(key).second)
	{
	cout<<" Duplicate Key Can't Be Added!"<<endl;
	}
}
else if(answer=="delete")
{
cout<<"\nDelete A Key. Use _ For Spaces"<<endl;
cin>>key;
Keyring.erase(key);
cout<<"\nNew Keyring"<<endl;
}

for(std::set<std::string>::iterator it=Keyring.begin(); it !=Keyring.end(); it++)
{
std::cout<<" "<<"\n"<< *it;
}
cout<<"\nKeyring size is "<<Keyring.size()<<endl;

//Set Searching
cout<<"\nWant To Search For A Key y/n?"<<endl;
cin>>answer2;

if(answer2=="y")
{
cout<<"\nSearch For A Key. Use _ For Spaces"<<endl;
cout<<"\nWhere Is My..."<<endl;
cin>>key; cout<<" Key?"<<endl;
std::set<std::string>::iterator it=Keyring.find(key);//iterates through set to find specified key

	if(it !=Keyring.end())
	{
	cout<<key<<" Key"<<" Found!"<<endl;
	}
	else
	{
	cout<<key<<" Key"<<" Not Found :("<<endl;
	}
}
else if(answer2=="n")
{
return 0;
}

return 0;

}
