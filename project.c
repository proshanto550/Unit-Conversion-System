#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void welcomeMessage();
void endl();
void length();
void mass();     //these function will be calculating the values..
void area();
void time();
void data();
void temp();
void BMI();

// This are Date Calculation Funtion...
struct Date;
int isLeapYear(int year);
int daysInMonth(int month, int year);
void dateDifference(struct Date start, struct Date end, int *years, int *months, int *days);
void date(); // Main Date Calculate Function....

int main() {
int choice;

system("COLOR 3"); //backgroun color - black
                   //Front color - Blue (Aqua)
welcomeMessage();

while(1) {
     
    printf("\n\n\t\t\t\t\t\t   MAIN MENU \n");
    printf("\t\t\t\t\t===============================\n");
    printf("\t\t\t\t\t [1]  Length Conversion\n");
    printf("\t\t\t\t\t [2]  Mass Conversion\n");
    printf("\t\t\t\t\t [3]  Area Conversion\n");
    printf("\t\t\t\t\t [4]  Time Conversion\n");
    printf("\t\t\t\t\t [5]  Data Conversion\n");
    printf("\t\t\t\t\t [6]  Temperature Conversion\n");
    printf("\t\t\t\t\t [7]  BMI Calculater\n");
    printf("\t\t\t\t\t [8]  Date Calculation\n");
//     printf("\t\t\t\t\t [6]  Volume Conversion\n");
//     printf("\t\t\t\t\t [8]  Speed Conversion\n");
//     printf("\t\t\t\t\t [10] Numeral System Conversion\n");
    printf("\t\t\t\t\t [0]  Exit\n");
    printf("\t\t\t\t\t===============================\n");

    printf("\t\t\t\t\tEnter Your Choice : ");
    scanf("%d", &choice);

        switch(choice) {
            case 1: length();
            break; 
            case 2: mass();
            break; 
            case 3: area();
            break;
            case 4: time();
            break;
            case 5: data();
            break;
            case 6: temp();
            break;
            case 7: BMI();
            break;
            case 8: date();
            break;
        //     case 8:
        //     break;
        //     case 9:
        //     break;
        //     case 10:
        //     break;
            case 0: printf("\n\n\t\t\t\t\t\t     * Thank You ! *\n\t\t\t\t\t\t   * Have A Nice Day.*\n");
                     endl();
                     exit(0);
            break;
            default: printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
                     printf("Enter any key to continue...");
                     endl();
        }
}

return 0;
}

// ....Heading Design (front style)....
/// ...Welcome To Unit Conversion....
void welcomeMessage()
{
        printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############       UNIT CONVERSION SYSTEM PROJECT IN C         ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");

    printf("\n\t\t\t\t\t     ######   [GROUP NO - 12]  ######\n");
    printf("\n\t\t\t\t\t    ######    PRESENTED BY....   ######\n");
    printf("\t\t\t\t\t    ***********************************\n");
    printf("\t\t\t\t\t    ****    Proshanto Kumer Das    ****\n");
    printf("\t\t\t\t\t    ***    Niloy Sutradhar Pappu    ***\n");
    printf("\t\t\t\t\t    *****       Syed Hassan       *****\n");
    printf("\t\t\t\t\t    ***********************************\n");
    
    printf("\n\t\t\t----------------------------------------------------------------------------");

    printf("\n\n\n");
    printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t\t        =                   TO                      =");
    printf("\n\t\t\t\t        =                  UNIT                     =");
    printf("\n\t\t\t\t        =               CONVERSION                  =");
    printf("\n\t\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n");
}
// ...End line Design Function...
void endl() {
    printf("\t\t\t\t\t................................................\n");
}

