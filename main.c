#include <stdio.h>
#include <math.h>

int main()

{   // Variable declaration  //
        
    int i, k, operation1, operation2, key;
    // You will see char ceasarCipher is used in substitution, this was a mistake but would be tedious to ammend. //
    char ceasarCipher[1000], letter, alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  
    char tmp;
    
    
    // First of all we are going to create a kind of menu that the user can select //
    // which operation they would like to perform. First we need a message //
    // to ask the user to enter a number for our 'Switch Case' to go off and excecute. //
    // We then assign the entered value to a variable so it can be given to the switch case. //

    
    printf("Please enter the operation code for the task you wish to perform:\n0) Encription\n1) Decription\n2) Decription without a key\n\n");
    scanf("%d", &operation1);
    
    // Now which switch case operates depends on whether the user typed 0, 1, or 2. Switch cases work that if the variable (in this example) = 1 //
    // then it will go down to 'case 1:' and excecute everything after 'case 1:' until it hits 'break;'. //
    
    switch(operation1)
    {
        // ********************************ENCRIPTION********************************************** //
        case 0:         printf("Please choose ENCRIPTION from the following options: \n");
        
        // This assignment asks us to complete 2 different types of ciphers both encription and decription for each. Here we give a choice of which //
        // way the user wants to go by using either a Rotation Cipher (1), or a Substitution Cipher (2) //
                        
                        printf("[1]Rotation Cipher or [2]Substitution Cipher \n\n------------\n\n");
                        scanf("%d", &operation2);
                        
        // The if statement below says that if the variable 'operation2' = 1, then continue with the relevant code. We will see later that the // 
        // other option (if operation2 = 2) then it will execute the relevant Substitution Cipher code. //
        
        if(operation2 == 1) // ------ ROTATION CIPHER -------- //
        {
            
            
                    printf("Enter a message you wish to ENCRIPT in CAPITAL LETTERS:\n\n");
                    scanf("%c",&tmp);
                    fgets(ceasarCipher,1000,stdin);
                    
        // Above, if we read whats in the brackets backwards, its basically saying: Take what ever is in STDIN (standard input), with a maximum //
        // limit of 1000 characters, and store it in ceasarCipher. To my understanding it is very similar to scanf but is used for 'strings'. //
                   
           
                    
                    printf("Enter the key (i.e. shift amount of positions):\n\n");
                    scanf("%d", &key);
                    
        // Above, we are taking the desired shift in positions and assigning the value to the variable named key. //
        
        // Below is the backbone of the encription. The 'for' loop will continue to iterate until the array of ceasarCipher[i] does not equal a   //
        // 'zero' character. In other words it will go along to each letter of the sentence and add the 'key' UNTIL it hits the 'space' after the //
        // final letter. This is called a null terminator, which, "is a control character with value 0". Stack overflow has more if you wish. //
        
                    for(i=0;ceasarCipher[i] != '\0'; ++i)
                    {
        // Below, whatever i equals, indicates the letter the code is up to. //
        
                    letter = ceasarCipher[i];
                    
        // Below, we are wrapping the 'char's so that they will not be shifted into ASCII oblivion and stay within the confines of the capital   //
        // letter alphabet. //
        
                        if(letter >= 'A' && letter <= 'Z')
                        {
                        letter = letter + key;
               
                            if(letter > 'Z')
                            {
                            letter = letter - 'Z' + 'A' - 1;   
                            }
        // Before the loop finishes its iteration the ASCII value of letter is assigned into ceasarCipher[i].//
                        
                    ceasarCipher[i] = letter; 
                
                        }       
        
            
                    } 
        // Once the for loop is totally complete the shifted letters are now all stored in the string below. %s is the string data type symbol. //
        
                    printf("Your ENCRIPTED message: %s", ceasarCipher);
                 
                
        } // That close bracket to the left is the end of our IF statement. Below, the else statement represents where the start of the substitution //
          // encription would start. //
        
        else
        // --------------------------------SUBSTITUTION CIPHER---------------------- //
        // BROKEN and UNFINISHED //
        {
            
            printf("(Substitution Cipher: Enter a message you wish to ENCRIPT in CAPITAL LETTERS");
            scanf("%c",&tmp);
            fgets(ceasarCipher,1000,stdin);
            
            
            for(i = 0; ceasarCipher[i] != '\0'; i++)
            {
            printf("The message broken into parts: %c\n", ceasarCipher[i]);
        
            printf("The Substitution Cipher encrypted text: %s\n", ceasarCipher);
            
            }
        
        // The break statement below finishes our case. //
        
        break;
        
     // ********************************************DECRIPTION*************************************** //   
            case 1:
    
                        printf("Please choose DECRIPTION from the following options: \n");
                        printf("[1]Rotation Cipher or [2]Substitution Cipher \n\n------------\n\n");
                        scanf("%d", &operation2);
                        
        if(operation2 == 1) // ----------ROTATION CIPHER ---------- //
        {
         // The code of the decription of the rotation cipher is almost identicle to the encription however move your eyes to line 129. //   
            
                    printf("Enter a message you wish to DECRIPT in CAPITAL LETTERS:\n\n");
                    scanf("%c",&tmp);
                    fgets(ceasarCipher,1000,stdin);
                   
           
                    
                    printf("Enter the key (i.e. shift amount of positions):\n\n");
                    scanf("%d", &key);
                    
                    for(i=0;ceasarCipher[i] != '\0'; ++i)
                    {
                    letter = ceasarCipher[i];
            
                        if(letter >= 'A' && letter <= 'Z')
                        
        // Below, the mathematics of the code has been flipped to undo the encription. //
        
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
                    
        // You might notice its basically the exact same code just flipped signs (pretty well). //
        // Once again, the break statement ends our 'case'. //
                 
        }
            else
            {
            //TEST//
            printf("Substitution Decription");
            // Above is where I did not attempt because I foolishly did not give this assignment the time it deserved //
            }
        break;
        
        
    // ******************************** BRUTE DECRIPTION WITHOUT KEY IN PROGRESS ************************************* //
        case 2:
        
         printf("Enter a message you wish to DECRIPT in CAPITAL LETTERS:\n\n");
                    scanf("%c",&tmp);
                    fgets(ceasarCipher,1000,stdin);
    
    // Below was an attempt to use my ceasarCipher by adding a larger and larger key (limited to the size of the alphabet) to eventually //
    // produce a readable english message in capitals. However, as you will notice it doesnt work. //
    
                    for(i=0, key=0;ceasarCipher[i] != '\0', key <= 26; ++i, key++)
                    {
                    letter = ceasarCipher[i];
            
                        if(letter >= 'A' && letter <= 'Z')
                        {
                        letter = letter - key;
                        }
                            if(letter < 'A')
                            {
                            letter = letter + 'Z' - 'A' + 1;   
                            }
                        
                    ceasarCipher[i] = letter; 
                
                           
        
                    printf("Possible decription #%d: %s\n\n", key, ceasarCipher);
                    } 
                   
      
        
                    
                  
        
                    
                 break;
                 
        }
    
    }
        
}
    
    