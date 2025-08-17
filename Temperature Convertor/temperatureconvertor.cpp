#include<iostream>
using namespace std;

// Conversion functions now take 'temperature' as parameter
double celtofah(double temp) {
    return (temp * 9.0 / 5.0) + 32;
}

double fahtocel(double temp) {
    return (temp - 32) * 5.0 / 9.0;
}

double keltocel(double temp) {
    return temp - 273.15;
}

double celtokel(double temp) {
    return temp + 273.15;
}

double fahtokel(double temp) {
    return ((temp - 32) * 5.0 / 9.0) + 273.15;
}

double keltofah(double temp) {
    return ((temp - 273.15) * 9.0 / 5.0) + 32;
}

int main() {
    double temperature;
    int choice;

    cout << "Enter Temperature: ";
    cin >> temperature;

    do {
        cout << "\nTemperature Converter\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Kelvin to Celsius\n";
        cout << "4. Celsius to Kelvin\n";
        cout << "5. Fahrenheit to Kelvin\n";
        cout << "6. Kelvin to Fahrenheit\n";
        cout << "7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                cout << "Celsius to Fahrenheit: " << celtofah(temperature) << endl;
                break;
            case 2: 
                cout << "Fahrenheit to Celsius: " << fahtocel(temperature) << endl;
                break;
            case 3: 
                cout << "Kelvin to Celsius: " << keltocel(temperature) << endl;
                break;
            case 4: 
                cout << "Celsius to Kelvin: " << celtokel(temperature) << endl;
                break;
            case 5: 
                cout << "Fahrenheit to Kelvin: " << fahtokel(temperature) << endl;
                break;
            case 6: 
                cout << "Kelvin to Fahrenheit: " << keltofah(temperature) << endl;
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice!" << endl;
        }
    } while(choice != 7);

    return 0;
}
