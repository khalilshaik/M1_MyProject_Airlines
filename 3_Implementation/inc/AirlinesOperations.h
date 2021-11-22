/**
 * @file AirlinesOperations.h
 * @author your name (you@domain.com)
 * @brief Declaring the functions for user operations
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef AIRLINES_H /* IF NOT DEFINE THE BANKOPERATIONS_H*/

#define AIRLINES_H /* DEFINING THE BANKOPERATIONS_H*/
/* INCLUDING THE STRUCTURE_H */
int reservation(int passport,int name, int email);  
int cancel(int passport_no,int ticket);
int display_records(int passport,int name, int email, int seat_no);
int exit(int exit_records);

#endif
