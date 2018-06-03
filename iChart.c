#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<alloc.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<ctype.h>
#include<types.h>
#include<stat.h>

#define CGA 1
#define ENTRYOVER 1
#define ENTRYSTART 0
#define ESCAPE 27
#define END 79
#define LINE 1
#define XY 2

/*various menu definitions*/
/*character following ^ symbol is the hot key*/
char *mainmenu[]={ "^Data", "^Graph","^Files","^Exit"};
char *datamenu[]= { "^File", "^Keyboard","^Return" };
char *graphmenu[]={ "^Bar Chart","^Stacked chart","^Pie chart","^X Y chart","^Return" };
char *filesmenu[]={ "^Load", "^Save","^Print2,"^Return" };
char *keyboardmenu[]={ "^New data","^Edit data", "^Legend", "^Return"};
char *exitmenu[]={ "^Exit","^Shell","^Return"};
char *messages[]={"Main Menu", "Allows entry of data from file/keyboard", "Draws bar/stacked/X Y/pie chart","Loads/Saves/Prints a graph","Exit to DOS","Data Menu","Reads data from a file","Entry of data from keyboard", "Return to main menu", "Graph menu","Draws Bar chart","Draws stacked bar chart","Draws pie-chart","Reads data from a file","Entry of data from keyboard","Return to main menu""Graph Menu","Draws Bar Chart","Draws stacked bar chart", "Draws pie-chart","Draws X Y chart","Draws line chart","Return too main menu","File menu","Loads a graph","Saves a graph","Prints a graph","Return to main menu","File Menu","Loads a graph","Saves a graph","Prints a graph","Return to main menu","Keyboard Menu","Enter fresh data","Edit current data","Entry of leend","Return to Data Menu","Exit Menu","Exit to DOS","OS shell","Return to main menu","Chart Master","Memory Allocation Error","Press any key to continue...",

