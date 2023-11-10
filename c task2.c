
union UserData {
    struct {
        unsigned int isActive : 1;
    } flags;
    unsigned int value;
};

int main() {
    union UserData data;
    unsigned int userInput;

    printf("Please enter the flag value (0 or 1): ");
    scanf("%u", &userInput);

    data.value = userInput;

    if (data.flags.isActive) {
        printf("User is active.\n");
        // Perform logging for active user
         char LoginId[100];
    char Password[100];
    printf("Welcome to the Login_System\n");
    printf("Please Enter your LoginID\n");
    scanf("%s" ,&LoginId);
    printf("Please Enter your Password\n");
     scanf("%s", &Password);
    if(strcmp(LoginId,"Raneem")==0){
        if(strcmp(Password,"12345")==0){
            printf("Hi,You are Welcome\n");
        }
    }
    else{
        printf(" Worng password or username please,Try Again!!\n");
    }
    } else {
        printf("User is not active.\n");
        // Perform logging for inactive user
    }

    return 0;
}
