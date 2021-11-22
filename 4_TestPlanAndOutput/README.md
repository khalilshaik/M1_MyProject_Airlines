**TEST PLAN:**

To start with, I have performed manual testing on the Airline Reservation System. Manual Testing is one of the oldest and rigorous methods of software testing. This testing strategy gives the best opportunity to check every page thoroughly and make sure it works in the expected manner. Due to the complexity of the various automation tools and the time available for testing. I preferred to use manual testing based on the fact that it is one of the best methods of testing suggested for a beginner.

After entered 4 which is exit function, it is storing all the records into file with all the passenger’s details in mufti record.

**Table no: High level test plan**

|**Test ID**|**Description**|**Exp I/P**|**Exp O/P**|**Actual Out**|**Type Of Test**|
| :-: | :-: | :-: | :-: | :-: | :-: |
|H\_01|Airline’s reservation|<p>Please choose from A1-A4</p><p>Choose: 5</p>|error|error|Requirement based|
|H\_02|Enter Passport number|` `Passport\_No:40020|0|0|Scenario based|
|H\_03|Invalid range of input|Password:3838882|-9|-9|Boundary based|
**Table no: Low level test plan**

|**Test ID**|**Description**|**Exp IN**|**Exp OUT**|**Actual Out**|**Type Of Test**|
| :-: | :-: | :-: | :-: | :-: | :-: |
|L\_01|Enter your passport\_ No\_Name\_E-mail.|<p>40020</p><p>Khalil</p><p>khalil@gmail.com</p>|Seat Booking Successful |Seat Booking Successful|Requirement based|
|L\_02|Enter your passport\_ No\_Name\_E-mail.|<p>40020</p><p>Khalil</p><p>khalil@gmail.com</p>|Seats full|Seats full|Scenario based|
|L\_03|Enter your passport No to delete record|45545|Passport number is wrong |Passport number is wrong|Scenario based|

