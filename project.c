#include <stdio.h>
#include <stdlib.h>

void headMessage();
void welcomeMessage();
void endl();
void length();
void mass();
void area();
void time();
void data();
void BMI();

int main() {

headMessage();
welcomeMessage();

int choice;

while(1) {
    printf("\n\n\t\t\t\t\t\t   MAIN MENU \n");
    printf("\t\t\t\t\t===============================\n");
    printf("\t\t\t\t\t [1]  Length Conversion\n");
    printf("\t\t\t\t\t [2]  Mass Conversion\n");
    printf("\t\t\t\t\t [3]  Area Conversion\n");
    printf("\t\t\t\t\t [4]  Time Conversion\n");
    printf("\t\t\t\t\t [5]  Data Conversion\n");
//     printf("\t\t\t\t\t [6]  Volume Conversion\n");
//     printf("\t\t\t\t\t [7]  Date Conversion\n");
//     printf("\t\t\t\t\t [8]  Speed Conversion\n");
//     printf("\t\t\t\t\t [9]  Temperature Conversion\n");
//     printf("\t\t\t\t\t [10] Numeral System Conversion\n");
    printf("\t\t\t\t\t [6] BMI Calculater\n");
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
        //     case 6:
        //     break;
        //     case 7:
        //     break;
        //     case 8:
        //     break;
        //     case 9:
        //     break;
        //     case 10:
        //     break;
            case 6: BMI();
                    endl();
            break;
            case 0: printf("\n\n\t\t\t\t\t\t     * Thank You ! *\n\t\t\t\t\t\t   * Have A Nice Day.*\n");
                     endl();
                     exit(0);
            break;
            default: printf("\n\n\t\t\t\t\tINVALID INPUT!!! Try again...\n");
                     endl();
        }

}

return 0;
}

// ....Heading Design (front style)....
void headMessage()
{
   
    printf("\t\t\t###########################################################################");
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
}

/// ...Welcome To Unit Conversion....
void welcomeMessage()
{
    
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
    printf("\t\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
}

// ..Length Conversion Function...
void length() {
    int option;
    double num;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t  ** Length Conversion **\n");
        printf("\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t[1] [Kilometer >---> Meter]\n");
        printf("\t\t\t\t\t\t[2] [Meter >---> Kilometer]\n");
        printf("\t\t\t\t\t\t[3] [Centimeter >---> Meter]\n");
        printf("\t\t\t\t\t\t[4] [Meter >---> Centimeter]\n");
        printf("\t\t\t\t\t\t[5] [Kilometer >---> Centimeter]\n");
        printf("\t\t\t\t\t\t[6] [Centimeter >---> Kilometer]\n");
        printf("\t\t\t\t\t\t[0] ...Main Menu...\n");
        printf("\t\t\t\t\t\t===========================\n");

        printf("\t\t\t\t\tEnter A Option: ");
        scanf("%d", &option);
    // ...Some Length  Conversion...
        switch(option) {
            case 1: printf("\n\n");
                    printf("\t\t\t\t\t\t [1] Kilometer -To- Meter\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Kilometer : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t  %.2lf Kilometer = %.2lf Meter\n", num, num * 1000);
                    endl();
            break; 
            case 2: printf("\n\n");
                    printf("\t\t\t\t\t\t [2] Meter -To- Kilometer\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Meter : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t%.2lf Meter = %.3lf Kilometer\n", num, num / 1000);
                    endl();
            break; 
            case 3: printf("\n\n");
                    printf("\t\t\t\t\t\t [3] Centimeter -To- Meter\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Centimeter : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t%.2lf Centimeter = %.4lf Meter\n", num, num / 100);
                    endl();
            break;
            case 4: printf("\n\n");
                    printf("\t\t\t\t\t\t [4] Meter -To- Centimeter\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Meter : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t%.2lf Meter = %.2lf Centimeter\n", num, num * 100);
                    endl();
            break;
            case 5: printf("\n\n");
                    printf("\t\t\t\t\t\t [5] Kilometer -To- Centimeter\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Kilometer : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t%.4lf Kilometer = %.2lf Centimeter\n", num, num * 100000);
                    endl();
            break;
            case 6: printf("\n\n");
                    printf("\t\t\t\t\t\t [6] Centimeter -To- Kilometer\n");
                    endl();
                    printf("\t\t\t\t\t  Enter Centimeter : ");
                    scanf("%lf", &num);
                    printf("\n\t\t\t\t\t%.2lf Centimeter = %.4lf Kilometer\n", num, num / 100000);
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

// ...Mass Conversion Funtion...
void mass() {
    int option;
    double mass;

    while(1) {
        printf("\n\n\n\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t   ** Mass Conversion **\n");
        printf("\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t 1. [Tonne]  >>  [Kilogram]\n");
        printf("\t\t\t\t\t\t 2. [Kilogram]  >>  [Tonne]\n");
        printf("\t\t\t\t\t\t 3. [Tonne]  >>  [Gram]\n");
        printf("\t\t\t\t\t\t 4. [Gram]  >>  [Tonne]\n");
        printf("\t\t\t\t\t\t 5. [Kilogram]  >>  [Gram]\n");
        printf("\t\t\t\t\t\t 6. [Gram]  >>  [Kilogram]\n");
        printf("\t\t\t\t\t\t 0. ...Main Menu...\n");
        printf("\t\t\t\t\t\t===========================\n");

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