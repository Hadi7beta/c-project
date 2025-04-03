#include <stdio.h>
#include <string.h>

struct data {
    char name[20];
    int age;
    char gender;
    char trainname[40];
    int trainno;
};

void book(int n) {
    char *arr1[] = {"AMRITA EXPRESS", "RAJDHANI EXPRESS", "TRIUPATI EXPRESS", "PARASURAM EXPRESS"};
    char *arr2[] = {"12:00", "01:00", "16:00", "12:00"};
    int arr[4] = {12365, 16365, 17365, 18365};
    struct data passenger;
    int found = 0;
    
    for (int i = 0; i < 4; i++) { 
        if (n == arr[i]) {
            found = 1;
            printf("Enter name: ");
            fgets(passenger.name, sizeof(passenger.name), stdin);
            passenger.name[strcspn(passenger.name, "\n")] = 0; 
            
            printf("Enter age: ");
            scanf("%d", &passenger.age);
            getchar(); 
            
            printf("Enter gender (M/F): ");
            scanf("%c", &passenger.gender);
            getchar(); 
            

            
            printf("\n***************************************************************\n                  General Ticket\n***************************************************************\nName: %s\nAge: %d\nGender: %c\n""Train name %s\n""Train no %d\n""**************************************************************\n", passenger.name, passenger.age, passenger.gender,arr1[i],arr[i]);
            break;
        }
    }
    if (!found) {
        printf("Invalid train number.\n");
    }
}

int main() {
    char ans = 'y';
    while (ans == 'y' || ans == 'Y') {
        printf("****************************************************************\n");
        printf("              Unreserved Ticket Booking System\n");
        printf("****************************************************************\n");
        printf("Train              Time         Train No.\n");
        printf("AMRITA EXPRESS     12:00         12365\n");
        printf("RAJDHANI EXPRESS   01:00         16365\n");
        printf("TRIUPATI EXPRESS   16:00         17365\n");
        printf("PARASURAM EXPRESS  12:00         18365\n");
        
        int trainno;
        printf("Enter train no: ");
        scanf("%d", &trainno);
        getchar(); 
        
        book(trainno);
        
        printf("Do you want to repeat? (y/n): ");
        scanf(" %c", &ans);
        getchar(); 
        printf("\n");
    }
    return 0;
}
