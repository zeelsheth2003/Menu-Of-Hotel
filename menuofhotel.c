#include <stdlib.h>
#include <stdio.h>
#define FAJITAS_PRICE 5.99
#define TACOS_PRICE 3.99
#define TOSTADAS_PRICE 4.99
#define CHIMICHANGAS_PRICE 5.99
#define FLAUTAS_PRICE 4.99
#define BURRITOS_PRICE 6.99
 
main(){
 
    int choice = 0;
    double totalPrice = 0;
     
    printf("Welcome to delTaco restaurant!\n");
    printf("May I take your order? \n\n");
 
    do{
        printf("Menu: \n\n");
        printf("1. Fajitas      $%.2lf \n", FAJITAS_PRICE);
        printf("2. Tacos        $%.2lf \n", TACOS_PRICE);
        printf("3. Tostadas     $%.2lf \n", TOSTADAS_PRICE);
        printf("4. Chimichangas $%.2lf \n", CHIMICHANGAS_PRICE);
        printf("5. Flautas      $%.2lf \n", FLAUTAS_PRICE);
        printf("6. Burritos     $%.2lf \n", BURRITOS_PRICE);
        printf("7. Exit\n\n");
        printf("Enter an item: ");
        scanf("%i", &choice);
 
        switch(choice){
        case 1:
            totalPrice += FAJITAS_PRICE;
            break;
        case 2:
            totalPrice += TACOS_PRICE;
            break;
        case 3:
            totalPrice += TOSTADAS_PRICE;
            break;
        case 4:
            totalPrice += CHIMICHANGAS_PRICE;
            break;
        case 5:
            totalPrice += FLAUTAS_PRICE;
            break;
        case 6:
            totalPrice += BURRITOS_PRICE;
            break;
        case 7:
            printf("Than you for ordering at delTaco Restaurant! \n");
            break;
        default:
            printf("*** Error:  This is not on the menu. \n");
            break;
        }
         
        printf("Total so far: $%.2lf\n\n", totalPrice);
     
    } while (choice != 7);
 
    printf("Your order is $%.2lf \n\n", totalPrice);
    printf("Thank you for coming to delTaco Restaurant.\n");
    printf("Have a nice day!.\n\n");
 
    system("pause");
}
