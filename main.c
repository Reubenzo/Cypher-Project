#include <stdio.h>
#include <math.h>

int main()

{   // Variable declaration is always first. //
        
    int i, operation1, operation2, key;         
    char ceasarCipher[1000], letter;
    char tmp;
    
    
    // First of all we are going to create a kind of menu that the user can select //
    // which operation they would like to perform. First we need a message //
    // to ask the user to enter a number for our 'Switch Case' to go off and excecute. //
    // We then assign the entered value to a variable so it can be given to the switch case. //

    
    printf("Please enter the operation code for the task you wish to perform:\n0) Encription\n1) Decription\n2) Decription without a key\n\n");
    scanf("%d", &operation1);
    
    
    
    switch(operation1)
    {
        // ********************************ENCRIPTION********************************************** //
        case 0:         printf("Please choose ENCRIPTION from the following options: \n");
                        printf("[1]Rotation Cipher or [2]Substitution Cipher \n\n------------\n\n");
                        scanf("%d", &operation2);
        if(operation2 == 1) // ------ ROTATION CIPHER -------- ??
        {
            
            
                    printf("Enter a message you wish to ENCRIPT in CAPITAL LETTERS:\n\n");
                    scanf("%c",&tmp);
                    fgets(ceasarCipher,1000,stdin);
                   
           
                    
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
                    printf("Your ENCRIPTED message: %s", ceasarCipher);
                 
                
        }
        else
        {
            // TEST //
            printf("Substitution enciption");
        }
        
                    
                 break;
     // ********************************************DECRIPTION*************************************** //   
            case 1:
            
                        printf("Please choose DECRIPTION from the following options: \n");
                        printf("[1]Rotation Cipher or [2]Substitution Cipher \n\n------------\n\n");
                        scanf("%d", &operation2);
                        
        if(operation2 == 1) // ----------ROTATION CIPHER ---------- //
        {
            
            
                    printf("Enter a message you wish to DECRIPT in CAPITAL LETTERS:\n\n");
                    scanf("%c",&tmp);
                    fgets(ceasarCipher,1000,stdin);
                   
           
                    
                    printf("Enter the key (i.e. shift amount of positions):\n\n");
                    scanf("%d", &key);
                    
                    for(i=0;ceasarCipher[i] != '\0'; ++i)
                    {
                    letter = ceasarCipher[i];
            
                        if(letter >= 'A' && letter <= 'Z')
                        {
                        letter = letter - key;
               
                            if(letter < 'A')
                            {
                            letter = letter + 'Z' - 'A' + 1;   
                            }
                        
                    ceasarCipher[i] = letter; 
                
                        }       
        
            
                    } 
                    printf("Your DECRIPTED message: %s", ceasarCipher);
      
        
                    
                  
        
                    
                 break;
                 
        }
        else
        {
            //TEST//
            printf("Substitution Decription");
        }
    // ********************************BRUTE DECRIPTION WITHOUT KEY************************************* //
        case 2:
        
         printf("Enter a message you wish to DECRIPT in CAPITAL LETTERS:\n\n");
                    scanf("%c",&tmp);
                    fgets(ceasarCipher,1000,stdin);
                    
                    for(i=0, key=0;ceasarCipher[i] != '\0', key <= 26; ++i, key++)
                    {
                    letter = ceasarCipher[i];
            
                        if(letter >= 'A' && letter <= 'Z')
                        {
                        letter = letter - key;
               
                            if(letter < 'A')
                            {
                            letter = letter + 'Z' - 'A' + 1;   
                            }
                        
                    ceasarCipher[i] = letter; 
                
                        }       
        
             printf("Possible decription #%d: %s\n\n", key, ceasarCipher);
                    } 
                   
      
        
                    
                  
        
                    
                 break;
    
    }
        
}
    
    
    
         
