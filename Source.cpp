#include <iostream>
#include <fstream>
#include <iomanip>

void MainMenu();

class Management {
public:
	Management() {
		MainMenu();
	}
};

class details {
public:
	static std::string name, gender;
	int phoneNo;
	int age;
	std::string addr;
	static int CID;
	char arr[100];
	void information() {
		std::cout << "\nEnter customers ID: ";
		std::cin >> CID;
		std::cout << "\nEnter the name: ";
		std::cin >> name;
		std::cout << "\nEnter the age: ";
		std::cin >> age;
		std::cout << "\nEnter the address: ";
		std::cin >> addr;
		std::cout << "\nEnter the gender: ";
		std::cin >> gender;
		std::cout << "\nYour details are saved \n" << std::endl;

	}
};

int details::CID;
std::string details::name;
std::string details::gender;

class registration {
public:
	static int option;
	int option1;
	int back;
	static float charges;

	void flights() {
		std::string flightN[] = { "Kazakhstan", "Russia", "Uzbekistan", "Turkmenistan", "CHINA", "South Korea" };
		for (int i = 0; i < 6; i++) {
			std::cout << (i + 1) << ".flight to" << flightN[i] << std::endl;
		}
		std::cout << "\nEnter the number of the country: ";
		std::cin >> option;
		switch (option) {
		case 1: {
			std::cout << "_______________WELCOME TO KAZAKHSTAN_______________\n" << std::endl;
			std::cout << "_____YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!_____" << std::endl;
			std::cout << "_____FOLLOWING FLIGHTS_____\n" << std::endl;
			std::cout << "1. KAZ --- 498" << std::endl;
			std::cout << "\t11-01-2023  12:00PM  7hrs Pr. 1400$" << std::endl;
			std::cout << "2. KAZ --- 598" << std::endl;
			std::cout << "\t14-01-2023  12:00PM  8hrs Pr. 1600$" << std::endl;
			std::cout << "3. KAZ --- 698" << std::endl;
			std::cout << "\t18-01-2023  12:00PM  9hrs Pr. 1800$" << std::endl;
			std::cout << "\nSelect the flight: ";
			std::cin >> option1;
			if (option1 == 1) {
				charges = 1400;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | KAZ --- 498 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 2) {
				charges = 1600;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | KAZ --- 598 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 3) {
				charges = 1800;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | KAZ --- 698 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else {
				std::cout << "_________INVALID INPUT_________" << std::endl;
				flights();
			}
			std::cout << "Enter any key to return to main menu: " << std:: endl;
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}
		}
		case 2: {
			std::cout << "_______________WELCOME TO RUSSIA_______________\n" << std::endl;
			std::cout << "_____YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!_____" << std::endl;
			std::cout << "_____FOLLOWING FLIGHTS_____\n" << std::endl;
			std::cout << "1. RUS --- 498" << std::endl;
			std::cout << "\t11-01-2023  12:00PM  7hrs Pr. 1400$" << std::endl;
			std::cout << "2. RUS --- 598" << std::endl;
			std::cout << "\t14-01-2023  12:00PM  8hrs Pr. 1600$" << std::endl;
			std::cout << "3. RUS --- 698" << std::endl;
			std::cout << "\t18-01-2023  12:00PM  9hrs Pr. 1800$" << std::endl;
			std::cout << "\nSelect the flight: ";
			std::cin >> option1;
			if (option1 == 1) {
				charges = 1400;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | RUS --- 498 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 2) {
				charges = 1600;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | RUS --- 598 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 3) {
				charges = 1800;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | RUS --- 698 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else {
				std::cout << "_________INVALID INPUT_________" << std::endl;
				flights();
			}
			std::cout << "Enter any key to return to main menu: " << std::endl;
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}

		}
		case 3: {
			std::cout << "_______________WELCOME TO UZBEKISTAN_______________\n" << std::endl;
			std::cout << "_____YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!_____" << std::endl;
			std::cout << "_____FOLLOWING FLIGHTS_____\n" << std::endl;
			std::cout << "1. UZB --- 498" << std::endl;
			std::cout << "\t11-01-2023  12:00PM  7hrs Pr. 1400$" << std::endl;
			std::cout << "2. UZB --- 598" << std::endl;
			std::cout << "\t14-01-2023  12:00PM  8hrs Pr. 1600$" << std::endl;
			std::cout << "3. UZB --- 698" << std::endl;
			std::cout << "\t18-01-2023  12:00PM  9hrs Pr. 1800$" << std::endl;
			std::cout << "\nSelect the flight: ";
			std::cin >> option1;
			if (option1 == 1) {
				charges = 1400;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | UZB --- 498 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 2) {
				charges = 1600;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | UZB --- 598 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 3) {
				charges = 1800;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | UZB --- 698 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else {
				std::cout << "_________INVALID INPUT_________" << std::endl;
				flights();
			}
			std::cout << "Enter any key to return to main menu: " << std::endl;
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}
		}
		case 4: {
			std::cout << "_______________WELCOME TO TURKMENISTAN_______________\n" << std::endl;
			std::cout << "_____YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!_____" << std::endl;
			std::cout << "_____FOLLOWING FLIGHTS_____\n" << std::endl;
			std::cout << "1. TUR --- 498" << std::endl;
			std::cout << "\t11-01-2023  12:00PM  7hrs Pr. 1400$" << std::endl;
			std::cout << "2. TUR --- 598" << std::endl;
			std::cout << "\t14-01-2023  12:00PM  8hrs Pr. 1600$" << std::endl;
			std::cout << "3. TUR --- 698" << std::endl;
			std::cout << "\t18-01-2023  12:00PM  9hrs Pr. 1800$" << std::endl;
			std::cout << "\nSelect the flight: ";
			std::cin >> option1;
			if (option1 == 1) {
				charges = 1400;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | TUR --- 498 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 2) {
				charges = 1600;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | TUR --- 598 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 3) {
				charges = 1800;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | TUR --- 698 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else {
				std::cout << "_________INVALID INPUT_________" << std::endl;
				flights();
			}
			std::cout << "Enter any key to return to main menu: " << std::endl;
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}
		}
		case 5: {
			std::cout << "_______________WELCOME TO CHINA_______________\n" << std::endl;
			std::cout << "_____YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!_____" << std::endl;
			std::cout << "_____FOLLOWING FLIGHTS_____\n" << std::endl;
			std::cout << "1. CHI --- 498" << std::endl;
			std::cout << "\t11-01-2023  12:00PM  7hrs Pr. 1400$" << std::endl;
			std::cout << "2. CHI --- 598" << std::endl;
			std::cout << "\t14-01-2023  12:00PM  8hrs Pr. 1600$" << std::endl;
			std::cout << "3. CJI --- 698" << std::endl;
			std::cout << "\t18-01-2023  12:00PM  9hrs Pr. 1800$" << std::endl;
			std::cout << "\nSelect the flight: ";
			std::cin >> option1;
			if (option1 == 1) {
				charges = 1400;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | CHI --- 498 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 2) {
				charges = 1600;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | CHI --- 598 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 3) {
				charges = 1800;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | CHI --- 698 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else {
				std::cout << "_________INVALID INPUT_________" << std::endl;
				flights();
			}
			std::cout << "Enter any key to return to main menu: " << std::endl;
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}
			  }
		case 6: {
			std::cout << "_______________WELCOME TO SOUTH KOREA_______________\n" << std::endl;
			std::cout << "_____YOUR COMFORT IS OUR PRIORITY. ENJOY THE JOURNEY!_____" << std::endl;
			std::cout << "_____FOLLOWING FLIGHTS_____\n" << std::endl;
			std::cout << "1. KOR --- 498" << std::endl;
			std::cout << "\t11-01-2023  12:00PM  7hrs Pr. 1400$" << std::endl;
			std::cout << "2. KOR --- 598" << std::endl;
			std::cout << "\t14-01-2023  12:00PM  8hrs Pr. 1600$" << std::endl;
			std::cout << "3. KOR --- 698" << std::endl;
			std::cout << "\t18-01-2023  12:00PM  9hrs Pr. 1800$" << std::endl;
			std::cout << "\nSelect the flight: ";
			std::cin >> option1;
			if (option1 == 1) {
				charges = 1400;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | KOR --- 498 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 2) {
				charges = 1600;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | KOR --- 598 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else if (option1 == 3) {
				charges = 1800;
				std::cout << "\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT | KOR --- 698 |" << std::endl;
				std::cout << "\nYOU CAN RETURN TO MAIN MENU AND TAKE THE TICKET :)" << std::endl;
			}
			else {
				std::cout << "_________INVALID INPUT_________" << std::endl;
				flights();
			}
			std::cout << "Enter any key to return to main menu: " << std::endl;
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}
		}
		default: {
			std::cout << "________INVALID INPUT________" << std::endl;
			MainMenu();
			break;
		}
		}
	}
};

