#include <stdio.h>
#include <string.h>

/*
 * Headers
 */

void help();
void ls();
void add();
void rm();
void commands(const char *command);

/*
 * Show help message.
 */

void help()
{
  printf("\n");
  printf("  todo: A dead-simple todo cli app\n");
  printf("\n");
  printf("  Usage:\n");
  printf("\n");
  printf("    todo help                Print help\n");
  printf("    todo add Go shopping     Create a new todo item\n");
  printf("    todo ls                  Print all pending todo items\n");
  printf("    todo rm 1                Remove #1 item\n");
  printf("\n");
}

/*
 * List all todo items.
 */

void ls()
{
  printf("Sorry! \"ls\" is not implemented yet.\n");
}

/*
 * Add a new todo item.
 */

void add()
{
  printf("Sorry! \"add\" is not implemented yet.\n");
}

/*
 * Remove a todo item.
 */

void rm()
{
  printf("Sorry! \"remove\" is not implemented yet.\n");
}

/*
 * Coodinate CLI commands
 */

void commands(const char *command)
{
  if (strcmp(command, "help") == 0) {
    help();
  } else if (strcmp(command, "ls") == 0) {
    ls();
  } else if (strcmp(command, "add") == 0) {
    add();
  } else if (strcmp(command, "rm") == 0) {
    rm();
  } else {
    help();
  }
}

/*
 * Parse command line arguments.
 */

int main(int argc, char const *argv[])
{
  const char *command;
  if (argc < 2) {
    command = "ls";
  } else {
    command = argv[1];
  }

  commands(command);

  return 0;
}