// ..Length Conversion Function...
void length() {
    int option;
    double num;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t  ** Length Conversion **\n");
        printf("\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t[1] Cm --> Mile    |  [9]  Ft --> Mile\n");
        printf("\t\t\t\t\t[2] Cm --> Km      |  [10] Ft --> Km\n");
        printf("\t\t\t\t\t[3] Cm --> M       |  [11] Ft --> m\n");
        printf("\t\t\t\t\t[4] Cm --> Ft      |  [12] Ft --> Cm\n");
        printf("\t\t\t\t\t[5] M  --> Mile    |  [13] Km --> Mile\n");
        printf("\t\t\t\t\t[6] M  --> Km      |  [14] Km --> M\n");
        printf("\t\t\t\t\t[7] M  --> Ft      |  [15] Km --> Ft\n");
        printf("\t\t\t\t\t[8] M  --> Cm      |  [16] Km --> Cm\n");
        printf("\t\t\t\t\t[17] Mile  --> Km  |  [18] Mile --> Ft\n");
        printf("\t\t\t\t\t[19] Mile  --> M   |  [20] Mile --> Cm\n");
        printf("\t\t\t\t\t\t   [21] LtY -->  Km\n");
        
        printf("\t\t\t\t\t\t   [0] ...Main Menu...\n");
        printf("\t\t\t\t\t\t===========================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);

    // ...Some Length  Conversion...
        switch(option) {
            case 1: printf("\n\n\t\t\t\t\t\t [1] Cm -To- Mile\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Cm : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Cm = %.8lf Mile\n", num, num / 160934.4);
                    endl();
            break; 
            case 2: printf("\n\n\t\t\t\t\t\t [2] Cm -To- Km\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Cm : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Cm = %.5lf Km\n", num, num / 100000);
                    endl();
            break; 
            case 3: printf("\n\n\t\t\t\t\t\t [3] Cm -To- M\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Cm : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Cm = %.3lf M\n", num, num / 100);
                    endl();
            break;
            case 4: printf("\n\n\t\t\t\t\t\t [4] Cm -To- Ft\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Cm : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Cm = %.3lf Ft\n", num, num / 30.48);
                    endl();
            break;
            case 5: printf("\n\n\t\t\t\t\t\t [5] M -To- Mile\n");
                    endl();
                    printf("\t\t\t\t\t  Enter M : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf M = %.5lf Mile\n", num, num / 1609.344);
                    endl();
            break;
            case 6: printf("\n\n\t\t\t\t\t\t [6] M -To- Km\n");
                    endl();
                    printf("\t\t\t\t\t  Enter M : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf M = %.3lf Km\n", num, num / 1000);
                    endl();
            break;
            case 7: printf("\n\n\t\t\t\t\t\t [7] M -To- Ft\n");
                    endl();
                    printf("\t\t\t\t\t  Enter M : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf M = %.2lf Ft\n", num, num * 3.280839895013123359);
                    endl();
            break;
            case 8: printf("\n\n\t\t\t\t\t\t [8] M -To- Cm\n");
                    endl();
                    printf("\t\t\t\t\t  Enter M : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf M = %.2lf Cm\n", num, num * 100);
                    endl();
            break;
            case 9: printf("\n\n\t\t\t\t\t\t [9] Ft -To- Mile\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Ft : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Ft = %.5lf Mile\n", num, num / 5280);
                    endl();
            break;
            case 10: printf("\n\n\t\t\t\t\t\t [10] Ft -To- Km\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Ft : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Ft = %.4lf Km\n", num, num / 3280.83989501312336);
                    endl();
            break;
            case 11: printf("\n\n\t\t\t\t\t\t [11] Ft -To- M\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Ft : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Ft = %.3lf M\n", num, num / 3.280839895013123359);
                    endl();
            break;
            case 12: printf("\n\n\t\t\t\t\t\t [12] Ft -To- Cm\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Ft : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.4lf Ft = %.2lf Cm\n", num, num * 30.48);
                    endl();
            break;
            case 13: printf("\n\n\t\t\t\t\t\t [13] Km -To- Mile\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Km : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Km = %.3lf Mile\n", num, num / 1.609344);
                    endl();
            break;
            case 14: printf("\n\n\t\t\t\t\t\t [14] Km -To- M\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Km : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.4lf Km = %.2lf M\n", num, num * 1000);
                    endl();
            break;
            case 15: printf("\n\n\t\t\t\t\t\t [15] Km -To- Ft\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Km : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf Km = %.2lf Ft\n", num, num * 3280.839895013);
                    endl();
            break;
            case 16: printf("\n\n\t\t\t\t\t\t [16] Km -To- Cm\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Km : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf Km = %.2lf Cm\n", num, num * 100000);
                    endl();
            break;
            case 17: printf("\n\n\t\t\t\t\t\t [17] Mile -To- Km\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Mile : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf Mile = %.2lf Km\n", num, num * 1.609344);
                    endl();
            break;
            case 18: printf("\n\n\t\t\t\t\t\t [18] Mile -To- M\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Mile : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf Mile = %.2lf M\n", num, num * 1609.344);
                    endl();
            break;
            case 19: printf("\n\n\t\t\t\t\t\t [19] Mile -To- Ft\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Mile : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf Mile = %.2lf Ft\n", num, num * 5280);
                    endl();
            break;
            case 20: printf("\n\n\t\t\t\t\t\t [20] Mile -To- Cm\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Mile : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf Mile = %.2lf Cm\n", num, num * 160934.4);
                    endl();
            break;
            case 21: printf("\n\n\t\t\t\t\t\t [20] LtY -To- Km\n");
                    endl();
                    printf("\t\t\t\t\t  Enter LtY : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.3lf LtY = %.2lf Km\n", num, num * 9460730472580.8);
                    endl();
            break;

            case 0:
            printf("\n\n\t\t\t\t\tReturn to Main Menu...!\n");
            endl();
            return;
        default:
            printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
            endl();
        }
    }
}

