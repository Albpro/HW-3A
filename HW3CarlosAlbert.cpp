// Rhoda’s Strikeforce Gym
// Carlos Albert
// COP2000


#include <iostream>
#include <iomanip>

using namespace std;
int main()


{

	const int goldLevel = 1,
		silverLevel = 2, bronzeLevel = 3, QUIT = 4, totalYears = 10;  //Constants
	const float goldApr = 0.01,
		silverApr = 0.02, bronzeApr = 0.04;


	int menu_choice;
	float INITIAL_FEE_GOLD = 1200.00, INITIAL_FEE_SILVER = 1200.00, INITIAL_FEE_BRONZE = 1200.00; //Variables

	cout << fixed << showpoint << setprecision(2); //Next step do Loop
	do
	{



		cout << " Welcome to Ronda's Strikeforce Gym!!\n";
		cout << " -------------------------------------------------\n";
		cout << " Membership Fee Calculator\n";
		cout << " 1.Gold\n";
		cout << " 2.Silver\n";                                // Display The Menu
		cout << " 3.Bronze\n";
		cout << " 4.Quit\n\n";
		cout << " Please enter your membership level (1-3 Enter 4 to Quit) > ";  // User Enters enters levels 1-3
		cin >> menu_choice;


		while (menu_choice < goldLevel || menu_choice > QUIT)
		{
			cout << "Invalid entry! \n";                        //Validate for input 
			cout << "Please enter a selection from 1-4: ";
			cin >> menu_choice;
		}


		if (menu_choice != QUIT)  // Choose to Quit 
		{

			switch (menu_choice) //Switch Statment
			{


			case goldLevel:

				for (int years = 1; years <= totalYears; years++)
				{
					INITIAL_FEE_GOLD = INITIAL_FEE_GOLD + (INITIAL_FEE_GOLD * goldApr);
					cout << "Year " << years << INITIAL_FEE_GOLD << endl;
				}
				break;

			case silverLevel:


				for (int years = 1; years <= totalYears; years++)
				{
					INITIAL_FEE_SILVER = INITIAL_FEE_SILVER + (INITIAL_FEE_SILVER * silverApr);
					cout << "Year " << years << "   " << INITIAL_FEE_SILVER << endl;
				}
				break;


			case bronzeLevel:

				for (int years = 1; years <= totalYears; years++)
				{
					INITIAL_FEE_BRONZE = INITIAL_FEE_BRONZE + (INITIAL_FEE_BRONZE * bronzeApr);
					cout << "Year " << years << "  " << INITIAL_FEE_BRONZE << endl;
				}
				break;
			}
		}
	} while (menu_choice != QUIT);
	cout << "Thank You For Using Ronda's Fee Calculator!\n"; 	//While Loop
	return 0;
}
