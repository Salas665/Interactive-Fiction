#include <iostream>
#include <string>

using namespace std;
//Declaring the bool functions 
string introduction();
bool getDecisionOne();
bool getDecisionTwo();
bool getDecisionThree();
bool getDecisionFour();


int main()
{
	//Declaring the bool variable (locally on main)
	bool isAlive = true;
	//introduction function
	introduction();
	//First scenario
	isAlive = getDecisionOne();
	if (isAlive == true)
	{
		//Second scenario
		//This is CRUCIAL
		//This 
		isAlive = getDecisionTwo(); 
	}
	else
	{
		cout << "You lost two members of the group.\n";
		cout << "Game Over!\n\n";
		system("\npause");
		//This exits the program
		return 0;
	}
	//Third scenario
	if (isAlive == true)
	{
		isAlive = getDecisionThree();
	}
	else
	{
		cout << "You and 3 members of your group are dead...\n";
		cout << "Game Over!\n\n";
		system("\npause");
		//This exits the program
		return 0;
	}

	if (isAlive == true)
	{
		//Fourth scenario
		isAlive = getDecisionFour();
	}
	if (isAlive == false)
	{
		cout << "Game Over!\n";
		system("pause");
		//This exits the program
		return 0;
	}
	cout << "\nCongratulations! You have survived yet another day in hell on Earth.\n";
	system("pause");
	return 0;
}

//This is my Introduction function, it gives the user context
string introduction()
{
	string intro;
	cout << "It is year 2023, and a zombie apocalypse is undergoing. You are with a group of ";
	cout << "\n4 survivors (Mike, Alex, Tiffany, and Dax).";
	cout << " You are currently scavenging for supplies \n2 miles away from camp. Your mission is to lead the group of survivors back";
	cout << " to safety with \nthe necessary supplies. Good luck!\n\n";
	return intro;
}

//This is my function for the first choice the user is given
bool getDecisionOne()
{
	int pathChoice;
	bool isAlive = true;
	cout << "During your search for more food and water, you spot a promising trail just off the road.\n";
	cout << "What will you do?\n";
	cout << "1) Send Dax and Tiffany to investigate\n";
	cout << "2) Go as a group\n";
	//Choice 1 leads to death
	cout << "Enter '1' or '2'\n";
	//Registering user's input
	cin >> pathChoice;
	//Evaluating the user's input
	if (pathChoice == 1)
	{
		cout << "Tiffany and Dax are never seen again.\n";
		isAlive = false;
	}
	else if (pathChoice == 2)
	{
		cout << "The whole group goes and with the whole group looking around, you manage to\n";
		cout << "to find a lot of food and water among other useful supplies.\n\n";
		isAlive = true;
	}
	return isAlive;
}

//This is my function for the second choice the user is given
bool getDecisionTwo()
{
	bool isAlive = true;
	int pathChoice;
	string getPathTwo;
	cout << "While still scavenging, you are halted by the noise of rustling leaves, and it is coming from behind you!\n";
	cout << "What do you do?\n";
	cout << "1) Turn around and investigate\n";
	cout << "2) Run!\n";
	//Choice 2 leads to death
	cout << "Enter '1' or '2'\n";
	//Registering user's input
	cin >> pathChoice;
	//Evaluating the user's input
	if (pathChoice == 1)
	{
		cout << "You come to find out that it was a wounded deer that was causing the ruckus. You decide to kill\n";
		cout << "it and harvest its meat. More food for the camp!\n\n";
		isAlive = true;
	}
	else if (pathChoice == 2)
	{
		cout << "You and your group run until the whole group is fatigued, while everyone catching your breath\n";
		cout << "you are ambushed by a horde of zombies and you died, the only survivor was Dax.\n";
		isAlive = false;
	}
	return isAlive;
}

//This is my function for the third choice the user is given
bool getDecisionThree()
{
	bool isAlive = true;
	int pathChoice;

	cout << "You are coming to the end of the scavenging route and will need to turn back soon. Mike tells the group that he\n";
	cout << "is familiar with the are and knows of a shortcut to the camp\n";
	cout << "What do you wish to do?\n";
	cout << "1) Take the shortcut\n";
	cout << "2) Take the normal route\n";
	//Choice 1 leads to death
	cout << "Enter '1' or '2'\n";
	//Registering user's input
	cin >> pathChoice;
	//Evaluating the user's input
	if (pathChoice == 1)
	{
		cout << "While on the shortcut the group is ambushed by a horde of zombies, there are no survivors left.\n";
		isAlive = false;
	}
	else if (pathChoice == 2)
	{
		cout << "halfway to their return you spot a Twinkie truck, upon opening it, you ecstatic to see that it has not been looted yet.\n";
		cout << "You gather as much Twinkies as the group can hold and continue the trail back to the camp.\n\n";
		isAlive = true;
	}
	return isAlive;
}

//This is my function for the fourth choice the user is given
bool getDecisionFour()
{
	bool isAlive = true;
	int pathChoice;
	cout << "Upon being a half a mile away from your camp, you hear crying up ahead, and decide to investigate it.\n";
	cout << "It is a boy no more than 14 years old, he tells your group that he escaped a zombie attack, but his parents\n";
	cout << "weren’t that lucky, he is lost and in need of a shelter\n";
	cout << "How do you wish to handle the situation?\n";
	cout << "1) Take the boy as a new member of the group\n";
	cout << "2) Ignore his cries and return being on your way \n";
	cout << "3) Let Tiffany kill Him \n";
	//Choices 1 and 3 lead to death
	cout << "Enter '1', '2', or '3'\n";
	//Resigtering user's input
	cin >> pathChoice;
	//Evaluting user's input
	if (pathChoice == 1)
	{
		cout << "You return to camp safely, with a lot of supplies and no members dead.\n";
		cout << "You are looking forward to sleep, as well as everyone else in the group. What none of you\n";
		cout << "know is that that night would be your last. The boy you accepted into the group was bit in the\n";
		cout << "zombie attack he was in. He turned into a zombie in the middle of night and killed every member\n";
		cout << "of the group including you.\n";
		isAlive = false;
	}
	else if(pathChoice == 2)
	{
		cout << "You return to camp safely, with a lot of supplies and no members dead. You are looking forward\n";
		cout << "to sleep, as well as everyone else in the group. The next day, you wake up to see all your members\n";
		cout << "around a fire telling stories about their past, you are delighted by the view of companionship\n";
		cout << "you join them and enjoy a well-deserved twinkie.\n";
		isAlive = true;
	}
	else
	{
		cout << "Tiffany kills the boy, but Mike is furious at Tiffany and they get into a really heated argument.\n";
		cout << "Mike ends up shooting Tiffany. Alex, who was Tiffany's boyfriend shoots Mike in return.\n";
		cout << "and Dax, who was Mike's best friends, points his gun at Alex, Alex reacts just in time for him\n";
		cout << "to be able to shoot Dax. But he was a fraction of a second too late. They end up killing each other.\n";
		cout << "You are the only person left in the group.\n";
		isAlive = false;
	}
	return isAlive;
}