// ...Mass Conversion Funtion...
void mass() {
    int option;
    double mass;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t   ** Mass Conversion **\n");
        printf("\t\t\t\t\t\t===============================\n");
        printf("\t\t\t\t\t\t 1. [Tonne]     >>  [Kilogram]\n");
        printf("\t\t\t\t\t\t 2. [Kilogram]  >>  [Tonne]\n");
        printf("\t\t\t\t\t\t 3. [Tonne]     >>  [Gram]\n");
        printf("\t\t\t\t\t\t 4. [Gram]      >>  [Tonne]\n");
        printf("\t\t\t\t\t\t 5. [Kilogram]  >>  [Gram]\n");
        printf("\t\t\t\t\t\t 6. [Gram]      >>  [Kilogram]\n");
        printf("\t\t\t\t\t\t 7. [Pound]     >>  [Kilogram]\n");
        printf("\t\t\t\t\t\t 8. [Pound]     >>  [Gram]\n");
        printf("\t\t\t\t\t\t 9. [Kilogram]  >>  [Pound]\n");
        printf("\t\t\t\t\t\t 10.[Gram]      >>  [Pound]\n");
        printf("\t\t\t\t\t\t 0. ...Main Menu...\n");
        printf("\t\t\t\t\t\t===============================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);
    // ...Some Mass  Conversion...
        switch(option) {
            case 1: printf("\n\n");
                    printf("\t\t\t\t\t\t [1] Tonne -To- Kilogram\n");
                    endl();
                    printf("\t\t\t\t\t Enter Tonne : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.3lf Tonne = %.2lf Kilogram\n", mass, mass * 1000);
                    endl();
            break; 
            case 2: printf("\n\n");
                    printf("\t\t\t\t\t\t [2] Kilogram -To- Tonne\n");
                    endl();
                    printf("\t\t\t\t\t Enter Kilogram : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.2lf Kilogram = %.2lf Tonne\n", mass, mass / 1000);
                    endl();
            break; 
            case 3: printf("\n\n\t\t\t\t\t\t [3] Tonne -To- Gram\n");
                    endl();
                    printf("\t\t\t\t\t Enter Tonne : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.4lf Tonne = %.2lf Gram\n", mass, mass * 1000000);
                    endl();
            break;
            case 4: printf("\n\n\t\t\t\t\t [4] Gram -To- Tonne\n");
                    endl();
                    printf("\t\t\t\t\t Enter Gram : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.2lf Gram = %.4lf Tonne\n", mass, mass / 1000000);
                    endl();
            break;
            case 5: printf("\n\n\t\t\t\t\t [5] Kilogram -To- Gram\n");
                    endl();
                    printf("\t\t\t\t\t Enter Kilogram : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.3lf Kilogram = %.2lf Gram\n", mass, mass * 1000);
                    endl();
            break;
            case 6: printf("\n\n\t\t\t\t\t [6] Gram -To- Kilogram\n");
                    endl();
                    printf("\t\t\t\t\t Enter Gram : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.2lf Gram = %.4lf Kilogram\n", mass, mass / 1000);
                    endl();
            break;
            case 7: printf("\n\n\t\t\t\t\t [7] Pound -To- Kilogram\n");
                    endl();
                    printf("\t\t\t\t\t Enter Pound : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.2lf Pound = %.2lf Kilogram\n", mass, mass * 0.45359237);
                    endl();
            break;
            case 8: printf("\n\n\t\t\t\t\t [8] Pound -To- Gram\n");
                    endl();
                    printf("\t\t\t\t\t Enter Pound : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.4lf Pound = %.2lf Gram\n", mass, mass * 453.59237);
                    endl();
            break;
            case 9: printf("\n\n\t\t\t\t\t [9] Kilogram -To- Pound\n");
                    endl();
                    printf("\t\t\t\t\t Enter Kilogram : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.2lf Kilogram = %.2lf Pound\n", mass, mass / 0.45359237);
                    endl();
            break;
            case 10: printf("\n\n\t\t\t\t\t [10] Gram -To- Pound\n");
                    endl();
                    printf("\t\t\t\t\t Enter Gram : ");
                    scanf("%lf", &mass);
                    printf("\n\t\t\t\t\t%.2lf Gram = %.4lf Pound\n", mass, mass / 453.59237);
                    endl();
            break;
            case 0:
            printf("\n\n\t\t\t\t\tReturn to Main Menu...!\n");
            endl();
            return;
            break;
        default:
            printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
            endl();
        }
    }
}

