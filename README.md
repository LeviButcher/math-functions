# Math-Functions
Basic math functions in C. Used for a quick demostration of using the Debugger and steps for setting up the debugger in Codeblocks.

Useful Links
* [How to use the debugger in Codeblocks](https://www.youtube.com/watch?v=h_r5ZfETRZQ)

## How to clone repo (or just download the zip)
* Go download and install [Git](https://git-scm.com/downloads)
* Click clone or dowload option on repo main page
* Click Use HTTPS if not already selected
* Copy url within box
* Open Powershell 
* Type `cd Desktop`
* Type `git clone` then paste url that was copied

**math-function will now exist on your desktop**


## Setting up the debugger

**You gotta have a debugger executable in order to run the debugger**

This should of came installed with your version of codeblocks, just have to set codeblocks to use it.

* Open CodeBlocks
* Click on _Settings_ (next to _Help_)
* Click on _Debugger_
* Click _Default_
* Paste `C:\Program Files (x86)\CodeBlocks\MinGW\gdb32\bin\gdb32.exe` into **Executable Path**

As long as you have installed the same verion of codeblocks that I have that path should be exactly the same for everyone.
Now debugging should work


## Running the Debugger

Directly underneath _DoxyBlocks_ is a red play button. This play button is the start of the debugging options you can choose.

#### Debuggion Options (From Left to Right):
1. Red Play Button -> Start Debugging
    1. Runs the app in debug mode
1. Run to cursor
    1. Runs to app to whever your cursor is currently add
1. Next Line
    1. Runs the app to the next line whever the program is currently stopped
1. Step Into
    1. Steps into a function is the line contains a function call
1. Step Out
    1. Immediately step out of a called function back to the caller
1. Stop Debugger
    1. Stops the debugger
1. Debugging Windows
    1. Contains a bunch of useful tools to use during debugging
  
There is **next instruction** and **step into instruction** but I don't think you will need them. 

### Setting BreakPoints
  breakpoints are specific places in your program that you are telling the debugger you would like to stop at. 
  
  To set a breakpoint click directly to the right of a line number within codeblocks.
  A red dot will appear meaning you were successful
  
#### Remove a BreakPoint
  Just click on the red dot again and it will go away
  
  
 
# Watches
  This is the most important and useful thing when debugging.
  
  Watches lets you see the value of variables during the executing of your program.
  
  How to Open the watch window:
  1. Click on the Debugging Windows Option (Next to stop debugging)
  1. Click on _Watches_
  
  Now this watch window will let you see the values of any local variables during execution. 
  
  You add variables to be watched that aren't in local scope. 
  
  Add a variable to watch:
  1. Have debug running
  1. Right click over a variable
  1. Click the Watch '{Variable Name}' option
  
  Now you will be able to _watch_ this variable change during the execution of the program. 

