-x [language filename]
ignore the suffix of the filename, set the type of the file.
Value : 'c', 'objective-c', 'c-header', 'c++', 'cpp-output', 'assembler', and 'assembler-with-cpp'.
Example : gcc -x c hello.pig

-x none
switch off the manuall setup of the file type.
Example : gcc -x c hello.pig -x none hello2.c 

-c
only do the pre-process, generate the obj file(.o).

-S
only do the pre-process, compile and assemble, generate the assemble code(.s).

-E
only do the pre-process, but do not generate the file, we need to redirect the result to another file.
Example : gcc -E hello.c > pianoapan.txt

-o
setup the result filename.

-include file 
include any file
gcc hello.c -include /root/pianopan.h

-I[dir]
setup the include search folder.

-I-
do not search the privously include search folder.

-C
do not remove any comments.

-M
generate all relativ files.

-g
generate debug info.

-static 
forbid dynamic library link.