//...Area Conversion Function...
void area() {
    int option;
    double area;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================================\n");
        printf("\t\t\t\t\t\t\t  ** Area Conversion **\n");
        printf("\t\t\t\t\t\t===========================================\n");
        printf("\t\t\t\t\t\t [1] [Square_Kilometer]  To  [Hectare]\n");
        printf("\t\t\t\t\t\t [2] [Hactare]  To  [Square_Kilometer]\n");
        printf("\t\t\t\t\t\t [3] [Square_Kilometer]  To  [Square_Meter]\n");
        printf("\t\t\t\t\t\t [4] [Square_Meter]  To  [Square_Kilometer]\n");
        printf("\t\t\t\t\t\t [5] [Hectare]  To  [Square_Meter]\n");
        printf("\t\t\t\t\t\t [6] [Square_Meter]  To  [Hectare]\n");
        printf("\t\t\t\t\t\t [0] ...Main Menu...\n");
        printf("\t\t\t\t\t\t===========================================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);
    // ...Some Area  Conversion...
        switch(option) {
            case 1: printf("\n\n\t\t\t\t\t [1] Square_Kilometer -To- Hectare\n");
                    endl();
                    printf("\t\t\t\t\t Enter Square_Kilometer : ");
                    scanf("%lf", &area);
                    printf("\n\t\t\t\t\t%.2lf Square_Kilometer = %.2lf Hectares\n", area, area * 100);
                    endl();
            break; 
            case 2: printf("\n\n\t\t\t\t\t [2] Hectare -To- Square_Kilometer\n");
                    endl();
                    printf("\t\t\t\t\t Enter Hectare : ");
                    scanf("%lf", &area);
                    printf("\n\t\t\t\t\t%.2lf Hectare = %.3lf Square_Kilometer\n", area, area / 100);
                    endl();
            break; 
            case 3: printf("\n\n\t\t\t\t\t [3] Square_Kilometer -To- Square_Meter\n");
                    endl();
                    printf("\t\t\t\t\t Enter Square_Kilometer : ");
                    scanf("%lf", &area);
                    printf("\n\t\t\t\t\t%.4lf Square_Kilometer = %.2lf Square_Meter\n", area, area * 1000000);
                    endl();
            break;
            case 4: printf("\n\n\t\t\t\t\t [4] Square_Meter -To- Square_Kilometer\n");
                    endl();
                    printf("\t\t\t\t\t Enter Square_Meter : ");
                    scanf("%lf", &area);
                    printf("\n\t\t\t\t\t%.2lf Square_Meter = %.6lf Square_Kilometer\n", area, area / 1000000);
                    endl();
            break;
            case 5: printf("\n\n\t\t\t\t\t [5] Hectare -To- Square_Meter\n");
                    endl();
                    printf("\t\t\t\t\t Enter Hectare : ");
                    scanf("%lf", &area);
                    printf("\n\t\t\t\t\t%.4lf Hectare = %.2lf Square_Meter\n", area, area * 10000);
                    endl();
            break;
            case 6: printf("\n\n\t\t\t\t\t [6] Square_Meter -To- Hectare\n");
                    endl();
                    printf("\t\t\t\t\t Enter Square_Meter : ");
                    scanf("%lf", &area);
                    printf("\n\t\t\t\t\t%.2lf Square_Meter = %.5lf Hectares\n", area, area / 10000);
                    endl();
            break;
            case 0:
            printf("\n\n\t\t\t\t\tReturn to Main Menu...!\n");
            endl();
            return;
            break;
        default:
            printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
            endl();
        }
    }
}

