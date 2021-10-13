#include <iostream>
using namespace std;

int main()
{
	char Again;
	double foodCalories;
	double fat;
	double caloriesFromFat;
	double fatPercentage;
	do {
		cout << "CALORIES VS CALORIES FROM FAT" << endl;
		cout << "**************************************************" << endl;
		cout << "Calories provide a measure of how much" << endl;
		cout << "energy you get from a serving of this food." << endl;
		cout << "Many Americans consume more calories than" << endl;
		cout << "they need without meeting recommended intakes" << endl;
		cout << "for a number of nutrients. One gram of fat has" << endl;
		cout << "9 calories. Foods with less than 30% calories" << endl;
		cout << "are considered low in fat." << endl;
		cout << "\nThis program will calculate the percentage of fat" << endl;
		cout << "in a food based on your input of total calories" << endl;
		cout << "and fat in grams." << endl;
		cout << "**************************************************" << endl;
		cout << "\nPlease enter the total calories present in your food: ";
		cin >> foodCalories;
		while (foodCalories < 0) {// When input is less than zero
			cout << "Calories cannot be less than zero. Please try again." << endl;
			system("pause");
			system("cls");
			cout << "Please enter the total calories present in your food: ";
			cin >> foodCalories;
		}
		cout << "\nPlease enter the grams of fat present in your food: ";
		cin >> fat;
		while (fat < 0) { //This is a check to determine if the fat input is less than zero
			cout << "Grams of fat cannot be less than zero.";
			cout << "\nPlease try again." << endl;
			system("pause"); //Give user time to read message
			system("cls");
			cout << "Please enter the grams of fat present in your food: "; //allow user to input fat again
			cin >> fat;
		}
		while (fat > foodCalories) { // when the input of fat is greater than total calories
			cout << "Grams of fat cannot be greater than the total calories of food eaten.";
			cout << "\nPlease try again" << endl;
			system("pause");
			system("cls");
			cout << "Please enter the grams of fat present in your food: ";// allow user to reinput it again
			cin >> fat;
			while (fat < 0) {// same as the initial fat check when it is less than zero
				cout << "Grams of fat cannot be less than zero.";
				cout << "\nPlease try again." << endl;
				system("pause");
				system("cls");
				cout << "Please enter the grams of fat present in your food: ";
				cin >> fat;
			}
		}
		caloriesFromFat = fat * 9;
		fatPercentage = (caloriesFromFat / foodCalories) * 100;
		cout << "With " << fat << " grams of fat with " << foodCalories << " total calories," << endl;
		cout << fatPercentage << "% of the calories come from fat." << endl;
		if (fatPercentage <= 30) {// if the fat percentage is less than 30%
			cout << "This food is low in fat." << endl;
			cout << "\nHurray! Less than 30% calories from fat." << endl;
			cout << "Now we can have cheese cake" << endl;
		}
		else if (fatPercentage > 30) {// if fat percentage is greater than 30%
			cout << "This food is not low in fat, so not a lot of cheese cake for you." << endl;
		}
		cout << "Do you want to run it again (y for yes, n for no): ";// allow user to do the program again if desired
		cin >> Again;
		if (tolower(Again) == 'y')
			system("cls");
	} while (tolower(Again) == 'y');
}