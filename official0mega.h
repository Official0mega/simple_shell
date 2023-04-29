/*
 * File_name: official0mega.h
 * Created: 22th of April, 2023
 * Auth: David James Taiye (Official0mega)
 * Size: undefined
 * Project: ALX-SE_Simple-Shell
 * Status: submitted.
 */



#ifndef OFFICIAL0MEGA_H
#define OFFICIAL0MEGA_H

/***** MACROS *****/


/**
 * These are custom-defined macros
 * which after defined, can be called from anywhere within our program.
 */

#define PRINT(c) (write(STDERR_FILENO, c, _strlen(c)))
#define BUFSIZE 10240
#define DELIMITER " \t\r\n\a"




/*** STANDARD LIBRARIES ***/


/**
 * These are libraries collections of functions and variables 
 * need for our codes to run successfully.
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>



/******** STRING HANDLER FUNCTIONS **********/


/**
 * This allows us to manipulate, compare, and search through strings,
 * responsible in managing compiled strings.
 * 
 */

char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
void array_rev(char *arr, int len);
int intlen(int num);
char *_itoa(unsigned int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);



/*********** MEMORY HANDLERS ***********/

/**
 * functions that are responsible in managing dynamic memory allocation,
 * and deallocation. Also responsible in making sure Memory is allocated,
 * and released in a safe and efficient manner.
 */

void free_env(char **env);
void *fill_an_array(void *a, int el, unsigned int len);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_calloc(unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_all(char **input, char *line);



/****** MISCELLANEOUS AND INPUT FUNCTIONS *******/

/**
 * These allows us to take input from users.
 * Rest functions that do not fit in on all the pre-listed categories.
 * of my custom program.
 */

char *_getline();
char *space(char *str);
char *enter(char *string);
void hashtag_handler(char *buff);
void prompt(void);
unsigned int check_delim(char c, const char *str);
char *_strtok(char *str, const char *delim);
int history(char *input);
char **separator(char *input);



/****** FILE ARGUMENT HANDLER FUNCTIONS ******/

/**
 * These are function handlers that responsible in specifying how my custom
 * shell should be processed.
 */

void read_file(char *file, char **argv);
void treat_file(char *line, int count, FILE *fp, char **argv);
void exit_bul_for_file(char **cmd, char *line, FILE *fd);




/****** PARSED ARGUMENT HANDLER FUNCTIONS *****/

/**
 * This function provide ways to manage different environments.
 */

char **parse_cmd(char *input);
int handle_builtin(char **cmd, int er);
int check_cmd(char **cmd, char *input, int c, char **argv);
void signal_to_handle(int sig);



/******* ERROR HANDLERS ******/

/**
 * These are ways of dealing with any errors that may occur during the running
 * of my custom program.
 */

void print_error(char *input, int counter, char **argv);
void _prerror(char **argv, int c, char **cmd);
void error_file(char **argv, int c);



/****** ENVIRONMENT HANDLERS ******/

/**
 * This function provide ways to manage different environments.
 */
 
extern char **environ;
void create_envi(char **envi);
void free_env(char **env);




/****** PRINTING FUNCTIONS *****/

/**
 * This functions used to display information (texts) on the screen.
 */
 
void print_number(unsigned int n);
void print_number_int(int n);
int print_echo(char **cmd);




/******* PATH FINDER *******/

/**
 * algorithms used to find the shortest path between two points.
 */
 
int path_cmd(char **cmd);
char *build(char *token, char *value);
char *_getenv(char *name);




/******* HELP HANDLERS *******/

/**
 * This is a function help handler can provide help
 * with some texts or instructions to the user.!
 */

void help_env(void);
void help_setenv(void);
void help_unsetenv(void);
void help_history(void);
void help_all(void);
void help_alias(void);
void help_cd(void);
void help_exit(void);
void help_help(void);
int display_help(char **cmd, __attribute__((unused))int st);



/****** BUILTIN COMMAND HANDLERS AND EXECUTE ******/

/** The Command Handler's  Job is to Validate an Incoming Command,
 * and either accept or reject it.
 * If the command is accepted it must emit one or more events.
 * If it is rejected, or command processing fails, it should return,
 * with one or more reasons for failure.
 */

int check_builtin(char **cmd);
int handle_builtin(char **cmd, int st);
void exit_bul(char **cmd, char *input, char **argv, int c,
		int stat);
int change_dir(char **cmd, __attribute__((unused))int st);
int dis_env(__attribute__((unused)) char **cmd,
		__attribute__((unused)) int st);
int echo_bul(char **cmd, int st);
int history_dis(__attribute__((unused))char **c,
		__attribute__((unused)) int st);



/****** BUILT-IN COMMANDS STRUCT *****/

/**
 * struct _builtin - Defines a struct that contains built-in commands
 * with their respective implementation functions
 * @command: - Built-in command
 * @function: - Pointer to custom functions that have
 * similar functionalities as the built-in commands
 */
typedef struct _builtin
{
	char *command;
	int (*function)(char **line, int st);
} builtin;


#endif