float registration::charges;
int registration::option;


class tickets :public registration, details {
public:
	void Bill() {
		std::string destination="";
		std::ofstream outf("records.txt"); {
			outf << "__________AV AIRLINES__________" << std::endl;
			outf << "____________Ticket_____________" << std::endl;
			outf << "_______________________________" << std::endl;
			outf << "Customer ID: " << details::CID << std::endl;
			outf << "Customer NAME: " << details::name << std::endl;
			outf << "Customer GENDER: " << details::gender << std::endl;
			outf << "\tSpecification" << std::endl;
			if (registration::option == 1) {
				destination = "KAZAKHSTAN";
			}
			else if (registration::option == 2) {
				destination = "RUSSIA";
			}
			else if (registration::option == 3) {
				destination = "UZBEKISTAN";
			}
			else if (registration::option == 4) {
				destination = "TURKMENISTAN";
			}
			else if (registration::option == 5) {
				destination = "CHINA";
			}
			else if (registration::option == 6) {
				destination = "SOUTH KOREA";
			}
			outf << "Destination: " << destination << std::endl;
			outf << "Flight cost: " << registration::charges << std::endl;
		}
		outf.close();
	}
	void display() {
		std::ifstream ifs("records.txt"); {
			if (!ifs) {
				std::cout << "FILE ERROR" << std::endl;
			}
			while (!ifs.eof()) {
				ifs.getline(arr, 100);
				std::cout << arr << std::endl;
			}
		}
	}
};

