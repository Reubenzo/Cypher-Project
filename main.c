#include <stdio.h>
#include <math.h>

int main()

{   // Variable declaration is always first. //
        
    int i, operation1, operation2, key;         
    char ceasarCipher[100], letter;
    
    
    // First of all we are going to create a kind of menu that the user can select //
    // which operation they would like to perform. First we need a message //
    // to ask the user to enter a number for our 'Switch Case' to go off and excecute. //
    // We then assign the entered value to a variable so it can be given to the switch case. //

    
    printf("Please enter the operation code for the task you wish to perform:\n0) Encription\n1) Decription\n2) Decription without a key\n\n");
    scanf("%d", &operation1);
    
            char tmp;
            scanf("%c",&tmp);
    if(operation1 != 0||1||2)
    {
        printf("ERROR: That is not a task code");
    }
    
    else
    {
    
    
    switch(operation1){
        
        case 0:         printf("Please choose and enter key from the following options: \n");
                        printf("[1]Rotation Cipher or [2]Substitution Cipher \n\n------------\n\n");
                        scanf("%d", &operation2);
        
        if(operation2 == 1)
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
                        }

                        if(letter > 'Z')
                        {
                            letter = letter - 'Z' + 'A' - 1;   
                        }
                        
                    ceasarCipher[i] = letter;        
                    }
                    
         printf("Your encripted message: %s", ceasarCipher); 
                    
         }
         
         
        else if(operation2 == 2)
     
        {   
        
        //SUBSTITUTION ENCRIPTION CODE HERE  
        
        }
    
            else
            {
            printf("No input detected...");
            }
    
         
    break;
         
    
    
            
                    }
       
    
       
    }    

        return 0;
    }
    




    

