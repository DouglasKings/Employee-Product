#include <stdio.h>

// Function prototypes
double calculateNumberOfEmployees(double IT, double HR, double Sales, double Security, double frontDesk, double customerCare);
double calculateRevenue(double salesServicesMade, double salesProductsMade);

int main() {
    double IT, HR, Sales, Security, frontDesk, customerCare, salesServicesMade, salesProductsMade;
    double numberOfEmployees, Revenue, employeeProductivity;

    printf("Enter the number of IT personnel: ");
    scanf("%lf", &IT);
    printf("Enter the number of HR personnel: ");
    scanf("%lf", &HR);
    printf("Enter the number of Sales personnel: ");
    scanf("%lf", &Sales);
    printf("Enter the number of Security personnel: ");
    scanf("%lf", &Security);
    printf("Enter the number of Front Desk personnel: ");
    scanf("%lf", &frontDesk);
    printf("Enter the number of Customer Care personnel: ");
    scanf("%lf", &customerCare);
    printf("Enter the number of sales services made: ");
    scanf("%lf", &salesServicesMade);
    printf("Enter the number of sales products made: ");
    scanf("%lf", &salesProductsMade);

    numberOfEmployees = calculateNumberOfEmployees(IT, HR, Sales, Security, frontDesk, customerCare);
    Revenue = calculateRevenue(salesServicesMade, salesProductsMade);
    employeeProductivity = (Revenue / numberOfEmployees) * 100;

    printf("The number of IT personnel is: %.2f\n", IT);
    printf("The number of HR personnel is: %.2f\n", HR);
    printf("The number of Sales personnel is: %.2f\n", Sales);
    printf("The number of Security personnel is: %.2f\n", Security);
    printf("The number of Front Desk personnel is: %.2f\n", frontDesk);
    printf("The number of Customer Care personnel is: %.2f\n", customerCare);
    printf("The number of sales services made is: %.2f\n", salesServicesMade);
    printf("The number of sales products made is: %.2f\n", salesProductsMade);
    printf("The number of employees is: %.2f\n", numberOfEmployees);
    printf("The revenue is: %.2f\n", Revenue);
    printf("The employee productivity is: %.2f%%\n", employeeProductivity);

    return 0;
}

double calculateNumberOfEmployees(double IT, double HR, double Sales, double Security, double frontDesk, double customerCare) {
    return IT + HR + Sales + Security + frontDesk + customerCare;
}

double calculateRevenue(double salesServicesMade, double salesProductsMade) {
    return salesServicesMade + salesProductsMade;
}


/*#include <stdio.h>

// Function prototypes
double calculateRevenue(int salesServicesMade, int salesProductsMade);
int getNumberOfEmployees();
double calculateProductivity(double revenue);

int main() {
    // Variables to store user inputs
    int salesServicesMade;
    int salesProductsMade;
    int numberOfEmployeesInEachDepartment[6] = {0}; // IT, HR, Sales, Security, Front Desk, Customer Care

    // Prompting user for inputs
    printf("Enter the number of sales services made:\n");
    scanf("%d", &salesServicesMade);
    printf("Enter the number of sales products made:\n");
    scanf("%d", &salesProductsMade);

    // Getting the number of employees in each department
    printf("Enter the number of IT employees:\n");
    scanf("%d", &numberOfEmployeesInEachDepartment[0]);
    printf("Enter the number of HR employees:\n");
    scanf("%d", &numberOfEmployeesInEachDepartment[1]);
    printf("Enter the number of Sales employees:\n");
    scanf("%d", &numberOfEmployeesInEachDepartment[2]);
    printf("Enter the number of Security employees:\n");
    scanf("%d", &numberOfEmployeesInEachDepartment[3]);
    printf("Enter the number of Front Desk employees:\n");
    scanf("%d", &numberOfEmployeesInEachDepartment[4]);
    printf("Enter the number of Customer Care employees:\n");
    scanf("%d", &numberOfEmployeesInEachDepartment[5]);

    // Calculating total number of employees
    int totalEmployees = 0;
    for (int i = 0; i < 6; i++) {
        totalEmployees += numberOfEmployeesInEachDepartment[i];
    }

    // Calculating revenue
    double revenue = calculateRevenue(salesServicesMade, salesProductsMade);

    // Calculating productivity
    double productivity = calculateProductivity(revenue);

    // Displaying the result
    printf("Employee Productivity: %.2f%%\n", productivity);

    return 0;
}

// Function to calculate revenue
double calculateRevenue(int salesServicesMade, int salesProductsMade) {
    return (double)(salesServicesMade + salesProductsMade);
}

// Function to get the total number of employees
int getNumberOfEmployees(int numberOfEmployeesInEachDepartment[]) {
    int totalEmployees = 0;
    for (int i = 0; i < 6; i++) {
        totalEmployees += numberOfEmployeesInEachDepartment[i];
    }
    return totalEmployees;
}

// Function to calculate productivity
double calculateProductivity(double revenue) {
    int numberOfEmployees = getNumberOfEmployees(numberOfEmployeesInEachDepartment);
    return (revenue / numberOfEmployees) * 100;
}*/