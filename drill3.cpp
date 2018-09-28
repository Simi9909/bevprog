#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string name;
	cin >> name;
	cout << "Dear " << name << ",\n";

	
	cout <<"  I have not seen you in a while. ";
  cout <<"How are you? ";
  cout <<"I can not wait until I see you!\n";

	
	string friend_name;
	cout << "Enter the name of another friend\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";


	cout << "Enter an 'm' if the friend is male and an 'f' if the friend is female.\n";
	char friend_sex=0;
	cin >> friend_sex;
	if (friend_sex=='m')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex=='f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	
	cout << "Enter the age of the recipient.\n";
	int age;
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age<=0 || age>=110)
		simple_error("you're kidding!");

	
	if (age<12)
		cout << "Next year you will be" << age+1<< ".\n";
	if (age==17)
		cout << "Next year you will be able to vote.\n";
	if (age>70)
		cout << "I hope you are enjoying retirement.\n";

	
	cout << "Yours sincerely,\n\n\n Simon Tamas \n";
}
