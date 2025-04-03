<h1>🎟️ Unreserved Ticket Booking System</h1>
<hr>
<h2>📌 Overview</h2>

<h3>The Unreserved Ticket Booking System is a simple C program that allows users to book general tickets for trains based on a predefined list of available options.</h3>
<hr>
<h2>🎯 Features</h2>
<h3>✅ Choose from four available trains</h3>
<h3>✅ Enter passenger details (Name, Age, Gender)</h3>
<h3>✅ Generates a formatted general ticket</h3>
<h3>✅ Repeats booking process until user exit</h3>
<hr>
<h2>🛠️ Tech Stack</h2>

<h3>Language: C</h3>

<h3>Compiler: GCC</h3>

<h3>Input Handling: Standard Input (stdin)</h3>
<hr>
📦 Installation & Usage

🔧 Compilation

gcc ticket_booking.c -o ticket_booking

🚀 Running the Program

./ticket_booking

📝 Sample Output
****************************************************************
              Unreserved Ticket Booking System
****************************************************************
Train              Time         Train No.
AMRITA EXPRESS     12:00         12365
RAJDHANI EXPRESS   01:00         16365
TRIUPATI EXPRESS   16:00         17365
PARASURAM EXPRESS  12:00         18365
Enter train no: 12365
Enter name: John Doe
Enter age: 25
Enter gender (M/F): M

***************************************************************
                  General Ticket
***************************************************************
Name: John Doe
Age: 25
Gender: M
Train name AMRITA EXPRESS
Train no 12365
**************************************************************

Do you want to repeat? (y/n): n
