#include <stdio.h>
#include <math.h>


int encription(int i, int key, char ceasarCipher[100], int letter);
int main()

{   // Variable declaration is always first. //
        
    int i, operation, key;         
    char ceasarCipher[100], letter;
    
    
    // First of all we are going to create a kind of menu that the user can select //
    // which operation they would like to perform. First we need a message //
    // to ask the user to enter a number for our 'Switch Case' to go off and excecute. //
    // We then assign the entered value to a variable so it can be given to the switch case. //

    
    printf("Please enter the operation code for the task you wish to perform:\n0) Encription\n1) Decription\n2) Statistical Analysis\n\n");
    scanf("%d", &operation);
    
    switch(operation)
    {
        case 0: // I WANT TO CALL THE FUNCTION ENCRIPTION   
       
    
        printf("Your encripted message: %s", ceasarCipher); 
    }
    
return 0;
}




int encription(int i, int key, char ceasarCipher[100], int letter)
{
    printf("Enter a message you wish to encript, in CAPITAL LETTERS:\n\n");
    fgets(ceasarCipher,100,stdin);
    printf("Enter the key (i.e. shift amount of positions):\n\n");
    scanf("%d", &key);
                    
    for(i=0;ceasarCipher[i] != '\0'; ++i)
    {
    letter = ceasarCipher[i];
            
        if(letter >= 'A' && letter <= 'Z')
        {
        letter = letter + key;
               
            if(letter > 'Z')
            {
            letter = letter - 'Z' + 'A' - 1;   
            }
                        
        ceasarCipher[i] = letter;        
        }       
    
            
    }
    return (ceasarCipher);
}