// ...Time Conversion Function...
void time() {
    int option;
    double time;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t  ** Time Conversion **\n");
        printf("\t\t\t\t\t\t==========================================\n");
        printf("\t\t\t\t\t\t [1] Hour _._ Minute\n");
        printf("\t\t\t\t\t\t [2] Minute _._ Hour\n");
        printf("\t\t\t\t\t\t [3] Hour _._ Second\n");
        printf("\t\t\t\t\t\t [4] Second _._ Hour\n");
        printf("\t\t\t\t\t\t [5] Minute _._ Second\n");
        printf("\t\t\t\t\t\t [6] Second _._ Minute\n");
        printf("\t\t\t\t\t\t [7] *Second* _._ [Hour : Minute : Second]\n");
        printf("\t\t\t\t\t\t [0] ...Main Menu...\n");
        printf("\t\t\t\t\t\t==========================================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);
    // ...Some Time  Conversion...
        switch(option) {
            case 1: printf("\n\n\t\t\t\t\t [1] Hour -To- Minute\n");
                    endl();
                    printf("\t\t\t\t\t Enter Hour : ");
                    scanf("%lf", &time);
                    printf("\n\t\t\t\t\t%.2lf Hour = %.2lf Minute\n", time, time * 60);
                    endl();
            break; 
            case 2: printf("\n\n\t\t\t\t\t [2] Minute -To- Hour\n");
                    endl();
                    printf("\t\t\t\t\t Enter Minute : ");
                    scanf("%lf", &time);
                    printf("\n\t\t\t\t\t%.2lf Minute = %.3lf Hour\n", time, time / 60);
                    endl();
            break; 
            case 3: printf("\n\n\t\t\t\t\t [3] Hour -To- Second\n");
                    endl();
                    printf("\t\t\t\t\t Enter Hour : ");
                    scanf("%lf", &time);
                    printf("\n\t\t\t\t\t%.3lf Hour = %.2lf Second\n", time, time * 3600);
                    endl();
            break;
            case 4: printf("\n\n\t\t\t\t\t [4] Second -To- Hour\n");
                    endl();
                    printf("\t\t\t\t\t Enter Second : ");
                    scanf("%lf", &time);
                    printf("\n\t\t\t\t\t%.2lf Second = %.5lf Hour\n", time, time / 3600);
                    endl();
            break;
            case 5: printf("\n\n\t\t\t\t\t [5] Minute -To- Second\n");
                    endl();
                    printf("\t\t\t\t\t Enter Minute : ");
                    scanf("%lf", &time);
                    printf("\n\t\t\t\t\t%.3lf Minute = %.2lf Second\n", time, time * 60);
                    endl();
            break;
            case 6: printf("\n\n\t\t\t\t\t [6] Second -To- Minute\n");
                    endl();
                    printf("\t\t\t\t\t Enter Second : ");
                    scanf("%lf", &time);
                    printf("\n\t\t\t\t\t%.2lf Second = %.3lf Minute\n", time, time / 60);
                    endl();
            break;
            case 7: printf("\n\n\t\t\t\t\t [7] *Second* -To- [Hour:Minute:Second]\n");
                    endl();
                    printf("\t\t\t\t\t Enter *Second* : ");
                    int sec, hour, minute, second;
                    scanf("%d", &sec);
                    hour = sec / 3600;
                    minute = (sec % 3600) / 60;
                    second = sec % 60;
                    printf("\n\t\t\t\t\tHour:Minute:Second = %d:%d:%d\n", hour, minute, second);
                    endl();
            break;
            case 0:
            printf("\n\n\t\t\t\t\tReturn to Main Menu...!\n");
            endl();
            return;
            break;
        default:
            printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
            endl();
        }
    }
}