void MainMenu() {
	int lchoice;
	int schoice = 0;
	int back{};
	std::cout << "\t______________________AV AIRLINES________________________\n" << std::endl;
	std::cout << "\t_______________________MAIN MENU_________________________" << std::endl;
	std::cout << "\t_________________________________________________________" << std::endl;
	std::cout << "\t|\t\t\t\t\t\t\t|" << std::endl;
	std::cout << "\t|\t   Enter 1 to add Details of Customer   \t|" << std::endl;
	std::cout << "\t|\t    Enter 2 for Flight Registration     \t|" << std::endl;
	std::cout << "\t|\t    Enter 3 for Tickets and Charges     \t|" << std::endl;
	std::cout << "\t|\t            Enter 4 to Exit             \t|" << std::endl;
	std::cout << "\t|\t__________________________________________\t|" << std::endl;

	std::cout << "Select menu option: ";
	std::cin >> lchoice; 

	details d;
	registration r{};
	tickets t;

	switch (lchoice) {
	case 1: {
		std::cout << "_______________________CUSTOMERS_______________________\n" << std::endl;
		d.information();
		std::cout << "Enter any key to return to the main menu: ";

		if (back == 1) {
			MainMenu();
		}
		else{
			MainMenu();
		}
		break;
	}
	case 2: {
		std::cout << "_______________BOOK A FLIGHT_______________\n"<<std::endl;
		r.flights();
		break;
	}
	case 3: {
		std::cout << "_______________GET YOUR TICKET_______________\n" << std::endl;
		t.Bill();
		std::cout << "Your ticket is printed, you can take it \n" << std::endl;
		std::cout << "Enter 1 to see the ticket: ";
		std::cin >> back;
		if (back == 1) {
			t.display();
			std::cout << "Enter any key to return to the main menu: ";
			std::cin >> back;
			if (back == 1) {
				MainMenu();
			}
			else {
				MainMenu();
			}
		}
		else {
			MainMenu();
		}
		break;
	}
	case 4: {
		std::cout << "\n\n\t_______________THANK YOU_______________" << std::endl;
		break;
	}
	default: {
		std::cout << "_______________INVALID INPUT_______________\n" << std::endl;
		MainMenu();
		break;
	}
	}
}
int main() {
	Management Mobj;


	system("pause");
	return 0;
}