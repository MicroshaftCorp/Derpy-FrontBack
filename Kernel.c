char message[]="Welcome To DErPi FroNtbakc!";


int c_main(void) {

 //Notice there is no underscore infront of our c_main function.

 //This is because the compiler automaticaly puts it there for us ;)


 char *source = message; //Pointer to our message we will print to the screen

 char *destination = (char *)0xB8000; //Pointer to the text video memory


 while (*source) {

		*destination++ = *source++; //Add 1 to the vid. memory offset, and save a character to it

		*destination++ = 7; } //Set the color of that character.

return 0;

}
