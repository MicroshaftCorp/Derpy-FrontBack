[bits 32] 


SECTION .text


EXTERN _c_main ;Reference to our main function in the c code.


start:

 call _c_main 
 jmp $ 
