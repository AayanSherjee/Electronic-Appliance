#include<iostream>
using namespace std;

void turnonlight();
void turnofflight();
void adjustlight();

void turnonfan();
void turnofffan();
void adjustfan();

void turnonthermostat();
void turnoffthermostat();
void adjustthermostat();

int main() {
    int appliance;
    cout << "1. Light " << endl;
    cout << "2. Fan " << endl;
    cout << "3. Thermostat " << endl;
    cout << "Select the appliance you want to control (1,2,3): ";
    cin >> appliance;
    switch(appliance) {
        case 1:
            int light;
            cout << "1. Turn the light on" << endl;
            cout << "2. Turn the light off" << endl;
            cout << "3. Adjust the brightness of the light" << endl;
            cout << "Enter the action you want to perform (1,2,3): ";
            cin >> light;
            if (light == 1) {
                turnonlight();
            } else if (light == 2) {
                turnofflight();
            } else if (light == 3) {
                int brightness;
                cout << "Enter the level of brightness (1-5): ";
                cin >> brightness;
                if (brightness <= 5 && brightness > 0) {
                    cout << "\nThe brightness has been adjusted to level " << brightness << endl;
                } else {
                    cout << "\nInvalid choice" << endl;
                }
            } else {
                cout << "\nInvalid choice" << endl;
            }
            break;

        case 2:
            int fan;
            cout << "1. Turn the fan on" << endl;
            cout << "2. Turn the fan off" << endl;
            cout << "3. Adjust the speed of the fan" << endl;
            cout << "Enter the action you want to perform (1,2,3): ";
            cin >> fan;
            if (fan == 1) {
                turnonfan();
            } else if (fan == 2) {
                turnofffan();
            } else if (fan == 3) {
                int speed;
                cout << "Enter the speed of fan you want (1-5): ";
                cin >> speed;
                if (speed <= 5 && speed > 0) {
                    cout << "\nThe speed has been adjusted to level " << speed << endl;
                } else {
                    cout << "\nInvalid choice" << endl;
                }
            } else {
                cout << "\nInvalid choice" << endl;
            }
            break;

        case 3:
            int thermostat;
            cout << "1. Turn the thermostat on" << endl;
            cout << "2. Turn the thermostat off" << endl;
            cout << "3. Adjust the temperature of the thermostat" << endl;
            cout << "Enter the action you want to perform (1,2,3): ";
            cin >> thermostat;
            if (thermostat == 1) {
                turnonthermostat();
            } else if (thermostat == 2) {
                turnoffthermostat();
            } else if (thermostat == 3) {
                int temperature;
                cout << "Enter the level of temperature (1-5): ";
                cin >> temperature;
                if (temperature <= 5 && temperature > 0) {
                    cout << "\nThe temperature has been adjusted to level " << temperature << endl;
                } else {
                    cout << "\nInvalid choice" << endl;
                }
            } else {
                cout << "\nInvalid choice" << endl;
            }
            break;

        default:
            cout << "\nInvalid choice" << endl;
    }
    
    cin.get();  
    return 0;
}

void turnonlight() {
    cout << "\nThe light has been turned on." << endl;
}

void turnofflight() {
    cout << "\nThe light has been turned off." << endl;
}

void turnonfan() {
    cout << "\nThe fan has been turned on." << endl;
}

void turnofffan() {
    cout << "\nThe fan has been turned off." << endl;
}

void turnonthermostat() {
    cout << "\nThe thermostat has been turned on." << endl;
}

void turnoffthermostat() {
    cout << "\nThe thermostat has been turned off." << endl;
}
