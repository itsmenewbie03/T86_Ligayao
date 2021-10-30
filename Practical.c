#include <stdio.h>
#include <string.h>

void txtdcr(char input[]){
  for(int x = 1; x <= strlen(input); x++){
    if(x==strlen(input)){
      printf("&\n");
    }
    else{
    printf("&");
    }
  }
}
int main(void) {
int destination, bus, pay, fare, change;
char yn;
char msg[] = "| BL4CNURS3 BUS TICKETING MACHINE |";
txtdcr(msg);
printf("%s\n", msg);
txtdcr(msg);

printf("Where would you like to travel?\n[1]Valencia [2]Maramag [3]Davao\n");
printf("Choice: ");
scanf("%d", &destination);

switch(destination){
    case 1:
        fare = 60;
        printf("======================\n");
        printf("Malaybalay to Valencia\nDistance: 44km\nFare: PhP 60\n");
        printf("Prefered Bus?\n[1]Pabama [2]Rural [3]Super V\n");
        printf("Choice: ");
        scanf("%d", &bus);
    break;
    case 2:
    fare = 80;
        printf("=====================\n");
        printf("Malaybalay to Maramag\nDistance: 57km\nFare: PhP 80\n");
        printf("Prefered Bus?\n[1]Pabama [2]Rural [3]Super V\n");
        printf("Choice: ");
        scanf("%d", &bus);
    break;
    case 3:
    fare = 150;
        printf("===================\n");
        printf("Malaybalay to Davao\nDistance: 164km\nFare: PhP 150\n");
        printf("Prefered Bus?\n[1]Pabama [2]Rural [3]Super V\n");
        printf("Choice: ");
        scanf("%d", &bus);
    break;
    default:
    printf("Invalid Input\n");
    return -1;
    break;
}
switch(bus){
    case 1:
    printf("Bus: Pabama\n");
    break;
    case 2:
    printf("Bus: Rural\n");
    break;
    case 3:
    printf("Bus: Super V\n");
    break;
    default:
    printf("Invalid Input!");
    return -1;
    break;
}

    printf("Buy Ticket? Y/N ");
    scanf("%s", &yn);
    if(yn == 'y' || yn == 'Y'){
    printf("Enter Funds: ");
    scanf("%d", &pay);
    if(pay>=fare){
      change = pay - fare;
      printf("Change: %d\n", change);
      printf("You have Purchased the Ticket, Thank you!");
    }
    else{
      printf("Not Enough Funds!");
    }
    
    }
    else if(yn == 'n' || yn == 'N'){
    printf("Booking Cancelled");
    }
    else{
    printf("Invalid Input");
    return -1;
    }
  return 0;
}