_______________
Data Structures
_______________

_________________________
What are Data Structures?
_________________________

_Data structures can be defined as an arrangement of collection of data items so
that they can be utilized efficiently, and operations on the data can be done
efficiently.

___________________________________________________
Where the data is kept? Where the programs will be?
___________________________________________________

_Inside the main memory during the execution of the program.

To gain more insights on:

_how applications deals with data structures inside the main-memory (RAM)
_how the data is stored on hard-disk drive/external storage
_how cpu executes the programs

Please refer back to Video "39. Introduction"

___________
Main-Memory
___________

_Memory is divided into smaller addressable units, that are called as bytes.
Thus, memory is divided into bytes.

_Every byte has its own address.

_Inside Main-Memory there are 3 sections: stack, heap, code-section

____________
Code-Section
____________

_Code-Section loads the machine code of a program. The size of the Code-Section

_____
Stack
_____

________________________________________________________________________________
void main()
{
  int a;        //2-bytes
  float b;      //4-bytes
}

________________________________________________________________________________

_According to the code snippet above, 6 bytes of memory will be allocated to the
"stack" where "a" occupies 2 bytes and "b" occupies 4 bytes.

_The block of memory that allocates both "a" and "b" belongs to the main
function is called as a "stack-frame"/"activation-record" of main-function.
This is called "static memory allocation".

_"stack-frame" is a subset of "stack"

_The size of the memory required by a function is decided at compile time only.

_Programs can access anything inside code-section and the stack.

If there are a sequence of function calls, then how the memory is allocated
inside the stack?

________________________________________________________________________________
int func1(int i)
{
  int a = i;
  return a;
}

void func2()
{
  int x;
  func1(x);
}

void main()
{
  func2();
  int y;
  int z = func1(y);
  float b;
}
________________________________________________________________________________

Here, in the code-sections:
_int func1(int i)
_void func2()
_void main()

        --------------------------------------------------------------------------------

                                                                                                -> Heap

        --------------------------------------------------------------------------------  _
                                                                                           |
        --------------------------------------------------------------------------------   |
func2   x                                                                                  |
        --------------------------------------------------------------------------------   |     -> Stack
func1   i, a                                                                               |
        --------------------------------------------------------------------------------   |
main    y, z, b                                                                            |
        --------------------------------------------------------------------------------  _|
        _Machine_code for func1
        _Machine_code for func2                                                                 -> Code-section
        _Machine_code for main
        --------------------------------------------------------------------------------

_Notice that the stack must be in orderly manner. The first function that is detected by the compiler
gets loaded to the function first and then the other function follows.

_Once "func2" has carried out its operations it will be deleted from the stack.

-        --------------------------------------------------------------------------------

                                                                                                  -> Heap

       --------------------------------------------------------------------------------   _
                                                                                           |
       --------------------------------------------------------------------------------    |
                                                                                           |
       --------------------------------------------------------------------------------    |     -> Stack
func1   i, a                                                                               |
       --------------------------------------------------------------------------------    |
main    y, z, b                                                                            |
       --------------------------------------------------------------------------------   _|
       _Machine_code for func1
       _Machine_code for func2                                                                 -> Code-section
       _Machine_code for main
       --------------------------------------------------------------------------------

_Once "func1" has carried out its operation it will be deleted from the stack too.

_The same happens when the main function has also completed all of it's tasks.

_When is being built it starts from bottom to top, and when it is being released it gets released
from top to bottom.

____
Heap
____

_"stack" memory is organised "heap" memory is unorganized.

_"heap" memory should be used like a resource, when required. It should also be
released when it is no longer required.

_programs cannot directly access heap memory

_How heap memory is accessed? Pointers!

________________________________________________________________________________
void main()
{
  int *p;

  p = new int[5];

}
________________________________________________________________________________

      ---------------------------------------------------------------------------------
       __ __ __ __ __
      |_p_|__|__|__|__|  int[5]                                                                   -> Heap
                            //remember ffx012 only points to the beginning of an array
      ---------------------------------------------------------------------------------   _
                                                                                           |
       --------------------------------------------------------------------------------    |
                                                                                           |
       --------------------------------------------------------------------------------    |     -> Stack
                                                                                           |
       --------------------------------------------------------------------------------    |
main    p   //ffx012                                                                       |
       --------------------------------------------------------------------------------   _|
       _Machine_code for main                                                                    -> Code-section
       --------------------------------------------------------------------------------

_It's a good practice to free the memory once it is no longer in use, to prevent
"memory-leak"
________________________________________________________________________________
In C/C++ number of bytes taken by a primitive datatype depends on the compiler, |
the operating system, and the hardware.                                         |
________________________________________________________________________________|
