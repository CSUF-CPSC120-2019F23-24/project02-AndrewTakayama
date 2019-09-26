//Name: Andrew Takayama, program which makes quality of life changes.
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
   std::string location;
   int days;
   double hotel_expenses;
   double meal_expenses;
   double total;

    //Creates dollar sign.
    char dollar_sign = '$';

    // Asks user for business trip location.
    std::cout << "Where is your business trip located?\n";
    getline(std::cin, location);

    // Asks user how long their trip will take.
    std::cout << "How long will you be on this trip for?\n";
    std::cin >> days;

   //Asks user how much they spent for the hotel
    std::cout << "How much were your hotel expenses?\n";
    std::cin >> hotel_expenses;

    // Finally, asks the user how much their meals cost.
    std::cout << "How much were your meal expenses?\n";
    std::cin >> meal_expenses;

    //Calculates the total amount of expenses.
    total = hotel_expenses + meal_expenses;

    // print the tables showing the user's inputs.
    std::cout << std::setw(10) << "Location";
    std::cout << std::setw(14) <<  "Days";
    std::cout << std::setw(14) <<  "Hotel Cost";
    std::cout << std::setw(14) <<  "Meal Cost";
    std::cout << std::setw(14) << "Total Cost" << std::endl;

    std::cout << std:: setw(10) << location.substr(0, 20);
    std::cout << std::setw(10) << days;
    std::cout << std::setw(10) << dollar_sign << hotel_expenses;
    std::cout << std::setw(8) << dollar_sign << meal_expenses;
    std::cout << std::setw(7) << dollar_sign << total << std::endl;

    return 0;
}