// ...Data Conversion Function...
void data() {
    int option;
    double data;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t  ** Data Conversion **\n");
        printf("\t\t\t\t\t\t==========================================\n");
        printf("\t\t\t\t\t\t [1] Byte -> KiloByte\n");
        printf("\t\t\t\t\t\t [2] KiloByte -> Byte\n");
        printf("\t\t\t\t\t\t [3] MegaByte -> KiloByte\n");
        printf("\t\t\t\t\t\t [4] KiloByte -> MegByte\n");
        printf("\t\t\t\t\t\t [5] MegaByte -> GigaByte\n");
        printf("\t\t\t\t\t\t [6] GigaByte -> MegaByte\n");
        printf("\t\t\t\t\t\t [7] GigaByte -> TeraByte\n");
        printf("\t\t\t\t\t\t [8] TeraByte -> GigaByte\n");
        printf("\t\t\t\t\t\t [0] ...Main Menu...\n");
        printf("\t\t\t\t\t\t==========================================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);
    // ...Some data  Conversion...
        switch(option) {
            case 1: printf("\n\n\t\t\t\t\t [1] Byte -> KiloByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter Byte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.2lf Byte = %.3lf KiloByte\n", data, data / 1024);
                    endl();
            break; 
            case 2: printf("\n\n\t\t\t\t\t [2] KiloByte -> Byte\n");
                    endl();
                    printf("\t\t\t\t\t Enter KiloByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.3lf KiloByte = %.3lf Byte\n", data, data * 1024);
                    endl();
            break; 
            case 3: printf("\n\n\t\t\t\t\t [3] MegaByte -> KiloByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter MegaByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.3lf MegaByte = %.2lf KiloByte\n", data, data * 1024);
                    endl();
            break;
            case 4: printf("\n\n\t\t\t\t\t [4] KiloByte -> MegByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter KiloByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.2lf KiloByte = %.3lf MegByte\n", data, data / 1024);
                    endl();
            break;
            case 5: printf("\n\n\t\t\t\t\t [5] MegaByte -> GigaByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter MegaByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.2lf MegaByte = %.3lf GigaByte\n", data, data / 1024);
                    endl();
            break;
            case 6: printf("\n\n\t\t\t\t\t [6] GigaByte -> MegaByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter GigaByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.3lf GigaByte = %.2lf MegaByte\n", data, data * 1024);
                    endl();
            break;
            case 7: printf("\n\n\t\t\t\t\t [7] GigaByte -> TeraByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter GigaByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.2lf GigaByte = %.3lf TeraByte\n", data, data / 1024);
                    endl();
            break;
            case 8: printf("\n\n\t\t\t\t\t [8] TeraByte -> GigaByte\n");
                    endl();
                    printf("\t\t\t\t\t Enter TeraByte : ");
                    scanf("%lf", &data);
                    printf("\n\t\t\t\t\t%.3lf TeraByte = %.2lf GigaByte\n", data, data * 1024);
                    endl();
            break;
            case 0:
            printf("\n\n\t\t\t\t\tReturn to Main Menu...!\n");
            endl();
            return;
            break;
        default:
            printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
            endl();
        }
    }
}

