#ifndef DEBUG
#define MAX_TRANSACTION 10; 


typedef struct {
    char date[11]; // Date for the user to be inputed YYYY-MM-DD
    char type[8]; // type of transaction : "Income", "Expense"
    char category[30]; // e.g "groceries", "rent", "services", etc... 
    double amount;
    char description[100]; // definition for the user to be insert on the transaction 
} Transaction; 
#endif



