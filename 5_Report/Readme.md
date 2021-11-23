# Introduction

Originally, C language is developed from two previous languages, BCPL and B. BCPL which were developed in 1967 by Martin Richards as a language for wring operating systems and compilers. C was evolved from B by Dennis Ritchie at Bell Laboratories and it was implemented in 1972. It initially became widely known as the development language of the UNIX operating system. Lots of today’s leading operating systems are written in C and C++. C language is mostly hardware independent as it is possible to write C programs that are portable to most computers. 

Why we use c language C has been used successfully for each kind of programming problem thinkable from operating systems to spreadsheets to expert systems - and efficient compilers are accessible for machines ranging in power from the Apple Macintosh to the Cray supercomputers. the largest measure of C's success appears to be based on strictly sensible considerations:

The standard library concept;

the ease with those applications can be optimized by hand-coding isolated procedures;

a powerful and varied repertoire of operators;

the portability of the compiler;

ready access to the hardware once needed; 


## Assumptions

It is assumed that the program is Airline Reservation Systems:

A small airline has just purchased a computer for its new automated reservation system. The owner has asked to program the new system in C. It is required to write a program to assign seats on each flight of the airlines only place (capacity: 15 seats). The program should never assign a seat which is already assigned. If there’s no seat available, then print the message " the flight is full ".

After the flight is full and someone want to cancel the booking, it is displaying enter you’re the passport number you want to cancel it so after the passenger cancel it, the system directly free that place id someone want to book that seat.

Moreover, the system should bring a boarding pass indicating the persons' name, passport number and seat number as each seat is assigned, set the corresponding elements of array to 1 to indicate that seat is no longer available. 



## Design

Main menu

![](Aspose.Words.243999c6-0667-4366-84c2-706de68b99f9.001.png)

*Figure1: Main Menu*

When the program is started, the user will direct to the main menu.  The user will be required to select one of the four options. 

Reservation and cancel functions

![](Aspose.Words.243999c6-0667-4366-84c2-706de68b99f9.002.png)

*Figure 2 functions*

`                     `That is the flowchart for the reservation and cancel functions   

`                                                   `![](Aspose.Words.243999c6-0667-4366-84c2-706de68b99f9.003.png)                         

That is the flowchart for the displaying function 