void BMI() {

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t   ** BMI Calculater **\n");
        printf("\t\t\t\t\t\t===========================\n");
        double h, w, BMI;
        printf("\t\t\t\t\t\t  Enter Height (cm): ");
        scanf("%lf", &h);
        printf("\t\t\t\t\t\t  Enter Weight (kg): ");
        scanf("%lf", &w);

        BMI = w / ((h/100) * (h/100));
        printf("\n\t\t\t\t\t\t BMI = %.1lf\n", BMI);

        if (BMI < 18.5) {
                printf("\t\t\t\t\t\tYour Body is [Underweight]\n");
        } else if (BMI >= 18.5 && BMI <= 24.9) {
                printf("\t\t\t\t\t\tYour Body is [Normal Weight]\n");
        } else if (BMI > 24.9 && BMI <= 29.9) {
                printf("\t\t\t\t\t\tYour Body is [Overweight]\n");
        } else if (BMI > 29.9 && BMI <= 34.9) {
                printf("\t\t\t\t\t\tYour Body is [Obese]\n");
        } else {
                printf("\t\t\t\t\t\tYour Body is [Extreme Obese]\n");
        }
        endl();
        printf("\t\t\t\t\t       BMI < 18.5    =  Underweight\n");
        printf("\t\t\t\t\t   BMI (18.5 - 24.9) =  Normal Weight\n");
        printf("\t\t\t\t\t   BMI (25 - 29.9)   =  Overweight\n");
        printf("\t\t\t\t\t   BMI (30 - 34.9)   =  Obese\n");
        printf("\t\t\t\t\t       BMI > 35      =  Extreme Obese\n");
        endl();
        return;
    }
}

