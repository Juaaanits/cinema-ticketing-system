#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void displayCinema();

int main() {

    string Cusname, Discount, Student, PWD, SeniorCitizen;
    int age, TicketPrice, CuStatus, NumTicket, MovNumber, TotalPrice, CusPay = 0, Oticketprice, AmountChange = 0;
    double StudentsDiscnt, PWDDiscnt, SeniorDiscnt;
    char proceed, receipt;

    displayCinema();
    cout << "\n";
    cout << "\t" << " Name of the Customer : ";
    getline(cin, Cusname);


    cout << "\n";
    cout << "\t" << " Age: ";
    cin >> age;
    cout << endl;

    cout << "\t" << " Customer Status:  \n\n";
    cout << "\t" << " [1]Student\n";
    cout << "\t" << " [2]PWD\n";
    cout << "\t" << " [3]Senior Citizen\n";
    cout << "\t" << endl;

    cout << "\t" << " Enter Corresponding Customer Status Number : ";
    cin >> CuStatus;

    switch (CuStatus)
    {

    case 1:
        Discount = Student;
        StudentsDiscnt = 0.3; // 30% of Discount
        cout << "\n" << setfill(' ') << setw(74) << " Students can now enjoy up to 30% Discount on any movie tickets ! \n" << endl;
        break;
    case 2:
        PWDDiscnt = 0.4; // 40% of Discount
        cout << "\n" << setfill(' ') << setw(87) << " Persons with Dissablities can have up to 40% Discount on any movie tickets ! \n" << endl;
        break;
    case 3:
        SeniorDiscnt = 0.5; // 50% of Discount
        cout << "\n" << setfill(' ') << setw(76) << " Senior Citizens can have up to 50% Discount on any movie tickets ! \n" << endl;
        break;
    default:
        cout << " Enter a valid Customer Status Number Thank you " << endl;
        break;

        return 0;
    }

    cout << " Please ensure that the following informations are correct \n" << endl;
    cout << " Wish to Proceed?  [Y] [N] : ";
    cin >> proceed;
    cout << setfill('_') << setw(70) << endl;
    cout << "\n";

    switch (proceed)
    {
    case 'Y':
    case 'y':
        system("cls");
        displayCinema();
        break;
    case 'N':
    case 'n':
        cout << "\n";
        cout << setw(54) << " If errors has been made Please try again " << endl;
        cout << setfill('_') << setw(70) << endl;
        cout << "\n";

        return 0;
        break;
    }

    cout << "\n";
    cout << setw(25) << setfill(' ') << " Available Movies: \n" << endl;
    cout << setw(40) << " [0] Avengers: Infinity War \n" << endl;
    cout << setw(37) << " [1] Antman And The Wasp \n" << endl;
    cout << setw(28) << " [2] Deadpool 2 \n" << endl;
    cout << setw(23) << " [3] Venom \n" << endl;
    cout << setw(32) << " [4] Captain Marvel \n" << endl;

    cout << "\n";
    cout << " Choose Movie Number: ";
    cin >> MovNumber;

    string MovTitle[] = { "Avengers: Infinity War", "Antman And The Wasp", "Deadpool 2", "Venom", "Captain Marvel" };

    cout << "\n";
    cout << setw(23) << "For Confirmation: \n\n";
    cout << setw(38) << " Your chosen Movie Title is " << MovTitle[MovNumber] << endl;
    cout << "\n";


    cout << " Continue? [Y] [N] \t ";
    cin >> proceed;

    switch (proceed)
    {
    case 'Y':
    case 'y':
        system("cls");
        displayCinema();
        break;
    case 'N':
    case 'n':
        cout << "\n";
        cout << setw(54) << " If errors has been made Please try again " << endl;
        cout << setfill('_') << setw(70) << endl;
        cout << "\n";

        return 0;
        break;
        return 0;
    }

    cout << "\n";
    cout << "\t\t\t" << MovTitle[MovNumber];
    cout << setfill('_') << setw(70) << endl;
    cout << "\n\n";
    cout << setw(24) << setfill(' ') << " MTRBC Rating of the Movie:   RATED 18 \n" << endl;
    cout << " Customer Age: " << age << "\n" << endl;

    if (age < 18) {
        cout << setw(21) << " Sorry but this movie is not suitable for the Age of the Customer ";
        cout << setfill('_') << setw(70) << endl;
        cout << "\n";
        return 0;
    }
    else {

        cout << setw(30) << " Movie is suitable for the Age of the customer \n";
    }

    //Default Price of a ticket 

    TicketPrice = 250;


    cout << setfill('_') << setw(70) << endl;
    cout << "\n\n";
    cout << setw(27) << setfill(' ') << "1 ticket Cost = " << TicketPrice << " Pesos \n" << endl;

    cout << " How many tickets would you like to buy? : ";
    cin >> NumTicket;
    cout << endl;

    switch (CuStatus)
    {

    case 1:
        StudentsDiscnt = 0.3; // 30% of Discount
        TotalPrice = (TicketPrice - (StudentsDiscnt * TicketPrice)) * NumTicket;
        break;
    case 2:
        PWDDiscnt = 0.4; // 40% of Discount
        TotalPrice = (TicketPrice - (PWDDiscnt * TicketPrice)) * NumTicket;
        break;
    case 3:
        SeniorDiscnt = 0.5; // 50% of Discount
        TotalPrice = (TicketPrice - (SeniorDiscnt * TicketPrice)) * NumTicket;
        break;
    }

    Oticketprice = TicketPrice * NumTicket;
    cout << " Total Ticket Price: " << Oticketprice;
    cout << endl;

    cout << "\n Would You Like To Avail Movie Snacks? \n" << endl;
    cout << " Press Y if YES, Press N if NO        [Y] [N] : ";

    cin >> proceed;
    cout << setfill('_') << setw(70) << endl;
    cout << "\n";

    switch (proceed)
    {
    case 'Y':
    case 'y':
        system("cls");
        displayCinema();
        break;
    case 'N':
    case 'n':
        system("cls");

        displayCinema();

        cout << "\n";

        cout << "\t\t" << MovTitle[MovNumber] << setfill(' ') << setw(5) << "(" << NumTicket << ")" << " Tickets Reserved ";
        cout << "\n\n";

        cout << " Ticket Price :" << Oticketprice << endl;
        cout << endl;

        if (CuStatus == 1) {
            cout << " Discount:  Student = 30% " << endl;
            cout << "\n";
            cout << " Discounted Total Price: " << TotalPrice;
        }
        if (CuStatus == 2) {
            cout << " Discount:  PWD = 40% " << endl;
            cout << "\n";
            cout << " Discounted Total Price: " << TotalPrice;
        }
        if (CuStatus == 3) {
            cout << " Discount:  Senior Citizens = 50% " << endl;
            cout << "\n";
            cout << " Discounted Total Price: " << TotalPrice;
        }

        cout << endl;
        cout << "\n";

        cout << " Please Enter the Amount of your Money to Pay: ";
        cin >> CusPay;

        cout << setw(70) << setfill('-') << endl;
        cout << "\n";

        cout << "\n";

        cout << " Amount Received: " << CusPay << endl;
        cout << "\n";

        AmountChange = CusPay - TotalPrice;
        cout << " Amount Change: " << AmountChange << endl;
        cout << "\n";

        cout << " Press [Y] Continue to generate your Official Receipt: ";
        cin >> receipt;

        switch (receipt)

    case 'Y':
    case 'y':

        system("cls");

        displayCinema();
        cout << endl;
        cout << setw(40) << setfill(' ') << "Official Receipt" << endl;
        cout << endl;

        cout << " Customer Name: " << Cusname << endl;
        cout << "\n";
        cout << " Branch : Cinema 5" << endl;
        cout << "\n";
        cout << " Movie Title :" << MovTitle[MovNumber] << endl;
        cout << "\n";
        cout << " Screening Date: 12/11/2021 " << endl;
        cout << "\n";
        cout << " Screening Time: 4:00 Pm 6:30 PM" << endl;
        cout << "\n";
        
        cout << setw(70) << setfill('-') << endl;
        cout << "\n";

        cout << " Ticket Qty: " << NumTicket << " x " << TicketPrice << endl;
        cout << "\n";
        cout << setfill(' ') << " Total Ticket Price: " << Oticketprice << endl;
        cout << "\n";

        cout << " Discounted Total Price: " << TotalPrice << endl;
        cout << "\n";

        cout << " Amount Received: " << CusPay << endl;
        cout << "\n";

        cout << " Amount Change: " << AmountChange << endl;

        cout << setw(70) << setfill('_') << endl;
        cout << "\n";

        cout << "\n";
        cout << setw(25) << "   Please keep this receipt and present it to the theater booth \n" << endl;

        cout << setfill(' ');
        cout << setw(30) << "    Thank you for you support and Enjoy your Movie :)";


        return 0;

    }

    // Snack Availment

    int choice = 0, blockQuant = 0, burgQuant = 0, nachQuant = 0, hotQuant = 0, drnkQuant = 0, TotalAmount;
    double subTotal = 0, tax, totalDue, blockTotal = 0, burgTotal = 0, nachTotal = 0, hotTotal = 0, drnkTotal = 0;

    cout << "			Welcome Cinema Snack Bar!" << endl;
    cout << "Please continue to make all your selections by using the item number on the left" << endl;
    cout << "When you are finished type 'd' to Finish Ordering." << endl;
    cout << endl;
    cout << "..................................MENU........................................" << endl;
    cout << "Item# Description--------------------------------------------------------Price" << endl;
    cout << "______________________________________________________________________________" << endl;
    cout << "[1] BlockBuster Snack: Large popcorn with Drinks, Large Fries.........1200.00" << endl;
    cout << endl;
    cout << "[2] Loaded nachos: chips with beef or chicken, cheese and jalapenos....450.00" << endl;
    cout << endl;
    cout << "[3] Cheese Burger with Drinks, Large Fries.............................300.00" << endl;
    cout << endl;
    cout << "[4] Hotdog with Drinks.................................................150.00" << endl;
    cout << endl;
    cout << "[5] DRINKS one-size and free refills....................................95.00" << endl;
    cout << endl;
    cout << setw(27) << setfill(' ') << "\n Please Enter Your Orders Below: " << endl;

    while (choice == 1 || 2 || 3 || 4 || 5) {

        cin >> choice;

        switch (choice)
        {
        case 1:
            blockQuant = blockQuant + 1;
            blockTotal = blockQuant * 1200.00;
            break;
        case 2:
            burgQuant = burgQuant + 1;
            burgTotal = burgQuant * 450.00;
            break;
        case 3:
            hotQuant = hotQuant + 1;
            hotTotal = hotQuant * 300.00;
            break;
        case 4:
            nachQuant = nachQuant + 1;
            nachTotal = nachQuant * 450.00;
            break;
        case 5:
            drnkQuant = drnkQuant + 1;
            drnkTotal = drnkQuant * 95.00;
            break;
        }

        system("cls");

        subTotal = (blockTotal + burgTotal + hotTotal + nachTotal + drnkTotal);
        cout << fixed << setprecision(2) << endl;
        displayCinema();
        cout << endl;
        cout << setw(40) << setfill(' ') << "Official Receipt" << endl;
        cout << endl;

        cout << " Customer Name: " << Cusname << endl;
        cout << "\n";
        cout << " Branch : Cinema 5" << endl;
        cout << "\n";
        cout << " Movie Title :" << MovTitle[MovNumber] << endl;
        cout << "\n";
        cout << " Screening Date: 12/11/2021 " << endl;
        cout << "\n";
        cout << " Screening Time: 4:00 Pm 6:30 PM" << endl;
        cout << "\n";

        cout << setw(70) << setfill('-') << endl;
        cout << "\n";
        cout << " Ticket Qty: " << NumTicket << " x " << TicketPrice << endl;
        cout << "\n";
        cout << setfill(' ') << " Total Ticket Price: " << Oticketprice << endl;
        cout << "\n";

        cout << " Discounted Ticket Price: " << TotalPrice << endl;
        cout << "\n";
      
        cout << " Snack: " << subTotal;
       
        TotalAmount = TotalPrice + subTotal;

        cout << " \n Total Amount to  Pay : " << TotalAmount  << "\n" << endl;
        
        cout << setw (70) << setfill('-') << endl;
        cout << "\n";
        cout << " Payment" << endl;
        cout << "\n";

        cout << " Please Enter the Amount of your Money to Pay : ";
        cin >> CusPay;
      
        cout << "\n";
        cout << setfill(' ') << " Amount Received: " << CusPay << endl;

        AmountChange = CusPay - TotalAmount;
        cout << " Amount Change: " << AmountChange << endl;
       
        cout << setw(70) << setfill('_') << endl;
        cout << "\n";

        cout << "\n";
        cout << setw(25) << " Please keep this receipt and present it to the theater booth \n" << endl;
        
        cout << setfill(' ');
        cout << setw(40) << " Thank you for you support and Enjoy your Movie :)";

        return 0;
    }

}


void displayCinema() {
    cout << setfill(' ') << setw(57) << " Cinema Ticketing and Snacks Availment System ";
    cout << setfill('_') << setw(70) << endl;
    cout << "\n";
}
