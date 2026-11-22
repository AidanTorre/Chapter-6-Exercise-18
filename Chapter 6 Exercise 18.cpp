#include <iostream>
#include <iomanip>
using namespace std;

double calculatePopulation(double population, double birthRate, double deathRate)
{
    return population * (1 + birthRate) * (1 - deathRate);
}

int main()
{
    double population;
    double birthRate;
    double deathRate;
    int years;

    cout << "Enter the starting population (minimum 2): ";
    cin >> population;

    while (population < 2)
    {
        cout << "Population must be at least 2. Enter again: ";
        cin >> population;
    }

    cout << "Enter the annual birth rate (as a decimal): ";
    cin >> birthRate;

    cout << "Enter the annual death rate (as a decimal): ";
    cin >> deathRate;

    cout << "Enter the number of years (minimum 1): ";
    cin >> years;

    while (years < 1)
    {
        cout << "Years must be at least 1. Enter again: ";
        cin >> years;
    }

    cout << fixed << setprecision(2);
    cout << "\nStarting population: " << population << endl;

    for (int year = 1; year <= years; year++)
    {
        population = calculatePopulation(population, birthRate, deathRate);

        cout << "Population after year " << year << ": "
            << population << endl;
    }

    return 0;
}
