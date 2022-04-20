#include <iostream>
#include <iomanip>
using namespace std;

enum drinkName { Cola, RootBeer, LemonLime, GrapeSoda, CreamSoda };
double drinkCost[5] = { .75, .75, .75, .80, .80 };
int drinksRemaining[5] = { 20, 20, 20, 20, 20 };
string drinkNames[5] = { "Cola\t", "RootBeer", "LemonLime", "GrapeSoda", "CreamSoda"};


int main() {
	
	bool isActive = true;
	int cola, rootBeer, lemonLime, grapeSoda, creamSoda = 20;

	double costCola, costRootBeer, costLemonLime = .75;
	double costGrapeSoda, costCreamSoda = .80;

	double customerMoneyInput, changeReturn;
	char useMachine;
	int customerChoiceInput;

	while (isActive) {

		double total = 0;
		double change = 0;

		cout << "Hello welcome to Drink Machine. Would you like to purchase a drink? Y/N" << endl;
		cin >> useMachine;
		if (useMachine == 'N') {
			break;
		}
		else if (useMachine == 'Y') {
			cout << "Please make a selection from the following choices: " << endl;
			cout << "  " << "Drink Name \t Cost \t Number in Machine" << endl;
			for (int i = 0; i < 5; i++) {
				cout << fixed << setprecision(2) << i+1 << " " << drinkNames[i] << "\t " << drinkCost[i] << "\t\t" << drinksRemaining[i] << endl;
			}
			cout << "Please make a decision on what you would like (1 - 5): ";
			cin >> customerChoiceInput;
			switch (customerChoiceInput) {
			case 1:
				cout << "You have chosen " << drinkNames[0] << endl << endl;
				while (total < drinkCost[0]) {
				cout << "This costs " << drinkCost[0] << "." << endl << "How much money would you like to insert? (Any value less than $1.01): ";
					cin >> customerMoneyInput;
					if (customerMoneyInput < 0 || customerMoneyInput > 1) {
						cout << "Invalid monies hunnies" << endl;
					}
					else {
						total += customerMoneyInput;
						cout << "This is the total " << total << endl;
						if (total < drinkCost[0]) {
							cout << "Please insert more monies hunnies: " << endl;
						}
						if (total >= drinkCost[0]) {
							cout << "Yo drank has been dispensed." << endl;
							if (total > drinkCost[0])
								change = total - drinkCost[0];
							cout << "This is your change: " << change << endl << endl;
							drinksRemaining[0]--;
						}
					}
				}
				break;
			case 2:
				cout << "You have chosen " << drinkNames[1] << "." << endl << endl;
				while (total < drinkCost[1]) {
					cout << "This costs " << drinkCost[1] << "." << endl << "How much money would you like to insert? (Any value less than $1.01): ";
					cin >> customerMoneyInput;
					if (customerMoneyInput < 0 || customerMoneyInput > 1) {
						cout << "Invalid monies hunnies" << endl;
					}
					else {
						total += customerMoneyInput;
						cout << "This is the total " << total << endl;
						if (total < drinkCost[1]) {
							cout << "Please insert more monies hunnies: " << endl;
						}
						if (total >= drinkCost[1]) {
							cout << "Yo drank has been dispensed." << endl;
							if (total > drinkCost[1])
								change = total - drinkCost[1];
							cout << "This is your change: " << change << endl << endl;
							drinksRemaining[1]--;
						}
					}
				}
				break;
			case 3:
				cout << "You have chosen " << drinkNames[2] << "." << endl << endl;
				while (total < drinkCost[2]) {
					cout << "This costs " << drinkCost[2] << "." << endl << "How much money would you like to insert? (Any value less than $1.01): ";
					cin >> customerMoneyInput;
					if (customerMoneyInput < 0 || customerMoneyInput > 1) {
						cout << "Invalid monies hunnies" << endl;
					}
					else {
						total += customerMoneyInput;
						cout << "This is the total " << total << endl;
						if (total < drinkCost[2]) {
							cout << "Please insert more monies hunnies: " << endl;
						}
						if (total >= drinkCost[2]) {
							cout << "Yo drank has been dispensed." << endl;
							if (total > drinkCost[2])
								change = total - drinkCost[2];
							cout << "This is your change: " << change << endl << endl;
							drinksRemaining[2]--;
						}
					}
				}
				break;
			case 4:
				cout << "You have chosen " << drinkNames[3] << "." << endl << endl;
				while (total < drinkCost[3]) {
					cout << "This costs " << drinkCost[3] << "." << endl << "How much money would you like to insert? (Any value less than $1.01): ";
					cin >> customerMoneyInput;
					if (customerMoneyInput < 0 || customerMoneyInput > 1) {
						cout << "Invalid monies hunnies" << endl;
					}
					else {
						total += customerMoneyInput;
						cout << "This is the total " << total << endl;
						if (total < drinkCost[3]) {
							cout << "Please insert more monies hunnies: " << endl;
						}
						if (total >= drinkCost[3]) {
							cout << "Yo drank has been dispensed." << endl;
							if (total > drinkCost[3])
								change = total - drinkCost[3];
							cout << "This is your change: " << change << endl << endl;
							drinksRemaining[3]--;
						}
					}
				}
				break;
			case 5:
				cout << "You have chosen " << drinkNames[4] << "." << endl << endl;
				while (total < drinkCost[4]) {
					cout << "This costs " << drinkCost[4] << "." << endl << "How much money would you like to insert? (Any value less than $1.01): ";
					cin >> customerMoneyInput;
					if (customerMoneyInput < 0 || customerMoneyInput > 1) {
						cout << "Invalid monies hunnies" << endl;
					}
					else {
						total += customerMoneyInput;
						cout << "This is the total " << total << endl;
						if (total < drinkCost[4]) {
							cout << "Please insert more monies hunnies: " << endl;
						}
						if (total >= drinkCost[4]) {
							cout << "Yo drank has been dispensed." << endl;
							if (total > drinkCost[4])
								change = total - drinkCost[4];
							cout << "This is your change: " << change << endl << endl;
							drinksRemaining[4]--;
						}
					}
				}
				break;
			default:
				cout << "Input a valid response." << endl;
				break;
			}

		}
		else {
			cout << "Please input a valid response." << endl;
		}
	}

	return 0;
}