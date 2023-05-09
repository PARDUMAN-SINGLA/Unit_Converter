#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char name[40];
    int service;
    int repeat = 1;

    printf("Your name please!: ");
    scanf("%s", &name);

    printf("\n");

    printf("Hemloz '%s', hope you are doing good!\n", name);

    while (repeat == 1)
    {
        printf("Which service would you like to use: \n");
        printf("Unit Converter(1) \t\t BMI Calculator(2) \n");
        printf(" \n");
        printf("Enter the digit corresponding to your desired servicce: ");
        scanf("%d", &service);

        printf(" \n");
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
        printf("\n");

        int category;
        int tempChoice;               // choice for temperature;
        int currencyChoice;           // choice for currency;
        int massChoice;               // choice for mass;
        int lengthChoice;             // choice for lenght;
        int timeChoice;               // choice for time;
        float userinputF;             // User inputted Fahreinheit;
        float userinputC;             // User inputted Celsius;
        float fahrenheitToCelcius;    // variable that stores the converted F->C;
        float celciusToFahrenheit;    // variable that stores the converted C->F;
        float celciusToKelvin;        // variable that stores the converted C->K;
        float fahrenheitToKelvin;     // variable that stores the converted F->K;
        float userinputK;             // User inputted Kelvin;
        float kelvinToCelsius;        // variable that stores the converted K->C;
        float kelvinToFahrenheit;     // variable that stores the converted K->F;
        float userInputINR;           // user input INR;
        float userInputUSD;           // user input USD;
        float userInputAUD;           // user input AUD;
        float userInputCAD;           // user input CAD;
        float userInputGBP;           // user input GBP;
        float userInputJPY;           // user input JPY;
        float userInputEUR;           // user input EUR;
        float userInputCNY;           // user input CNY;
        float userInputRUB;           // user input RUB;
        float userInputOMR;           // user input OMR;
        float INRtoUSD;               // stores the converted INR->USD
        float USDtoINR;               // stores the converted USD->INR
        float INRtoAUD;               // stores the converted INR->AUD
        float AUDtoINR;               // stores the converted AUD->INR
        float INRtoCAD;               // stores the converted INR->CAD
        float CADtoINR;               // stores the converted CAD->INR
        float INRtoGBP;               // stores the converted INR->GBP
        float GBPtoINR;               // stores the converted GBP->INR
        float INRtoJPY;               // stores the converted INR->JPY
        float JPYtoINR;               // stores the converted JPY->INR
        float INRtoEUR;               // stores the converted INR->EUR
        float EURtoINR;               // stores the converted EUR->INR
        float INRtoCNY;               // stores the converted INR->CNY
        float CNYtoINR;               // stores the converted CNY->INR
        float INRtoRUB;               // stores the converted INR->RUB
        float RUBtoINR;               // stores the converted RUB->INR
        float INRtoOMR;               // stores the converted INR->OMR
        float OMRtoINR;               // stores the converted OMR->INR
        float userInputOunce;         // User inputted for Ounce;
        float userInputGram;          // User inputted for Gram;
        float userInputMiligram;      // User inputted for Miligram;
        float userInputKilogram;      // User inputted for Kilogram;
        float userInputStone;         // User inputted for Stone;
        float userInputPound;         // User inputted for Pound;
        float ounceToGrams;           // stores the converted Ounce->Grams;
        float gramToOunces;           // stores the conerted Gram->Ounces;
        float miligramToGrams;        // stores the converted Miligram->Grams;
        float gramToMiligrams;        // stores the converted Miligram->Grams;
        float poundToGrams;           // stores the conerted Pound->Grams;
        float gramsToPounds;          // stores the conerted Gram->Pounds;
        float stonesToGrams;          // stores the converted Stone->Grams;
        float gramToStones;           // stores the converted Gram->Stones;
        float kilogramToGrams;        // stores the converted Kilogram->Grams;
        float gramToKilograms;        // stores the converted gram->Kilograms;
        float poundToKilograms;       // stores the converted pound->Kilograms;
        float kilogramToPounds;       // stores the converted kilograms->Pounds;
        float stoneToKilograms;       // stores the converted stone->Kilograms;
        float kilogramToStone;        // stores the converted kilograms->Stone;
        float poundToOunces;          // stores the converted pounds->Ounces;
        float ounceToPounds;          // stores the converted ounces->Pounds;
        float poundToStone;           // stores the converted pounds->Stone;
        float stoneToPounds;          // stores the converted stone->Pounds;
        float stoneToOunces;          // stores the converted stone->Ounces;
        float ounceToStone;           // stores the converted ounces->Stone;
        float userInputMeter;         // user inputed Meter;
        float userInputKilometer;     // user inputed Kilometer;
        float userInputMile;          // user inputed Mile;
        float userInputFoot;          // user inputed Foot;
        float userInputInch;          // user inputed Inch;
        float userInputYard;          // user inputed Yard;
        float userInputCentimeter;    // user inputed Centimeter;
        float userInputMilimeter;     // user inputed Millimeter;
        float mileToKilometers;       // stores the converted mile->Kilometers;
        float kilometerToMiles;       // stores the converted kilometer->Miles;
        float kilometerToMeters;      // stores the converted kilometer->Meters;
        float meterToKilometers;      // stores the converted meter->Kilometer;
        float footToMeters;           // stores the converted foot->Meters;
        float meterToFoots;           // stores the converted meter->Foots;
        float inchToCentimeters;      // stores the converted inch->Centimeters;
        float centimeterToInches;     // stores the converted centimeter->Inches;
        float meterToCentimeters;     // stores the converted meter->Centimeters;
        float centimeterToMeters;     // stores the converted centimeter->Meters;
        float inchToFoots;            // stores the converted inch->Foots;
        float footToInches;           // stores the converted foot->Inches;
        float yardToMeters;           // stores the converted yard->Meters;
        float meterToYards;           // stores the converted meter->Yards;
        float yardToFoots;            // stores the converted yard->Foots;
        float footToYards;            // stores the converted foot->Yards;
        float inchToYards;            // stores the converted inch->Yards;
        float yardToInches;           // stores the converted yard->Inches;
        float milimeterToCentimeters; // stores the converted milimeter->Centimeters;
        float centimeterToMilimeters; // stores the converted centimeter->Milimeters;
        float userInputHour;          // user inputed Hours;
        float userInputMinute;        // user inputed Minutes;
        float userInputSecond;        // user inputed Seconds;
        float userInputDay;           // user inputed Days;
        float userInputWeek;          // user inputed Weeks;
        float userInputMonth;         // user inputed Months;
        float userInputYear;          // user inputed Years;
        float hourToMinutes;          // stores the converted hour->Minutes;
        float minuteToHours;          // stores the converted minute->Hours;
        float minuteToSeconds;        // stores the converted minute->Seconds;
        float secondToMinutes;        // stores the converted second->Minutes;
        float dayToHours;             // stores the converted day->Hours;
        float hourToDays;             // stores the converted hour->Days;
        float weekToDays;             // stores the converted week->Days;
        float dayToWeeks;             // stores the converted day->Weeks;
        float yearToWeeks;            // stores the converted year->Weeks;
        float weekToYears;            // stores the converted week->Years;
        float yearToDays;             // stores the converted year->Days;
        float dayToYears;             // stores the converted day->Years;
        float yearToMonths;           // stores the converted year->Months;
        float monthToYears;           // stores the converted month->Year;
        int gender;
        float weight;
        float height;
        float h;
        float BMI;

        printf("\n");

        if (service == 1)
        {
        unit:
            printf("\t***Welcome to the Unit Converter!***\n");
            printf("\n");
            printf("Here's a list of conversations to choose from: \n");
            printf("Temperature(1) \t\t Currency(2) \n");
            printf("Mass(3) \t\t Length(4) \n");
            printf("Time(5) \t\t \n");
            printf("\n");
            printf("Enter the digit corresponding to desired conversion: ");
            scanf("%d", &category);

            printf("\n");
            printf("--------------------------------------------------------------------------------------\n");
            printf("\n");

            switch (category)
            {
            case 1:
                printf("\t***Welcome to Temperature Converter!*** \n");
                printf("\n");
                printf("Here's a list of conversations to choose from: \n");
                printf("'°C' is Celsius, '°F' is Fahrenheit & 'K' is Kelvin \n");
                printf("°C to °F(1) \t\t °C to K(2) \n");
                printf("°F to °C(3) \t\t °F to K(4) \n");
                printf("K to °C(5) \t\t K to °F(6) \n");
                printf("\n");
                printf("Enter the digit corresponding to desired conversion: ");
                scanf("%d", &tempChoice);
                printf("\n");

                if (tempChoice == 1)
                {
                    printf("Enter temperature in °C: ");
                    scanf("%f", &userinputC);
                    celciusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
                    printf("°F = ((9.0 / 5.0) * °C + 32) \n");
                    printf("So,\n\t %.2f°C = %.2f°F", userinputC, celciusToFahrenheit);
                }
                else if (tempChoice == 2)
                {
                    printf("Enter temperature in °C: ");
                    scanf("%f", &userinputC);
                    celciusToKelvin = (userinputC + 273.15);
                    printf("K = (°C + 273.15) \n");
                    printf("So,\n\t %.2f°C = %.2f K", userinputC, celciusToKelvin);
                }
                else if (tempChoice == 3)
                {
                    printf("Enter temperature in °F: ");
                    scanf("%f", &userinputF);
                    fahrenheitToCelcius = ((userinputF - 32) * (5.0 / 9.0));
                    printf("°C = ((°F - 32) * (5.0 / 9.0)) \n");
                    printf("So,\n\t %.2f°F = %.2f°C", userinputF, fahrenheitToCelcius);
                }
                else if (tempChoice == 4)
                {
                    printf("Enter temperature in °F: ");
                    scanf("%f", &userinputF);
                    fahrenheitToKelvin = (((userinputF - 32) * (5.0 / 9.0)) + 273.15);
                    printf("K = (((°F - 32) * (5.0 / 9.0)) + 273.15) \n");
                    printf("So,\n\t %.2f°F = %.2f K", userinputF, fahrenheitToKelvin);
                }
                else if (tempChoice == 5)
                {
                    printf("Enter temperature in K: ");
                    scanf("%f", &userinputK);
                    kelvinToCelsius = ((userinputK - 32) * (5.0 / 9.0));
                    printf("°C = K - 273.15 \n");
                    printf("So,\n\t %.2f K = %.2f°C", userinputK, kelvinToCelsius);
                }
                else if (tempChoice == 6)
                {
                    printf("Enter temperature in K: ");
                    scanf("%f", &userinputK);
                    kelvinToFahrenheit = (((userinputK - 273.15) * (9.0 / 5.0)) + 32);
                    printf("°F = (((K - 273.15) * (9.0 / 5.0)) + 32) \n");
                    printf("So,\n\t %.2f K = %.2f°F", userinputK, kelvinToFahrenheit);
                }
                else
                {
                    printf("\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\tPlease enter correct choice!\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\n");
                }
                break;

            case 2:
                printf("\t***Welcome to Currency Converter!*** \n");
                printf("\n");
                printf("Here's a list of conversations to choose from: \n");
                printf("INR is Indian Rupee \t\t USD is US Dollar \n");
                printf("AUD is Australian Dolaar \t\t CAD is Canadian Dollar \n");
                printf("GBP is Pound Sterling \t\t JPY is Japanese Yen \n");
                printf("EUR is Euro \t\t CNY is Chinese Yuan \n");
                printf("RUB is Rouble \t\t OMR is Omani Rial \n");
                printf("\n");
                printf("INR tO USD(1) \t\t USD to INR(2) \n");
                printf("INR tO AUD(3) \t\t AUD to INR(4) \n");
                printf("INR tO CAD(5) \t\t CAD to INR(6) \n");
                printf("INR tO GBP(7) \t\t GBP to INR(8) \n");
                printf("INR tO JPY(9) \t\t JPY to INR(10) \n");
                printf("INR tO EUR(11) \t\t EUR to INR(12) \n");
                printf("INR tO CNY(13) \t\t CNY to INR(14) \n");
                printf("INR tO RUB(15) \t\t RUB to INR(16) \n");
                printf("INR tO OMR(17) \t\t OMR to INR(18) \n");
                printf("\n");
                printf("Enter the digit corresponding to desired conversion: ");
                scanf("%d", &currencyChoice);
                printf("\n");

                if (currencyChoice == 1)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoUSD = userInputINR / 78.08;
                    printf("USD = INR / 78.08 \n");
                    printf("So, \n\t ₹%.2f = $%.2f", userInputINR, INRtoUSD);
                }
                else if (currencyChoice == 2)
                {
                    printf("Amount in USD: ");
                    scanf("%f", &userInputUSD);
                    USDtoINR = userInputUSD * 78.08;
                    printf("INR = USD * 78.08 \n");
                    printf("So, \n\t $%.2f = ₹%.2f", userInputUSD, USDtoINR);
                }
                else if (currencyChoice == 3)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoAUD = userInputINR / 54.61;
                    printf("AUD = INR / 54.61 \n");
                    printf("So, \n\t ₹%.2f = A$%.2f", userInputINR, INRtoAUD);
                }
                else if (currencyChoice == 4)
                {
                    printf("Amount in AUD: ");
                    scanf("%f", &userInputAUD);
                    AUDtoINR = userInputAUD * 54.61;
                    printf("INR = AUD * 54.61 \n");
                    printf("So, \n\t A$%.2f = ₹%.2f", userInputAUD, AUDtoINR);
                }
                else if (currencyChoice == 5)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoCAD = userInputINR / 60.17;
                    printf("CAD = INR / 60.17 \n");
                    printf("So, \n\t ₹%.2f = C$%.2f", userInputINR, INRtoCAD);
                }
                else if (currencyChoice == 6)
                {
                    printf("Amount in CAD: ");
                    scanf("%f", &userInputCAD);
                    CADtoINR = userInputCAD * 60.17;
                    printf("INR = CAD * 60.17 \n");
                    printf("So, \n\t C$%.2f = ₹%.2f", userInputCAD, CADtoINR);
                }
                else if (currencyChoice == 7)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoGBP = userInputINR / 95.93;
                    printf("GBP = INR / 95.93 \n");
                    printf("So, \n\t ₹%.2f = £%.2f", userInputINR, INRtoGBP);
                }
                else if (currencyChoice == 8)
                {
                    printf("Amount in GBP: ");
                    scanf("%f", &userInputGBP);
                    GBPtoINR = userInputGBP * 95.93;
                    printf("INR = GBP * 95.93 \n");
                    printf("So, \n\t £%.2f = ₹%.2f", userInputGBP, GBPtoINR);
                }
                else if (currencyChoice == 9)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoJPY = userInputINR / 0.58;
                    printf("JPY = INR / 0.58 \n");
                    printf("So, \n\t ₹%.2f = JP¥%.2f", userInputINR, INRtoJPY);
                }
                else if (currencyChoice == 10)
                {
                    printf("Amount in JPY: ");
                    scanf("%f", &userInputJPY);
                    JPYtoINR = userInputJPY * 0.58;
                    printf("INR = JPY * 0.58 \n");
                    printf("So, \n\t JP¥%.2f = ₹%.2f", userInputJPY, JPYtoINR);
                }
                else if (currencyChoice == 11)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoEUR = userInputINR / 82.13;
                    printf("EUR = INR / 82.13 \n");
                    printf("So, \n\t ₹%.2f = €%.2f", userInputINR, INRtoEUR);
                }
                else if (currencyChoice == 12)
                {
                    printf("Amount in EUR: ");
                    scanf("%f", &userInputEUR);
                    EURtoINR = userInputEUR * 82.13;
                    printf("INR = EUR * 82.13 \n");
                    printf("So, \n\t €%.2f = ₹%.2f", userInputEUR, EURtoINR);
                }
                else if (currencyChoice == 13)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoCNY = userInputINR / 11.64;
                    printf("CNY = INR / 11.64 \n");
                    printf("So, \n\t ₹%.2f = ¥%.2f", userInputINR, INRtoCNY);
                }
                else if (currencyChoice == 14)
                {
                    printf("Amount in CNY: ");
                    scanf("%f", &userInputCNY);
                    CNYtoINR = userInputCNY * 11.64;
                    printf("INR = CNY * 11.64 \n");
                    printf("So, \n\t ¥%.2f = ₹%.2f", userInputCNY, CNYtoINR);
                }
                else if (currencyChoice == 15)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoRUB = userInputINR / 1.38;
                    printf("RUB = INR / 1.38 \n");
                    printf("So, \n\t ₹%.2f = ₽%.2f", userInputINR, INRtoRUB);
                }
                else if (currencyChoice == 16)
                {
                    printf("Amount in RUB: ");
                    scanf("%f", &userInputRUB);
                    RUBtoINR = userInputRUB * 1.38;
                    printf("INR = RUB * 1.38 \n");
                    printf("So, \n\t ₽%.2f = ₹%.2f", userInputRUB, RUBtoINR);
                }
                else if (currencyChoice == 17)
                {
                    printf("Amount in INR: ");
                    scanf("%f", &userInputINR);
                    INRtoOMR = userInputINR / 202.80;
                    printf("OMR = INR / 202.80 \n");
                    printf("So, \n\t ₹%.2f = ر.ع.%.2f", userInputINR, INRtoOMR);
                }
                else if (currencyChoice == 18)
                {
                    printf("Amount in OMR: ");
                    scanf("%f", &userInputOMR);
                    OMRtoINR = userInputOMR * 202.80;
                    printf("INR = OMR * 202.80 \n");
                    printf("So, \n\t ر.ع.%.2f = ₹%.2f", userInputOMR, OMRtoINR);
                }
                else
                {
                    printf("\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\tPlease enter correct choice!\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\n");
                }
                break;

            case 3:
                printf("\t***Welcome to Mass Converter!*** \n");
                printf("\n");
                printf("Here's a list of conversations to choose from: \n");
                printf("Ounce to Grams(1) \t\t Grams to Ounce(2) \n");
                printf("Miligrams to Grams(3) \t\t Grams to Miligrams(4) \n");
                printf("Stone to Grams(5) \t\t Grams to Stones(6) \n");
                printf("Kilograms to Grams(7) \t\t Grams to Kilograms(8) \n");
                printf("Pounds to Grams(9) \t\t Grams to Pounds(10) \n");
                printf("Pounds to Kilograms(11) \t\t Kilograms to Pounds(12) \n");
                printf("Stone to Kilograms(13) \t\t Kilograms to Stone(14) \n");
                printf("Pounds to Ounce(15) \t\t Ounce to Pounds(16) \n");
                printf("Pounds to Stone(17) \t\t Stone to Pounds(18) \n");
                printf("Stone to Ounce(19) \t\t Ounce to Stone(20) \n");
                printf("\n");
                printf("Enter the digit corresponding to desired conversion: ");
                scanf("%d", &massChoice);
                printf("\n");

                if (massChoice == 1)
                {
                    printf("Mass in Ounce: ");
                    scanf("%f", &userInputOunce);
                    ounceToGrams = userInputOunce * 28.3495;
                    printf("Grams = Ounce * 28.3495 \n");
                    printf("So, \n\t %.2f oz = %.2f g", userInputOunce, ounceToGrams);
                }
                else if (massChoice == 2)
                {
                    printf("Mass in Grams: ");
                    scanf("%f", &userInputGram);
                    gramToOunces = userInputGram * 0.03527396;
                    printf("Ounce = Grams * 0.03527396 \n");
                    printf("So, \n\t %.2f g = %.2f oz", userInputGram, gramToOunces);
                }
                else if (massChoice == 3)
                {
                    printf("Mass in Miligrams: ");
                    scanf("%f", &userInputMiligram);
                    miligramToGrams = userInputMiligram * 0.001;
                    printf("Grams = Miligrams * 0.001 \n");
                    printf("So, \n\t %.2f mg = %.2f g", userInputMiligram, miligramToGrams);
                }
                else if (massChoice == 4)
                {
                    printf("Mass in Grams: ");
                    scanf("%f", &userInputGram);
                    gramToMiligrams = userInputGram * 1000;
                    printf("Miligrams = Grams * 1000 \n");
                    printf("So, \n\t %.2f g = %.2f mg", userInputGram, gramToMiligrams);
                }
                else if (massChoice == 5)
                {
                    printf("Mass in Stone: ");
                    scanf("%f", &userInputStone);
                    stonesToGrams = userInputStone * 6350.29;
                    printf("Grams = Stone * 6350.29 \n");
                    printf("So, \n\t %.2f st = %.2f g", userInputStone, stonesToGrams);
                }

                else if (massChoice == 6)
                {
                    printf("Mass in Grams: ");
                    scanf("%f", &userInputGram);
                    gramToStones = userInputGram * 0.00015747;
                    printf("Stone = Grams * 0.00015747 \n");
                    printf("So, \n\t %.2f g = %.2f st", userInputGram, gramToStones);
                }
                else if (massChoice == 7)
                {
                    printf("Mass in Kilograms: ");
                    scanf("%f", &userInputKilogram);
                    kilogramToGrams = userInputKilogram * 1000;
                    printf("Grams = Kilograms * 1000 \n");
                    printf("So, \n\t %.2f Kg = %.2f g", userInputKilogram, kilogramToGrams);
                }
                else if (massChoice == 8)
                {
                    printf("Mass in Grams: ");
                    scanf("%f", &userInputGram);
                    gramToKilograms = userInputGram * 0.001;
                    printf("Kilograms = Grams * 0.001 \n");
                    printf("So, \n\t %.2f g = %.2f Kg", userInputGram, gramToKilograms);
                }

                else if (massChoice == 9)
                {
                    printf("Mass in Pounds: ");
                    scanf("%f", &userInputPound);
                    poundToGrams = userInputPound * 453.592;
                    printf("Grams = Pounds * 453.592 \n");
                    printf("So, \n\t %.2f lb = %.2f g", userInputPound, poundToGrams);
                }
                else if (massChoice == 10)
                {
                    printf("Mass in Grams: ");
                    scanf("%f", &userInputGram);
                    gramsToPounds = userInputGram * 0.00220462;
                    printf("Pounds = Grams * 0.00220462 \n");
                    printf("So, \n\t %.2f g = %.2f lb", userInputGram, gramsToPounds);
                }
                else if (massChoice == 11)
                {
                    printf("Mass in Pounds: ");
                    scanf("%f", &userInputPound);
                    poundToKilograms = userInputPound * 0.453592;
                    printf("Kilograms = Pounds * 0.453592 \n");
                    printf("So, \n\t %.2f lb = %.2f Kg", userInputPound, poundToKilograms);
                }
                else if (massChoice == 12)
                {
                    printf("Mass in Kilograms: ");
                    scanf("%f", &userInputKilogram);
                    kilogramToPounds = userInputKilogram * 2.20462;
                    printf("Pounds = Kilograms * 2.20462 \n");
                    printf("So, \n\t %.2f Kg = %.2f lb", userInputKilogram, kilogramToPounds);
                }
                else if (massChoice == 13)
                {
                    printf("Mass in Stone: ");
                    scanf("%f", &userInputStone);
                    stoneToKilograms = userInputStone * 6.35029;
                    printf("Kilograms = Stone * 6.35029 \n");
                    printf("So, \n\t %.2f st = %.2f Kg", userInputStone, stoneToKilograms);
                }
                else if (massChoice == 14)
                {
                    printf("Mass in Kilograms: ");
                    scanf("%f", &userInputKilogram);
                    kilogramToStone = userInputKilogram * 0.157473;
                    printf("Stone = Kilograms * 0.157473 \n");
                    printf("So, \n\t %.2f Kg = %.2f st", userInputKilogram, kilogramToStone);
                }

                else if (massChoice == 15)
                {
                    printf("Mass in Pounds: ");
                    scanf("%f", &userInputPound);
                    poundToOunces = userInputPound * 16;
                    printf("Ounce = Pounds * 16 \n");
                    printf("So, \n\t %.2f lb = %.2f oz", userInputPound, poundToOunces);
                }
                else if (massChoice == 16)
                {
                    printf("Mass in Ounce: ");
                    scanf("%f", &userInputOunce);
                    ounceToPounds = userInputOunce * 0.0625;
                    printf("Pounds = Ounce * 0.0625 \n");
                    printf("So, \n\t %.2f oz = %.2f lb", userInputOunce, ounceToPounds);
                }
                else if (massChoice == 17)
                {
                    printf("Mass in Pounds: ");
                    scanf("%f", &userInputPound);
                    poundToStone = userInputPound * 0.0714286;
                    printf("Stone = Pounds * 0.0714286 \n");
                    printf("So, \n\t %.2f lb = %.2f st", userInputPound, poundToStone);
                }
                else if (massChoice == 18)
                {
                    printf("Mass in Stone: ");
                    scanf("%f", &userInputStone);
                    stoneToPounds = userInputStone * 14;
                    printf("Pounds = Stone * 14 \n");
                    printf("So, \n\t %.2f st = %.2f lb", userInputStone, stoneToPounds);
                }
                else if (massChoice == 19)
                {
                    printf("Mass in Stone: ");
                    scanf("%f", &userInputStone);
                    stoneToOunces = userInputStone * 224;
                    printf("Ounce = Stone * 224 \n");
                    printf("So, \n\t %.2f st = %.2f oz", userInputStone, stoneToOunces);
                }
                else if (massChoice == 20)
                {
                    printf("Mass in Ounce: ");
                    scanf("%f", &userInputOunce);
                    ounceToStone = userInputOunce * 0.00446429;
                    printf("Stone = Ounce * 0.00446429 \n");
                    printf("So, \n\t %.2f oz = %.2f st", userInputOunce, ounceToStone);
                }
                else
                {
                    printf("\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\tPlease enter correct choice!\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\n");
                }
                break;

            case 4:
                printf("\t***Welcome to Length Converter!*** \n");
                printf("\n");
                printf("Here's a list of conversations to choose from: \n");
                printf("Miles to Kilometers(1) \t\t Kilometers to Miles(2) \n");
                printf("Kilometers to Meters(3) \t\t Meters to Kilometers(4) \n");
                printf("Foot to Meter(5) \t\t Meter to Foot(6) \n");
                printf("Inches to Centimeters(7) \t\t Centimeters to Inches(8) \n");
                printf("Meter to Centimeters(9) \t\t Centimeters to Meter(10) \n");
                printf("Inches to Foot(11) \t\t Foot to Inches(12) \n");
                printf("Yards to Meters(13) \t\t Meters to Yards(14) \n");
                printf("Yardd to Foots(15) \t\t Foots to Yards(16) \n");
                printf("Yards to Inches(17) \t\t Inches to Yards(18) \n");
                printf("Milimeter to Centimeter(19) \t\t Centimeter to Milimeter(20) \n");
                printf("\n");
                printf("Enter the digit corresponding to desired conversion: ");
                scanf("%d", &lengthChoice);
                printf("\n");

                if (lengthChoice == 1)
                {
                    printf("Length in Miles: ");
                    scanf("%f", &userInputMile);
                    mileToKilometers = userInputMile * 1.609344;
                    printf("Kilometer = Mile * 1.609344 \n");
                    printf("So, \n\t %.2f mi = %.2f km", userInputMile, mileToKilometers);
                }
                else if (lengthChoice == 2)
                {
                    printf("Length in Kilometers: ");
                    scanf("%f", &userInputKilometer);
                    kilometerToMiles = userInputKilometer * 0.62137119;
                    printf("Mile = Kilometer * 0.62137119 \n");
                    printf("So, \n\t %.2f km = %.2f mi", userInputKilometer, kilometerToMiles);
                }
                else if (lengthChoice == 3)
                {
                    printf("Length in Kilometers: ");
                    scanf("%f", &userInputKilometer);
                    kilometerToMeters = userInputKilometer * 1000;
                    printf("Meter = Kilometer * 1000 \n");
                    printf("So, \n\t %.2f km = %.2f m", userInputKilometer, kilometerToMeters);
                }
                else if (lengthChoice == 4)
                {
                    printf("Length in Meter: ");
                    scanf("%f", &userInputMeter);
                    meterToKilometers = userInputMeter * 0.001;
                    printf("Kilometer = Meter * 0.001 \n");
                    printf("So, \n\t %.2f m = %.2f km", userInputMeter, meterToKilometers);
                }
                else if (lengthChoice == 5)
                {
                    printf("Length in Foot: ");
                    scanf("%f", &userInputFoot);
                    footToMeters = userInputFoot * 0.3048;
                    printf("Meter = Foot * 0.3048 \n");
                    printf("So, \n\t %.2f ft = %.2f m", userInputFoot, footToMeters);
                }

                else if (lengthChoice == 6)
                {
                    printf("Length in Meter: ");
                    scanf("%f", &userInputMeter);
                    meterToFoots = userInputMeter * 3.2808399;
                    printf("Foot = Meter * 3.2808399 \n");
                    printf("So, \n\t %.2f m = %.2f ft", userInputMeter, meterToFoots);
                }
                else if (lengthChoice == 7)
                {
                    printf("Length in Inches: ");
                    scanf("%f", &userInputInch);
                    inchToCentimeters = userInputInch * 2.54;
                    printf("Centimeter = Inch * 2.54 \n");
                    printf("So, \n\t %.2f in = %.2f cm", userInputInch, inchToCentimeters);
                }
                else if (lengthChoice == 8)
                {
                    printf("Length in Centimeter: ");
                    scanf("%f", &userInputCentimeter);
                    centimeterToInches = userInputCentimeter * 0.39370079;
                    printf("Inch = Centimeter * 0.39370079 \n");
                    printf("So, \n\t %.2f cm = %.2f in", userInputCentimeter, centimeterToInches);
                }
                else if (lengthChoice == 9)
                {
                    printf("Length in Meter: ");
                    scanf("%f", &userInputMeter);
                    meterToCentimeters = userInputMeter * 100;
                    printf("Centimeter = Meter * 100 \n");
                    printf("So, \n\t %.2f m = %.2f cm", userInputMeter, meterToCentimeters);
                }
                else if (lengthChoice == 10)
                {
                    printf("Length in Centimeter: ");
                    scanf("%f", &userInputCentimeter);
                    centimeterToMeters = userInputCentimeter * 0.01;
                    printf("Meter = Centimeter * 0.01 \n");
                    printf("So, \n\t %.2f cm = %.2f m", userInputCentimeter, centimeterToMeters);
                }
                else if (lengthChoice == 11)
                {
                    printf("Length in Inches: ");
                    scanf("%f", &userInputInch);
                    inchToFoots = userInputInch * 0.08333333;
                    printf("Foot = Inch * 0.08333333 \n");
                    printf("So, \n\t %.2f in = %.2f ft", userInputInch, inchToFoots);
                }
                else if (lengthChoice == 12)
                {
                    printf("Length in Foot: ");
                    scanf("%f", &userInputFoot);
                    footToInches = userInputFoot * 12;
                    printf("Inch = Foot * 12 \n");
                    printf("So, \n\t %.2f ft = %.2f in", userInputFoot, footToInches);
                }
                else if (lengthChoice == 13)
                {
                    printf("Length in Yards: ");
                    scanf("%f", &userInputYard);
                    yardToMeters = userInputYard * 0.9144;
                    printf("Meter = Yard* 0.9144 \n");
                    printf("So, \n\t %.2f yd = %.2f m", userInputYard, yardToMeters);
                }
                else if (lengthChoice == 14)
                {
                    printf("Length in Meter: ");
                    scanf("%f", &userInputMeter);
                    meterToYards = userInputMeter * 1.0936133;
                    printf("Yard = Meter * 1.0936133 \n");
                    printf("So, \n\t %.2f m = %.2f yd", userInputMeter, meterToYards);
                }
                else if (lengthChoice == 15)
                {
                    printf("Length in Yards: ");
                    scanf("%f", &userInputYard);
                    yardToFoots = userInputYard * 3;
                    printf("Foot = Yard * 3 \n");
                    printf("So, \n\t %.2f yd = %.2f ft", userInputYard, yardToFoots);
                }
                else if (lengthChoice == 16)
                {
                    printf("Length in Foot: ");
                    scanf("%f", &userInputFoot);
                    footToYards = userInputFoot * 0.33333333;
                    printf("Yard = Foot * 0.33333333 \n");
                    printf("So, \n\t %.2f ft = %.2f yd", userInputFoot, footToYards);
                }
                else if (lengthChoice == 17)
                {
                    printf("Length in Yards: ");
                    scanf("%f", &userInputYard);
                    yardToInches = userInputYard * 36;
                    printf("Inch = Yard * 36 \n");
                    printf("So, \n\t %.2f yd = %.2f in", userInputYard, yardToInches);
                }
                else if (lengthChoice == 18)
                {
                    printf("Length in Inches: ");
                    scanf("%f", &userInputInch);
                    inchToYards = userInputInch * 0.02777778;
                    printf("Yard = Inch * 0.02777778 \n");
                    printf("So, \n\t %.2f in = %.2f yd", userInputInch, inchToYards);
                }
                else if (lengthChoice == 19)
                {
                    printf("Length in Milimeter: ");
                    scanf("%f", &userInputMilimeter);
                    milimeterToCentimeters = userInputMilimeter * 0.001;
                    printf("Centimeter = Milimeter * 0.001 \n");
                    printf("So, \n\t %.2f mm = %.2f cm", userInputMilimeter, milimeterToCentimeters);
                }
                else if (lengthChoice == 20)
                {
                    printf("Length in Centimeter: ");
                    scanf("%f", &userInputCentimeter);
                    centimeterToMilimeters = userInputCentimeter * 10;
                    printf("Milimeter = Centimeter * 10 \n");
                    printf("So, \n\t %.2f cm = %.2f mm", userInputCentimeter, centimeterToMilimeters);
                }
                else
                {
                    printf("\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\tPlease enter correct choice!\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\n");
                }
                break;

            case 5:
                printf("\t***Welcome to Time Converter!*** \n");
                printf("\t    tick! tock!  tick! tock! \n");
                printf("\n");
                printf("Here's a list of conversations to choose from: \n");
                printf("Hour to Minutes(1) \t\t Minute to Hours(2) \n");
                printf("Minute to Seconds(3) \t\t Second to Minutes(4) \n");
                printf("Day to Hours(5) \t\t Hour to Days(6) \n");
                printf("Week to Days(7) \t\t Day to Weeks (8) \n");
                printf("Year to Weeks(9) \t\t Week to Years(10) \n");
                printf("Year to Days(11) \t\t Day to Years(12) \n");
                printf("Year to Months(13) \t\t Month to Years(14) \n");
                printf("\n");
                printf("Enter the digit corresponding to desired conversion: ");
                scanf("%d", &timeChoice);
                printf("\n");

                if (timeChoice == 1)
                {
                    printf("Please enter the hour: ");
                    scanf("%f", &userInputHour);
                    hourToMinutes = userInputHour * 60;
                    printf("Minutes = Hour * 60 \n");
                    printf("So, \n\t %.2f hrs = %.2f mins", userInputHour, hourToMinutes);
                }
                else if (timeChoice == 2)
                {
                    printf("Please enter the minute: ");
                    scanf("%f", &userInputMinute);
                    minuteToHours = userInputMinute / 60;
                    printf("Hour = Minute / 60 \n");
                    printf("So, \n\t %.2f mins = %.2f hrs", userInputMinute, minuteToHours);
                }
                else if (timeChoice == 3)
                {
                    printf("Please enter the minute: ");
                    scanf("%f", &userInputMinute);
                    minuteToSeconds = userInputMinute * 60;
                    printf("Seconds = Minute * 60 \n");
                    printf("So, \n\t %.2f mins = %.2f secs", userInputMinute, minuteToSeconds);
                }
                else if (timeChoice == 4)
                {
                    printf("Please enter the second: ");
                    scanf("%f", &userInputSecond);
                    secondToMinutes = userInputSecond / 60;
                    printf("Minute = Second / 60 \n");
                    printf("So, \n\t %.2f secs = %.2f mins", userInputSecond, secondToMinutes);
                }
                else if (timeChoice == 5)
                {
                    printf("Please enter the day: ");
                    scanf("%f", &userInputDay);
                    dayToHours = userInputDay * 24;
                    printf("Hours = Day * 24 \n");
                    printf("So, \n\t %.2f days = %.2f hrs", userInputDay, dayToHours);
                }

                else if (timeChoice == 6)
                {
                    printf("Please enter the hour: ");
                    scanf("%f", &userInputHour);
                    hourToDays = userInputHour / 24;
                    printf("Day = Hour / 24 \n");
                    printf("So, \n\t %.2f hrs = %.2f days", userInputHour, hourToDays);
                }
                else if (timeChoice == 7)
                {
                    printf("Please enter the week: ");
                    scanf("%f", &userInputWeek);
                    weekToDays = userInputWeek * 7;
                    printf("Days = Week * 7 \n");
                    printf("So, \n\t %.2f wks = %.2f days", userInputWeek, weekToDays);
                }
                else if (timeChoice == 8)
                {
                    printf("Please enter the Day: ");
                    scanf("%f", &userInputDay);
                    dayToWeeks = userInputDay / 7;
                    printf("Weeks = Day / 7 \n");
                    printf("So, \n\t %.2f days = %.2f wks", userInputDay, dayToWeeks);
                }
                else if (timeChoice == 9)
                {
                    printf("Please enter the Year: ");
                    scanf("%f", &userInputYear);
                    yearToWeeks = userInputYear * 52.1428571;
                    printf("Weeks = Year * 52.1428571 \n");
                    printf("So, \n\t %.2f yrs = %.2f wks", userInputYear, yearToWeeks);
                }
                else if (timeChoice == 10)
                {
                    printf("Please enter the Week: ");
                    scanf("%f", &userInputWeek);
                    weekToYears = userInputWeek * 0.01917808;
                    printf("Year = Week * 0.01917808 \n");
                    printf("So, \n\t %.2f wks = %.2f yrs", userInputWeek, weekToYears);
                }
                else if (timeChoice == 11)
                {
                    printf("Please enter the Year: ");
                    scanf("%f", &userInputYear);
                    yearToDays = userInputYear * 365;
                    printf("Days = Year * 365 \n");
                    printf("So, \n\t %.2f yrs = %.2f days", userInputYear, yearToDays);
                }

                else if (timeChoice == 12)
                {
                    printf("Please enter the Day: ");
                    scanf("%f", &userInputDay);
                    dayToYears = userInputDay / 365;
                    printf("Year = Day / 365 \n");
                    printf("So, \n\t %.2f days = %.2f yrs", userInputDay, dayToYears);
                }
                else if (timeChoice == 13)
                {
                    printf("Please enter the Year: ");
                    scanf("%f", &userInputYear);
                    yearToMonths = userInputYear * 12;
                    printf("Months = Year * 12 \n");
                    printf("So, \n\t %.2f yrs = %.2f mos", userInputYear, yearToMonths);
                }
                else if (timeChoice == 14)
                {
                    printf("Please enter the month: ");
                    scanf("%f", &userInputMonth);
                    monthToYears = userInputMonth / 12;
                    printf("Year = Month / 12 \n");
                    printf("So, \n\t %.2f mos = %.2f yrs", userInputMonth, monthToYears);
                }
                else
                {
                    printf("\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\tPlease enter correct choice!\n");
                    printf("----------------------------------------------------------------------\n");
                    printf("\n");
                }
                break;

            default:
                printf("\n");
                printf("----------------------------------------------------------------------\n");
                printf("\tPlease enter correct choice!\n");
                printf("----------------------------------------------------------------------\n");
                printf("\n");
                break;
            }

            printf("\n");
            printf("\n");
            printf("Press '2' to select a Unit conversion\n");
            printf("Press '0' to Exit Unit Converter\n");
            scanf("%d", &repeat);
            printf("\n");

            if (repeat == 2)
            {
                goto unit;
            }
        }
        else if (service == 2)
        {
        bmi:
            printf("Welcome to BMI calculator! \n");
            printf(" \n");
            printf("Select your gender: \n");
            printf("Male(1) \t\t Female(2) \n");
            scanf("%d", &gender);

            printf("Enter the following data: \n");
            printf("Mass in kg: ");
            scanf("%f", &weight);
            printf("Height in cm: ");
            scanf("%f", &height);

            height = height / 100;
            h = pow(height, 2);
            BMI = weight / h;

            printf("Your BMI is: %.1f", BMI);
            printf("\n");

            if (BMI < 18.5)
            {
                printf("%s! you are 'Underweight'\n", name);
            }
            else if (BMI >= 18.5 & BMI <= 24.9)
            {
                printf("Horray %s!, you have 'Normal weight'\n", name);
            }
            else if (BMI >= 25 & BMI <= 29)
            {
                printf("%s! you are 'Overweight'\n", name);
            }
            else if (BMI >= 30)
            {
                printf("%s! you are 'Obese'\n", name);
            }
            else
            {
                printf("\n");
                printf("----------------------------------------------------------------------\n");
                printf("\tPlease enter correct choice!\n");
                printf("----------------------------------------------------------------------");
                printf("\n");
            }

            printf("\n");
            printf("Press '3' to again calculate BMI\n");
            printf("Press '0' to Exit BMI calculator\n");
            scanf("%d", &repeat);
            printf("\n");

            if (repeat == 3)
            {
                goto bmi;
            }
        }
        else
        {
            printf("\n");
            printf("----------------------------------------------------------------------\n");
            printf("\tPlease enter correct choice!\n");
            printf("----------------------------------------------------------------------");
            printf("\n");
        }

        printf("\n");
        printf("Press '1' to select the service \n");
        printf("Press '0' to Exit \n");
        scanf("%d", &repeat);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------------------\n");
    printf("\t\t\tHave a nice day %s!\n", name);
    printf("----------------------------------------------------------------------\n");
    printf("**********************************************************************\n");
    printf("----------------------------------------------------------------------\n");
    printf("**********************************************************************\n");

    return 0;
}