//Temperature Conversion Function...
void temp() {
    int option;
    double t;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t  ** Temperature Conversion **\n");
        printf("\t\t\t\t\t\t==========================================\n");
        printf("\t\t\t\t\t\t [1] Cel -> Far\n");
        printf("\t\t\t\t\t\t [2] Cel -> Kel\n");
        printf("\t\t\t\t\t\t [3] Far -> Cel\n");
        printf("\t\t\t\t\t\t [4] Far -> Kel\n");
        printf("\t\t\t\t\t\t [5] Kel -> Cel\n");
        printf("\t\t\t\t\t\t [6] Kel -> Far\n");
        printf("\t\t\t\t\t\t [0] ...Main Menu...\n");
        printf("\t\t\t\t\t\t==========================================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);
    // ...Some Temperature  Conversion...
        switch(option) {
            case 1: printf("\n\n\t\t\t\t\t [1] Celsius  To Fahrenheit\n");
                    endl();
                    printf("\t\t\t\t\t Enter temperature in Celsius : ");
                    scanf("%lf", &t);
                    printf("\n\t\t\t\t\t%.2lf Cel is %.2lf Far\n", t, (t * 9.0 / 5.0) + 32.0);
                    endl();
            break; 
            case 2: printf("\n\n\t\t\t\t\t [2] Celsius  To Kelvin\n");
                    endl();
                    printf("\t\t\t\t\t Enter temperature in Celsius : ");
                    scanf("%lf", &t);
                    printf("\n\t\t\t\t\t%.2lf Cel is %.3lf Kel\n", t, t + 273.15);
                    endl();
            break;
            case 3: printf("\n\n\t\t\t\t\t [3] Fahrenheit  To Celsius\n");
                    endl();
                    printf("\t\t\t\t\t Enter temperature in Fahrenheit : ");
                    scanf("%lf", &t);
                    printf("\n\t\t\t\t\t%.2lf Far is %.2lf Cel\n", t, (t - 32.0) * 5.0 / 9.0);
                    endl();
            break;
            case 4: printf("\n\n\t\t\t\t\t [4] Fahrenheit  To Kelvin\n");
                    endl();
                    printf("\t\t\t\t\t Enter temperature in Fahrenheit : ");
                    scanf("%lf", &t);
                    printf("\n\t\t\t\t\t%.2lf Far is %.3lf Kel\n", t, ((t - 32) * 5.0 / 9.0) + 273.15);
                    endl();
            break;
            case 5: printf("\n\n\t\t\t\t\t [5] Kelvin  To Celsius\n");
                    endl();
                    printf("\t\t\t\t\t Enter temperature in Kelvin : ");
                    scanf("%lf", &t);
                    printf("\n\t\t\t\t\t%.3lf Kel is %.2lf Cel\n", t, t - 273.15);
                    endl();
            break;
            case 6: printf("\n\n\t\t\t\t\t [6] Kelvin  To  Fahrenheit\n");
                    endl();
                    printf("\t\t\t\t\t Enter temperature in Kelvin : ");
                    scanf("%lf", &t);
                    printf("\n\t\t\t\t\t%.3lf Kel is %.2lf Far\n", t, ((t - 273.15) * 9.0 / 5.0) + 32);
                    endl();
            break;
            case 0:
            printf("\n\n\t\t\t\t\tReturn to Main Menu...!\n");
            endl();
            return;
            break;
        default:
            printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
            endl();
        }
    }
}

// Date Calculation ....
struct Date {
    int day;
    int month;
    int year;
};

// check if a year is a leap year
int isLeapYear(int year) {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        return 1;
    return 0;
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month - 1];
}

// Function to calculate difference between two dates
void dateDifference(struct Date start, struct Date end, int *years, int *months, int *days) {
    // Calculate days
    if (end.day < start.day) {
        end.day += daysInMonth(end.month - 1, end.year);
        end.month--;
    }
    *days = end.day - start.day;

    // Calculate months
    if (end.month < start.month) {
        end.month += 12;
        end.year--;
    }
    *months = end.month - start.month;

    // Calculate years
    *years = end.year - start.year;
}

void date() {
    struct Date start, end;
    int years, months, days;

    printf("\n\n\n\t\t\t\t\t\t===========================\n");
    printf("\t\t\t\t\t      ** Date Calculater With Time **\n");
    printf("\t\t\t\t\t\t===========================\n");

    //input the start date
    printf("\n\t\t\t\t\tEnter the start date (day month year): ");
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    //input the end date
    printf("\t\t\t\t\tEnter the end date (day month year): ");
    scanf("%d %d %d", &end.day, &end.month, &end.year);

    // Calculate the difference
    dateDifference(start, end, &years, &months, &days);

    // Display the result
    printf("\n\t\t\t\t\tFrom: %d/%d/%d\n", start.day, start.month, start.year);
    printf("\t\t\t\t\tTo: %d/%d/%d\n", end.day, end.month, end.year);
    printf("\n\t\t\t\t\tDifference: %d Years, %d Months, %d Days\n", years, months, days);
    endl();
    return; //return to main menu...
}