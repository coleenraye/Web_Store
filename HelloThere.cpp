#include <iostream>
using namespace std;


float totaliPhone13 = 0;
float totaliPhone14 = 0;
float totaliPhone14Plus = 0;
float totaliPhone14Pro = 0;
float totaliPhone15 = 0;
float totaliPhone15Pro = 0;

float quantiiPhone13 = 0;
float quantiiPhone14 = 0;
float quantiiPhone14Plus = 0;
float quantiiPhone14Pro = 0;
float quantiiPhone15 = 0;
float quantiiPhone15Pro = 0;


int main()
{

	float totalQuantity;
	float quantity;
	float subTotal;
	float total;
	int ipho;
	while (1) {
		cout << "\tMANSANAS STORE" << endl;
		cout << "[1] iPhone 13" << endl;
		cout << "[2] iPhone 14" << endl;
		cout << "[3] iphone 14 Plus" << endl;
		cout << "[4] iPhone 14 Pro" << endl;
		cout << "[5] iPhone 15" << endl;
		cout << "[6] iPhone 15 Pro" << endl;
		cout << "[7] See Summary" << endl;
		cout << "Enter Choice: ";
		cin >> ipho;

		switch (ipho)
		{
		case 1:
			int choice;
			cout << "Your iPhone 13 will cost P42,990" << endl;
			cout << "Would you like to buy this product?" << endl;
			cout << "[1] Yes" << endl << "[2] No" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "How many will you buy? Please Enter: ";
				cin >> quantity;
				quantiiPhone13 += quantity;
				subTotal = quantity * 42990;
				totaliPhone13 += subTotal;
				cout << "The total is: " << subTotal << endl;
				cout << "Thank you for using mansanas store app!!!" << endl;
				cout << endl;
				main();
			}
			else {
				main();
			}
			break;

		case 2:
			cout << "Your iPhone 14 will cost P49,990" << endl;
			cout << "Would you like to buy this product?" << endl;
			cout << "[1] Yes" << endl << "[2] No" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "How many will you buy? Please Enter: ";
				cin >> quantity;
				quantiiPhone14 += quantity;
				subTotal = quantity * 49990;
				totaliPhone14 += subTotal;
				cout << "The total is: " << subTotal << endl;
				cout << "Thank you for using mansanas store app!!!" << endl;
				cout << endl;
				main();
			}
			else {
				main();
			}
			break;

		case 3:
			cout << "Your iPhone 14 Plus will cost P56,990" << endl;
			cout << "Would you like to buy this product?" << endl;
			cout << "[1] Yes" << endl << "[2] No" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "How many will you buy? Please Enter: ";
				cin >> quantity;
				quantiiPhone14Plus += quantity;
				subTotal = quantity * 56990;
				totaliPhone14Plus += subTotal;
				cout << "The total is: " << subTotal << endl;
				cout << "Thank you for using mansanas store app!!!" << endl;
				cout << endl;
				main();
			}
			else {
				return main();
			}
			break;

		case 4:
			cout << "Your iPhone 14 Pro will cost P61,990" << endl;
			cout << "Would you like to buy this product?" << endl;
			cout << "[1] Yes" << endl << "[2] No" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "How many will you buy? Please Enter: ";
				cin >> quantity;
				quantiiPhone14Pro += quantity;
				subTotal = quantity * 61990;
				totaliPhone14Pro += subTotal;
				cout << "The total is: " << subTotal << endl;
				cout << "Thank you for using mansanas store app!!!" << endl;
				cout << endl;
				main();
			}
			else {
			 main();
			}
			break;

		case 5:
			cout << "Your iPhone 15 will cost P56,990" << endl;
			cout << "Would you like to buy this product?" << endl;
			cout << "[1] Yes" << endl << "[2] No" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "How many will you buy? Please Enter: ";
				cin >> quantity;
				quantiiPhone15 += quantity;
				subTotal = quantity * 56990;
				totaliPhone15 += subTotal;
				cout << "The total is: " << subTotal << endl;
				cout << "Thank you for using mansanas store app!!!" << endl;
				cout << endl;
				main();
			}
			else {
				main();
			}
			break;

		case 6:
			cout << "Your iPhone 15 Pro will cost P70,990" << endl;
			cout << "Would you like to buy this product?" << endl;
			cout << "[1] Yes" << endl << "[2] No" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "How many will you buy? Please Enter: ";
				cin >> quantity;
				quantiiPhone15Pro += quantity;
				subTotal = quantity * 70990;
				totaliPhone15Pro += subTotal;
				cout << "The total is: " << subTotal << endl;
				cout << "Thank you for using mansanas store app!!!" << endl;
				cout << endl;
				main();
			}
			else {
				main();
			}
			break;

		case 7:
			cout << "\t\tORDER SUMMARY" << endl;
			cout << "\t\tQuaantity\tPrice" << endl;
			cout << "iPhone 13\t"<<quantiiPhone13 << "\t\t" << totaliPhone13 << endl;
			cout << "iPhone 14\t" << quantiiPhone14 <<"\t\t" <<totaliPhone14<< endl;
			cout << "iphone 14 Plus\t" << quantiiPhone14Plus << "\t\t" << totaliPhone14Plus << endl;
			cout << "iPhone 14 Pro\t" << quantiiPhone14Pro << "\t\t" << totaliPhone14Pro << endl;
			cout << "iPhone 15\t" << quantiiPhone15 << "\t\t" << totaliPhone15 << endl;
			cout << "iPhone 15 Pro\t" << quantiiPhone15Pro <<"\t\t"<<totaliPhone15Pro << endl;
			total = totaliPhone13 + totaliPhone14 + totaliPhone14Plus + totaliPhone14Pro + totaliPhone15 + totaliPhone15Pro;
			totalQuantity = quantiiPhone13 + quantiiPhone14 + quantiiPhone14Plus + quantiiPhone14Pro + quantiiPhone15 + quantiiPhone15Pro;
			cout << "Total:\t\t" << totalQuantity << "\t\t" << total<<endl;
			cout << endl;
			break;

		default:
			cout << "please choose choices 1-7" << endl;
			cout << endl;
			main();
		}
	}

}
