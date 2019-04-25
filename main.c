#include <stdio.h>
#include <math.h>
int main()
 


{   // Variable declaration is always first. //
        
    int i, operation, key;         
    char ceasarCipher[600], letter;
    
    
    // First of all we are going to create a kind of menu that the user can select //
    // which operation they would like to perform. First we need a message //
    // to ask the user to enter a number for our 'Switch Case' to go off and excecute. //
    // We then assign the entered value to a variable so it can be given to the switch case. //

    
    printf("Please enter the operation code for the task you wish to perform:\n0) Encription\n1) Decription\n2) Statistical Analysis\n");
    scanf("%d", &operation);
    
    // The switch (below) will now recieve the code and go off to excecute the desired task. //
  
    switch(operation)
    {
        
        // Case 0 is Encription //
        case 0:     
                    printf("Enter a message you wish to encript:\n");
                    gets(ceasarCipher);
                    printf("Enter the key (i.e. shift amount of positions): ");
                    scanf("%d", &key);
                    
                    for(i=0;ceasarcipher[i] != '\0'; ++i)
                    {
                    letter = ceasarcipher[i];
            
                        if(letter >= 'A' && letter <= 'Z')
                        {
                        letter = letter + key;
               
                            if(letter > 'Z')
                            {
                            letter = letter - 'Z' + 'A' - 1;   
                            }
                        
                        ceasarcipher[i] = letter; 
                
                        }       
        
            
                    }           
        
        break;
        
        
        
        
        // Case 1 is Decription. //
        case 1: 
        break;
        // Case 2 is Frequency Analysis of how many times each letter occurs, useful to find the 'fingerprint' //
        case 2: 
        break;
        
       
        
    }
    

return 0;
}
