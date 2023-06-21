# Project 0x16 - simple_shell :rock:
## simple_shell
* The C shell is an interactive command interpreter and a command programming language. It uses syntax that is similar to the C programming language. The csh command starts the C shell. When you log in, the csh command first searches the system-wide setup file /etc/csh.
* This is a collaborative project made by David James Taiye and Daniel Bassey Nyong, Students of Software Engineering at ALX/Holberton school. This Repo contains files for the **Simple_Shell Project**. The project requires us to develop our own UNIX command interpreter (shell).

![programming-language-c-shell-inscription-background-computer-code-modern-digital-technologies-training-154422384](https://user-images.githubusercontent.com/122806822/231424531-46a640af-9618-4b44-bae7-597e69ff0703.jpg)


## Table of contents :clipboard:

 - [File Structure]
 - [Mandatory Tasks]
 - [Advanced Tasks]
 - [Examples]
 - [Requirements]
 - [Features]
 - [Builtins]
 - [Contributors/Authors]

## File Structure :wrench:
| File Name                                     | Description                                                          |
|-------------------------------------------|--------------------------------------------------------------------|
| [README.md](README.md)                 | A Descriptive Illustration about the ALX-SE Shell_Project       |
| [prompt.c](prompt.c)                        | A function that prints '$' to standard output                          |
| [Contributors_Authors](Contributors_Authors) | Contributors who engaged in Creating this ALX-SE Simple Shell Project |
| [man_1_simple_shell](man_1_simple_shell)         | Simple SHell is a command language interpreter that executes commands read from the standard input or from a file |
| [record_history.c](record_history.c)            | This writes file with user inputs                                          |
| [path_finder.c](path_finder.c)                      | Search in $PATH for executable command                                |
| [string_handlers_functions_1.c](string_handlers_functions_1.c) | A function that writes the character to stdout          |
| [memory_handlers.c](memory_handlers.c)            | This reallocates a memory block using malloc and free                    |



## Mandatory Tasks :bulb:
 - [x] 0. README, man, AUTHORS
 - [x] 1. Betty would be proud
 - [x] 2. Simple shell 0.1
 - [x] 3. Simple shell 0.2
 - [x] 4. Simple shell 0.3
 - [x] 5. Simple shell 0.4
 - [x] 6. Simple shell 1.0
 - [x] 7. What happens when you type `ls -l \*.c` in the shell

## Advanced Tasks :computer:
 - [ ] 8. Test suite
 - [ ] 9. Simple shell 0.1.1
 - [ ] 10. Simple shell 0.2.1
 - [ ] 11. Simple shell 0.4.1
 - [ ] 12. Simple shell 0.4.2
 - [ ] 13. setenv, unsetenv
 - [ ] 14. cd
 - [ ] 15. ;
 - [ ] 16. && and ||
 - [ ] 17. alias
 - [ ] 18. Variables
 - [ ] 19. Comments
 - [ ] 20. help
 - [ ] 21. history
 - [ ] 22. File as input 

### Examples :goat:
Example of error with sh:
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with our program hsh:
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Requirements :shell:
This simple_shell project is designed to run on the Ubuntu 20.04 LTS using gcc, and can be compiled using the options -wall - werror -wextra -pedantic -std=gnu89
The code should use the [Betty style](https://github.com/holbertonschool/Betty).

## Features
* Display a prompt and wait for the user to type a command.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors
* Hand the EOF(Ctrl + D) condition.
* Handle the Ctrl +C to not terminate the shell.
* Handle th command line with arguments.
* Handle the PATH.
* Support the exit features.

## Builtins :house:
* exit 'terminates the shell'
* env 'display the environment'

## Contributors/Authors :teacher:
* **David James Taiye** - [Crazy-Hacker](https://github.com/Official0mega)
* **Daniel Bassey Nyong**   - [Danyhoney](https://github.com/Danyhoney)
