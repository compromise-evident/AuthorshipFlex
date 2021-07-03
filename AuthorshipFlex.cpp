/// AuthorshipFlex - bring your own function to Authorship.
/// Nikolay Valentinovich Repnitskiy - License: WTFPLv2+ (wtfpl.net)


/*Bare bones of the current Authorship: github.com/compromise-evident/Authorship
Your functions must be 50 elements, and keys--1,000.  Elements must be  0 to 94.
Decryption difficulty is not guaranteed without the original Authorship function
or steps down from all-way functions. See the pdf proof file:  Authorship/Other.
 ______________________________________________________________________________
/                                                                              \
|                                                                              |
|                           Fill arrays on line  177                           |
|                                                                              |
|                           Test array  on line 1180                           |
|                                                                              |
\______________________________________________________________________________/



This is  endless evidence;  get a number only you modify--which anyone verifies.
Please generate and publish a personal Authorship number before being subject to
censorship or worse. This way the public can trust number ownership.  And on the
day you become a governmental threat,  the public inquires about your well being
after which--you modify your number. Given that only you can modify your number,
and given that the public or verifying party is here-given the ability to verify
your modification,  we can rest assured that any further correspondence from you
is not impersonation. Additionally, you can insert data, messages, links, & hash
for any authentication event--meaning information source can be trusted. And all
old numbers & public files can be permanently destroyed on verification.  Always
generate and publish extra numbers at once for backups. And backup before using.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    Authorship.public files can be pasted to and downloaded from stikked.ch

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Proof of life.
 * User authentication.
 * Canary update authentication.
 * Data, author, and version control authentication.
 * Unretentive suspend-able untraceable anonymous cryptocurrency
   (publicly-verifiable authorized-only withdrawal/ownership hand-over.)
 * Untraceable anonymous fair trade over any network
   (cryptographic solution to the Prisoner's Dilemma.)
 * Group and military authorization.
 * Animal theft management.
 * Voter fraud prevention.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 5 sample notes you may enter for the 80-character user message when modifying:

Migrating to Authorship 7.0.0. My new # is mEt@Rn:7#`YAzaI'|_@MqE/w2>Jz"_L+

This user is migrating to Authorship version 7 and their new number is included.
Here, you are asked to manually create an Authorship.number text file using this
new number, where you may include the version information for extra file safety.
Super-flexibility  means you can move to completely different foreign authorship
systems or hot-swap functions with riddles of any subject and still have the old
numbers running redundantly. You can detail instructions using this next sample:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
See 9402B file: 57ca2df105eb0cc67ba134c559f8a6fa55c1ae609a8897385f2ca96d935d467a

Here, the user included the sha256sum to a  9,402-byte file uploaded separately.
That file is strongly tied to this user and may contain links to damaging leaks.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Give 2.0000000000000000000000000000000000000 to 3HrGZ%_Mvj0!Ca=SctS.r>"GJl3g6COc

This user wants  two coins subtracted from their number, and added to the number
in the message. Numbers may have goods and ideas assigned to them in any ledger.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Ownership hand-over to 73sty(C%yowImHEn+Z#1vXjsh&vf9z"@

And this user handed their modification authorization over to someone anonymous.
The anonymous user privately generated a new number and shared it with the other
party. This other party simply expressed that number in their  message and those
verifying the event overwrite the modified number with the number in the message
meaning anything assigned to the number always belongs to them who can prove it.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Trading with Anon28849: a89TI^\i!#7Mv#'e8:/Mt]S}OQ74mS@y

Finally,  Alice had anonymously contacted Bob,  inquiring to trade numbers. Both
parties agreed  and began modifying their numbers--pausing just before  entering
their user message. Once they have exchanged their NEW numbers,  both insert the
sample message where Alice trades with Bob's NEW number and Bob with hers. After
finishing number modification, both their Authorship.public files are published.
If both messages coincide, their numbers are overwritten with numbers from their
user message. Otherwise both continue as usual with at least one party having to
modify only to have no real effect.  Trade is always either fair or nonexistent.
This symmetric method immediately shows verifying parties which numbers to seek.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Authorship.number     (Storage for their Authorship number,                32  B
                      updates as you verify their published files.)
Authorship.public     (Your events published, and theirs--downloaded.    ~613 kB
                      This updates YOUR new number on  THEIR device,
                      and updates  THEIR new number on YOUR device.)
Authorship.private    (Dynamic storage for your one-time keys. Makes     ~1.1 MB
                      file Authorship.public upon modification then
                      overwrites this with new functions and keys.)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
How to run the program  -  Software package repositories for GNU+Linux operating
systems have all the tools you can imagine. Open a terminal and use this command
as root to install Geany and g++ on your computer: apt install geany g++   Geany
is a fast & lightweight text editor and Integrated Development Environment where
you can write and run code. g++ is the GNU compiler for C++ which allows written
code to run. The compiler operates in the background and displays errors in your
code as you will see in the lower Geany box. Make a new folder somewhere on your
machine. Paste this code into Geany. For clarity in auditing, enable indentation
guides: go to View >> Show Indentation Guides. Save the document as anything.cpp
within the newly-created folder. Use these shortcuts to run the program: F9, F5.
You may paste over this code with other  .cpp files, or open a new tab & repeat.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
How to make an executable with g++  -  Save this program as anything.cpp, open a
terminal, and type g++ then space. Drag & drop this saved file into the terminal
and its directory will be  appended to your pending entry. Click on the terminal
and press enter.   a.out now resides in the user directory, you may rename it to
anything.  To run that executable, simply drag and drop it into a terminal, then
click on the terminal and press enter.  Reminder:  executable's effect-directory
is the user directory on your machine, for example:  /home/nikolay    Enjoy. */

#include <fstream>
#include <iostream>
using namespace std;

int main() //                                                                                                        |
{	bool bulk_verification_efficiency = false; /* DEFAULT=FALSE ELSE NO PLAINTEXT FILES.       Octet if broken >     |
	    By default Authorship deals with files containing the standard 95 printable ASCII                            |
	    characters 32 to 126  (+13 & 10)  allowing any user to visually observe all files
	    but more so--to share  .public  files as plaintext via paste bins like stikked.ch
	    For example, the implementation generates values 0 - 94 then adds 32 upon writing
	    to file. And subtracts 32 upon reading from file.  All files are inter-compatible
	    given the bulk-verification variable is changed where needed. If true, characters
	    are not adjusted therefore  number modification verification  takes significantly
	    less time if processing bulk. All files but  Authorship.number  are affected.*///                            |
	bool sector_accident_detection = true; /* DEFAULT=TRUE ELSE NO FILE INTEGRITY TESTS.      ~Fatal if broken >     |
	    Program writes to disk, reads it back, and compares it to RAM. Fails on mismatch.                            |
	    All files are affected. Implement custom  .number integrity tests for currencies.
	    This does not affect verification speed since that requires matching 32 char. */
	
	cout << "\n(AuthorshipFlex) - bring your own function\n\n"
	
	     << "(1) Create - get a number only you can modify--which anyone can verify.\n"
	     << "(2) Modify - needs file Authorship.private. Creates Authorship.public.\n"
	     << "(3) Verify - needs their files Authorship.public (rename if needed) and\n"
	     << "             Authorship.number (32 char you retain, create file if needed.)\n\n"
	
	     << "Backup files temporarily! Enter option: ";
	
	int user_option; cin >> user_option;
	ifstream in_stream;
	ofstream out_stream;
	
	
	
	
	
	//_____________________________________________________________________________________________________________________
	//__________________________________________________GET_FIRST_NUMBER__________________________________________________/
	if(user_option == 1)
	{	//Checks if files already exists.
		bool existence_of_file_Authorship_number  = false;
		bool existence_of_file_Authorship_private = false;
		in_stream.open("Authorship.number");  if(in_stream.fail() == false) {existence_of_file_Authorship_number  = true;} in_stream.close();
		in_stream.open("Authorship.private"); if(in_stream.fail() == false) {existence_of_file_Authorship_private = true;} in_stream.close();
		
		if((existence_of_file_Authorship_number  == true)
		&& (existence_of_file_Authorship_private == true))
		{cout << "\nFiles Authorship.number and Authorship.private already exist.\n"; return 0;}
		
		if(existence_of_file_Authorship_number  == true) {cout << "\nFile Authorship.number already exists.\n";  return 0;}
		if(existence_of_file_Authorship_private == true) {cout << "\nFile Authorship.private already exists.\n"; return 0;}
		
		
		
		
		
		unsigned char functions[50400] = {0};
		unsigned char keys   [1008000] = {0};
		
		//Fill      keys[] with 1,008 contiguous 1,000-character keys. Use only values 0 to 94 for each element.
		//Fill functions[] with 1,008 contiguous 50-character functions (encrypted using the corresponding keys.) Use only values 0 to 94 for each element.
		//(These same two requirements also sit in option 2 on line 386 just like they are here--this is repeated to produce new random keys & functions.)
		
		//Generates deductive lossy compression of the 1,008 functions.
		long long deductive_lossy_compression[4]; //4 16-digit integers strung together, unique compression for each.
		long long snapshots[4];                   //Same but takes snapshots of compression, applies to compression after.
		for(int a = 0; a < 4; a++) {deductive_lossy_compression[a] = 5555555555555555; snapshots[a] = 5555555555555555;}
		
		for(int a = 0; a < 4; a++)
		{	for(int b = 0; b < 50400; b++)
			{	deductive_lossy_compression[a] += functions[b];
				deductive_lossy_compression[a] *= (a + 2);
				deductive_lossy_compression[a] %= 10000000000000000;
				
				//Takes snapshots of the compression as it evolves over time.
				if((b == 10000) || (b == 20000) || (b == 30000) || (b == 40000))
				{	snapshots[a] += deductive_lossy_compression[a];
					snapshots[a] %= 10000000000000000;
				}
			}
			
			//Applies snapshots to last stage of compression per integer.
			deductive_lossy_compression[a] += snapshots[a];
			deductive_lossy_compression[a] %= 10000000000000000;
			
			//Ensures all 4 compression integers are 16 digits long.
			if(deductive_lossy_compression[a] < 1000000000000000) {deductive_lossy_compression[a] += 1000000000000000;}
		}
		
		//Converts deductive_lossy_compression[] to 32 characters (1 char for every two contiguous digits.)
		unsigned char number[32];
		int  number_write_bookmark = 0;
		
		for(int a = 0; a < 4; a++)
		{	number[number_write_bookmark] =  (deductive_lossy_compression[a] / 100000000000000);        number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /   1000000000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /     10000000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /       100000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /         1000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /           10000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /             100) % 100); number_write_bookmark++;
			number[number_write_bookmark] =  (deductive_lossy_compression[a]                    % 100); number_write_bookmark++;
		}
		
		//Applies snapshots to the last character of the number.
		for(int a = 0; a < 4; a++) {number[31] += (snapshots[a] % 100); number[31] %= 100;}
		
		//Fixes number, it is now complete.
		//Collisions via brute-force is futile; inputs are well-tested for additional properties therefore 32 char
		//is over-kill indeed. 94^32 = 1380674536088650126365233338290905239051505147118049339937652736 or ~10^64.
		for(int a = 0; a < 32; a++)
		{	if(number[a] == 0) {number[a]++;}     //Ensures no spaces.
			if(number[a] > 94) {number[a] -= 94;} //Ensures no values > 94.
		}
		
		//Writes number to file Authorship.number.
		out_stream.open("Authorship.number");
		for(int a = 0; a < 32; a++) {out_stream.put(number[a] + 32);}
		out_stream.close();
		
		//Writes functions and keys to file Authorship.private.
		out_stream.open("Authorship.private");
		out_stream << "DO NOT PUBLISH! Authorship.private v6.0.1=\r\n\r\n"; //46-byte header must be. Use "\r\n" for all returns (for max compatibility.)
		if(bulk_verification_efficiency == false)
		{	for(int a = 0; a <   50400; a++) {out_stream.put(functions[a] + 32);} out_stream << "\r\n";
			for(int a = 0; a < 1008000; a++) {out_stream.put(keys[a] + 32);}
		}
		else
		{	for(int a = 0; a <   50400; a++) {out_stream.put(functions[a]);} out_stream << "\r\n";
			for(int a = 0; a < 1008000; a++) {out_stream.put(keys[a]);}
		}
		out_stream.close();
		
		//Tests file integrity. This entire if-statement can be removed.
		if(sector_accident_detection == true)
		{	char temp_file_byte;
			bool sector_accident = false;
			
			//Tests file Authorship.number.
			in_stream.open("Authorship.number");
			for(int a = 0; a < 32; a++)
			{	in_stream.get(temp_file_byte);
				if((temp_file_byte - 32) != number[a]) {sector_accident = true; break;}
			}
			in_stream.close();
			
			//Tests file Authorship.private.
			in_stream.open("Authorship.private");
			for(int a = 0; a < 46; a++) {in_stream.get(temp_file_byte);} //As the 46-byte headers can change, they are skipped.
			
			//...For functions.
			if(bulk_verification_efficiency == false)
			{	for(int a = 0; a < 50400; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte - 32) != functions[a]) {sector_accident = true; break;}
				}
			}
			else
			{	for(int a = 0; a < 50400; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte) != functions[a]) {sector_accident = true; break;}
				}
			}
			
			//...For return carriage and new line after functions. temp_file_byte not adjusted; "\r\n" was written regardless of bulk_verification_efficiency.
			in_stream.get(temp_file_byte); //Tests if '\r' exists at the end of 1,008 functions.
			if(temp_file_byte != '\r') {sector_accident = true;}
			in_stream.get(temp_file_byte); //Tests if '\n' exists after the 'r'.
			if(temp_file_byte != '\n') {sector_accident = true;}
			
			//...For keys.
			if(bulk_verification_efficiency == false)
			{	for(int a = 0; a < 1008000; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte - 32) != keys[a]) {sector_accident = true; break;}
				}
			}
			else
			{	for(int a = 0; a < 1008000; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte) != keys[a]) {sector_accident = true; break;}
				}
			}
			in_stream.close();
			
			if(sector_accident == true)
			{	remove("Authorship.number");
				remove("Authorship.private");
				
				cout << "\n\n\nBad sectors! There's something wrong with your storage device.\n\n"
				
				     << "For a quick fix, fill your storage device with a few gigabytes worth of any\n"
				     << "data then try this again. And do not disturb that dummy data as its purpose\n"
				     << "is to consume bad sectors and abused parts of the storage device.\n\n";
				
				return 0;
			}
		}
		
		//Overwrites RAM of array: unsigned char keys[1008000].
		for(int a = 0; a < 1008000; a++) {keys[a] = 0; keys[a] = 255;}
		
		cout << "\n\nPublish the contents of Authorship.number (32 characters.)\n"
		     << "Please include the Authorship version used, and your name or tag.\n"
		     << "(Not needed once published; verifying parties update it as you modify.)\n"
		     << "Guardedly cache Authorship.private. It contains dynamic one-time data.\n\n";
	}
	
	
	
	
	
	//_____________________________________________________________________________________________________________________
	//____________________________________________________MODIFY_NUMBER___________________________________________________/
	else if(user_option == 2)
	{	/* Basic layout:
		
		1. Loads Authorship.private file.
		2. Overwrites Authorship.private file with new info.
		3. Displays user's new number and user enters or omits a message of up to 80 characters.
		4. Selectively writes that old private info to a new .public file so as to symbolize the new number and message from the previous step.
		
		You can modify using a private file created with bulk_verification_efficiency ON or OFF.
		Your new private file, however, is still affected by that boolean variable. */
		
		//Checks if file Authorship.private is present.
		in_stream.open("Authorship.private");
		if(in_stream.fail() == true)
		{	in_stream.close();
			
			cout << "\nAuthorship.private is missing or misspelled. Copy and paste it into the\n"
			     << "folder from which you run this Authorship program. If this is an executable file\n"
			     << "running in the terminal, its effectiveness-directory is the user folder on this\n"
			     << "machine such as: /home/nikolay--where Authorship.private should be placed.\n"
			     << "Continue? y/n: ";
			
			char wait;
			cin >> wait;
			if(wait != 'y') {return 0;}
		}
		in_stream.close();
		
		in_stream.open("Authorship.private");
		if(in_stream.fail() == true) {in_stream.close(); cout << "\nCannot continue without Authorship.private, program ended.\n"; return 0;}
		char sniffed_one_file_character_Authorship_private;
		in_stream.get(sniffed_one_file_character_Authorship_private);
		if(in_stream.eof() == true)  {in_stream.close(); cout << "\nAuthorship.private is empty, program ended.\n"; return 0;}
		in_stream.close();
		
		//Loads file Authorship.private. bulk_verification_efficiency is dormant here; bytes will be written (selectively) just as read-in.
		char old_functions[50400];
		char old_keys   [1008000];
		char header_waste;
		in_stream.open("Authorship.private");
		for(int a = 0; a < 46; a++) {in_stream.get(header_waste);} //Skips through the 46-character header.
		for(int a = 0; a < 50400; a++) {in_stream.get(old_functions[a]);}
		in_stream.get(header_waste); in_stream.get(header_waste); //Skips the "\r\n" characters after the 1,008 functions.
		for(int a = 0; a < 1008000; a++) {in_stream.get(old_keys[a]);}
		in_stream.close();
		
		
		
		
		
		//The following block-bunch is a perfect snippet of option 1 except no managing of number FILE in any way (not used here.)
		unsigned char functions[50400] = {0};
		unsigned char keys   [1008000] = {0};
		
		//Fill      keys[] with 1,008 contiguous 1,000-character keys. Use only values 0 to 94 for each element.
		//Fill functions[] with 1,008 contiguous 50-character functions (encrypted using the corresponding keys.) Use only values 0 to 94 for each element.
		
		//Generates deductive lossy compression of the 1,008 functions.
		long long deductive_lossy_compression[4]; //4 16-digit integers strung together, unique compression for each.
		long long snapshots[4];                   //Same but takes snapshots of compression, applies to compression after.
		for(int a = 0; a < 4; a++) {deductive_lossy_compression[a] = 5555555555555555; snapshots[a] = 5555555555555555;}
		
		for(int a = 0; a < 4; a++)
		{	for(int b = 0; b < 50400; b++)
			{	deductive_lossy_compression[a] += functions[b];
				deductive_lossy_compression[a] *= (a + 2);
				deductive_lossy_compression[a] %= 10000000000000000;
				
				//Takes snapshots of the compression as it evolves over time.
				if((b == 10000) || (b == 20000) || (b == 30000) || (b == 40000))
				{	snapshots[a] += deductive_lossy_compression[a];
					snapshots[a] %= 10000000000000000;
				}
			}
			
			//Applies snapshots to last stage of compression per integer.
			deductive_lossy_compression[a] += snapshots[a];
			deductive_lossy_compression[a] %= 10000000000000000;
			
			//Ensures all 4 compression integers are 16 digits long.
			if(deductive_lossy_compression[a] < 1000000000000000) {deductive_lossy_compression[a] += 1000000000000000;}
		}
		
		//Converts deductive_lossy_compression[] to 32 characters (1 char for every two contiguous digits.)
		unsigned char number[32];
		int  number_write_bookmark = 0;
		
		for(int a = 0; a < 4; a++)
		{	number[number_write_bookmark] =  (deductive_lossy_compression[a] / 100000000000000);        number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /   1000000000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /     10000000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /       100000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /         1000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /           10000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /             100) % 100); number_write_bookmark++;
			number[number_write_bookmark] =  (deductive_lossy_compression[a]                    % 100); number_write_bookmark++;
		}
		
		//Applies snapshots to the last character of the number.
		for(int a = 0; a < 4; a++) {number[31] += (snapshots[a] % 100); number[31] %= 100;}
		
		//Fixes number, it is now complete.
		//Collisions via brute-force is futile; inputs are well-tested for additional properties therefore 32 char
		//is over-kill indeed. 94^32 = 1380674536088650126365233338290905239051505147118049339937652736 or ~10^64.
		for(int a = 0; a < 32; a++)
		{	if(number[a] == 0) {number[a]++;}     //Ensures no spaces.
			if(number[a] > 94) {number[a] -= 94;} //Ensures no values > 94.
		}
		
		//Writes functions and keys to file Authorship.private.
		out_stream.open("Authorship.private");
		out_stream << "DO NOT PUBLISH! Authorship.private v6.0.1=\r\n\r\n"; //46-byte header must be. Use "\r\n" for all returns (for max compatibility.)
		if(bulk_verification_efficiency == false)
		{	for(int a = 0; a <   50400; a++) {out_stream.put(functions[a] + 32);} out_stream << "\r\n";
			for(int a = 0; a < 1008000; a++) {out_stream.put(keys[a] + 32);}
		}
		else
		{	for(int a = 0; a <   50400; a++) {out_stream.put(functions[a]);} out_stream << "\r\n";
			for(int a = 0; a < 1008000; a++) {out_stream.put(keys[a]);}
		}
		out_stream.close();
		
		//Tests file integrity. This entire if-statement can be removed.
		if(sector_accident_detection == true)
		{	char temp_file_byte;
			bool sector_accident = false;
			
			//Tests file Authorship.private.
			in_stream.open("Authorship.private");
			for(int a = 0; a < 46; a++) {in_stream.get(temp_file_byte);} //As the 46-byte headers can change, they are skipped.
			
			//...For functions.
			if(bulk_verification_efficiency == false)
			{	for(int a = 0; a < 50400; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte - 32) != functions[a]) {sector_accident = true; break;}
				}
			}
			else
			{	for(int a = 0; a < 50400; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte) != functions[a]) {sector_accident = true; break;}
				}
			}
			
			//...For return carriage and new line after functions. temp_file_byte not adjusted; "\r\n" was written regardless of bulk_verification_efficiency.
			in_stream.get(temp_file_byte); //Tests if '\r' exists at the end of 1,008 functions.
			if(temp_file_byte != '\r') {sector_accident = true;}
			in_stream.get(temp_file_byte); //Tests if '\n' exists after the 'r'.
			if(temp_file_byte != '\n') {sector_accident = true;}
			
			//...For keys.
			if(bulk_verification_efficiency == false)
			{	for(int a = 0; a < 1008000; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte - 32) != keys[a]) {sector_accident = true; break;}
				}
			}
			else
			{	for(int a = 0; a < 1008000; a++)
				{	in_stream.get(temp_file_byte);
					if((temp_file_byte) != keys[a]) {sector_accident = true; break;}
				}
			}
			in_stream.close();
			
			if(sector_accident == true)
			{	remove("Authorship.private");
				
				cout << "\n\n\nBad sectors! There's something wrong with your storage device.\n\n"
				
				     << "For a quick fix, fill your storage device with a few gigabytes worth of any\n"
				     << "data then try this again. And do not disturb that dummy data as its purpose\n"
				     << "is to consume bad sectors and abused parts of the storage device.\n\n";
				
				return 0;
			}
		}
		
		//Overwrites RAM of array: unsigned char keys[1008000].
		for(int a = 0; a < 1008000; a++) {keys[a] = 0; keys[a] = 255;}
		
		
		
		
		
		//Prints number and gets the user's message.
		cout << "\n\nYour new number is "; for(int a = 0; a < 32; a++) {cout << char(number[a] + 32);} cout << " (needed only for trade.)\n";
		cout << "Notes included in this event will be extracted as plaintext upon verification.\n"
		     << "Enter a message (80 characters max; width of terminal) otherwise press enter:\n\n";
		char nothing_to_see_here[1]; //Catching cached new line. GNU+Linux does not perform auto-clearing of char input, the "enter" you pressed just
		cin.getline(nothing_to_see_here, 1); //before this is eaten by the next available cin.getline(), in this case--by variable nothing_to_see_here.
		
		char message[10000] = {'\0'}; //Now that the new line is caught, message[] can safely eat actual typed characters.
		cin.getline(message, 10000);  //Init to '\0' sets remaining to null, this line will not do that on its own after input!
		
		/*The following table shows symbol assignment. Every contiguous 9 functions in the list of 1,008 represent characters or no_char.
		Recall that 5/9 of all special strings of 9 are always "1" so as to prevent ambiguity through clever selective censorship.
		
		            Nine functions   Represents
		             1 = solved       number &   Standard
		ref          0 = unsolved     message     ASCII
		______________________________________________
		#  1      0 0 0 0 1 1 1 1 1                32
		#  2      0 0 0 1 0 1 1 1 1       !        33
		#  3      0 0 0 1 1 0 1 1 1       "        34
		#  4      0 0 0 1 1 1 0 1 1       #        35
		#  5      0 0 0 1 1 1 1 0 1       $        36
		#  6      0 0 0 1 1 1 1 1 0       %        37
		#  7      0 0 1 0 0 1 1 1 1       &        38
		#  8      0 0 1 0 1 0 1 1 1       '        39
		#  9      0 0 1 0 1 1 0 1 1       (        40
		# 10      0 0 1 0 1 1 1 0 1       )        41
		# 11      0 0 1 0 1 1 1 1 0       *        42
		# 12      0 0 1 1 0 0 1 1 1       +        43
		# 13      0 0 1 1 0 1 0 1 1       ,        44
		# 14      0 0 1 1 0 1 1 0 1       -        45
		# 15      0 0 1 1 0 1 1 1 0       .        46
		# 16      0 0 1 1 1 0 0 1 1       /        47
		# 17      0 0 1 1 1 0 1 0 1       0        48
		# 18      0 0 1 1 1 0 1 1 0       1        49
		# 19      0 0 1 1 1 1 0 0 1       2        50
		# 20      0 0 1 1 1 1 0 1 0       3        51
		# 21      0 0 1 1 1 1 1 0 0       4        52
		# 22      0 1 0 0 0 1 1 1 1       5        53
		# 23      0 1 0 0 1 0 1 1 1       6        54
		# 24      0 1 0 0 1 1 0 1 1       7        55
		# 25      0 1 0 0 1 1 1 0 1       8        56
		# 26      0 1 0 0 1 1 1 1 0       9        57
		# 27      0 1 0 1 0 0 1 1 1       :        58
		# 28      0 1 0 1 0 1 0 1 1       ;        59
		# 29      0 1 0 1 0 1 1 0 1       <        60
		# 30      0 1 0 1 0 1 1 1 0       =        61
		# 31      0 1 0 1 1 0 0 1 1       >        62
		# 32      0 1 0 1 1 0 1 0 1       ?        63
		# 33      0 1 0 1 1 0 1 1 0       @        64
		# 34      0 1 0 1 1 1 0 0 1       A        65
		# 35      0 1 0 1 1 1 0 1 0       B        66
		# 36      0 1 0 1 1 1 1 0 0       C        67
		# 37      0 1 1 0 0 0 1 1 1       D        68
		# 38      0 1 1 0 0 1 0 1 1       E        69
		# 39      0 1 1 0 0 1 1 0 1       F        70
		# 40      0 1 1 0 0 1 1 1 0       G        71
		# 41      0 1 1 0 1 0 0 1 1       H        72
		# 42      0 1 1 0 1 0 1 0 1       I        73
		# 43      0 1 1 0 1 0 1 1 0       J        74
		# 44      0 1 1 0 1 1 0 0 1       K        75
		# 45      0 1 1 0 1 1 0 1 0       L        76
		# 46      0 1 1 0 1 1 1 0 0       M        77
		# 47      0 1 1 1 0 0 0 1 1       N        78
		# 48      0 1 1 1 0 0 1 0 1       O        79
		# 49      0 1 1 1 0 0 1 1 0       P        80
		# 50      0 1 1 1 0 1 0 0 1       Q        81
		# 51      0 1 1 1 0 1 0 1 0       R        82
		# 52      0 1 1 1 0 1 1 0 0       S        83
		# 53      0 1 1 1 1 0 0 0 1       T        84
		# 54      0 1 1 1 1 0 0 1 0       U        85
		# 55      0 1 1 1 1 0 1 0 0       V        86
		# 56      0 1 1 1 1 1 0 0 0       W        87
		# 57      1 0 0 0 0 1 1 1 1       X        88
		# 58      1 0 0 0 1 0 1 1 1       Y        89
		# 59      1 0 0 0 1 1 0 1 1       Z        90
		# 60      1 0 0 0 1 1 1 0 1       [        91
		# 61      1 0 0 0 1 1 1 1 0       \        92
		# 62      1 0 0 1 0 0 1 1 1       ]        93
		# 63      1 0 0 1 0 1 0 1 1       ^        94
		# 64      1 0 0 1 0 1 1 0 1       _        95
		# 65      1 0 0 1 0 1 1 1 0       `        96
		# 66      1 0 0 1 1 0 0 1 1       a        97
		# 67      1 0 0 1 1 0 1 0 1       b        98
		# 68      1 0 0 1 1 0 1 1 0       c        99
		# 69      1 0 0 1 1 1 0 0 1       d       100
		# 70      1 0 0 1 1 1 0 1 0       e       101
		# 71      1 0 0 1 1 1 1 0 0       f       102
		# 72      1 0 1 0 0 0 1 1 1       g       103
		# 73      1 0 1 0 0 1 0 1 1       h       104
		# 74      1 0 1 0 0 1 1 0 1       i       105
		# 75      1 0 1 0 0 1 1 1 0       j       106
		# 76      1 0 1 0 1 0 0 1 1       k       107
		# 77      1 0 1 0 1 0 1 0 1       l       108
		# 78      1 0 1 0 1 0 1 1 0       m       109
		# 79      1 0 1 0 1 1 0 0 1       n       110
		# 80      1 0 1 0 1 1 0 1 0       o       111
		# 81      1 0 1 0 1 1 1 0 0       p       112
		# 82      1 0 1 1 0 0 0 1 1       q       113
		# 83      1 0 1 1 0 0 1 0 1       r       114
		# 84      1 0 1 1 0 0 1 1 0       s       115
		# 85      1 0 1 1 0 1 0 0 1       t       116
		# 86      1 0 1 1 0 1 0 1 0       u       117
		# 87      1 0 1 1 0 1 1 0 0       v       118
		# 88      1 0 1 1 1 0 0 0 1       w       119
		# 89      1 0 1 1 1 0 0 1 0       x       120
		# 90      1 0 1 1 1 0 1 0 0       y       121
		# 91      1 0 1 1 1 1 0 0 0       z       122
		# 92      1 1 0 0 0 0 1 1 1       {       123
		# 93      1 1 0 0 0 1 0 1 1       |       124
		# 94      1 1 0 0 0 1 1 0 1       }       125
		# 95      1 1 0 0 0 1 1 1 0       ~       126
		# 96      1 1 0 0 1 0 0 1 1    no_char
		# 97      1 1 0 0 1 0 1 0 1   unassigned
		# 98      1 1 0 0 1 0 1 1 0   unassigned
		# 99      1 1 0 0 1 1 0 0 1   unassigned
		#100      1 1 0 0 1 1 0 1 0   unassigned
		#101      1 1 0 0 1 1 1 0 0   unassigned
		#102      1 1 0 1 0 0 0 1 1   unassigned
		#103      1 1 0 1 0 0 1 0 1   unassigned
		#104      1 1 0 1 0 0 1 1 0   unassigned
		#105      1 1 0 1 0 1 0 0 1   unassigned
		#106      1 1 0 1 0 1 0 1 0   unassigned
		#107      1 1 0 1 0 1 1 0 0   unassigned
		#108      1 1 0 1 1 0 0 0 1   unassigned
		#109      1 1 0 1 1 0 0 1 0   unassigned
		#110      1 1 0 1 1 0 1 0 0   unassigned
		#111      1 1 0 1 1 1 0 0 0   unassigned
		#112      1 1 1 0 0 0 0 1 1   unassigned
		#113      1 1 1 0 0 0 1 0 1   unassigned
		#114      1 1 1 0 0 0 1 1 0   unassigned
		#115      1 1 1 0 0 1 0 0 1   unassigned
		#116      1 1 1 0 0 1 0 1 0   unassigned
		#117      1 1 1 0 0 1 1 0 0   unassigned
		#118      1 1 1 0 1 0 0 0 1   unassigned
		#119      1 1 1 0 1 0 0 1 0   unassigned
		#120      1 1 1 0 1 0 1 0 0   unassigned
		#121      1 1 1 0 1 1 0 0 0   unassigned
		#122      1 1 1 1 0 0 0 0 1   unassigned
		#123      1 1 1 1 0 0 0 1 0   unassigned
		#124      1 1 1 1 0 0 1 0 0   unassigned
		#125      1 1 1 1 0 1 0 0 0   unassigned
		#126      1 1 1 1 1 0 0 0 0   unassigned
		
		Combination 96 (reference # 96) is repeated for all remaining contiguous nine functions if no user message exists.
		For messages shorter than 80 characters, remaining unused spaces are also filled with combination 96 = 1 1 0 0 1 0 0 1 1
		since it is vital that exactly 5 of every contiguous 9 functions are solved befor they give any meaning, even if no_char.
		(Combination 96 (no_char) is a custom assignment in the Authorship program. It is NOT the null character.) */
		
		//Concatenates new number and message.
		char cat[112]; //There are 112 groups of 9 functions.
		for(int a =  0; a <  32; a++) {cat[a] = (number[a] + 32);} //Puts in new number.
		for(int a = 32; a < 112; a++) {cat[a] = message[a  - 32];} //Appends user message.
		
		//Creates a binary determinant for selective key-writing based on the new number & message (to Authorship.public file.) Last else-if = no_char.
		bool b[1008]; //b for binary.
		int m = 0;    //m for write_bookMark for b[].
		bool failed_first_entry = false;
		
		for(int a = 0; a < 112; a++) //   1           2           3           4           5           6           7           8           9
		{   //                            |           |           |           |           |           |           |           |           |
			     if(cat[a] == ' ') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '!') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '"') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '#') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '$') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '%') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == '&') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] =='\'') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '(') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == ')') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '*') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == '+') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == ',') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '-') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '.') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == '/') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '0') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '1') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == '2') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '3') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == '4') {b[m]= 0;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == '5') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '6') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '7') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '8') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '9') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == ':') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == ';') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '<') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '=') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == '>') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '?') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '@') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'A') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'B') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'C') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'D') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'E') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'F') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'G') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'H') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'I') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'J') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'K') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'L') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'M') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'N') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'O') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'P') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'Q') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'R') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'S') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'T') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'U') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'V') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'W') {b[m]= 0;  b[m+1]= 1;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'X') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'Y') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'Z') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '[') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] =='\\') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == ']') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '^') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '_') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '`') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'a') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'b') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'c') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'd') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'e') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'f') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 0;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'g') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'h') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'i') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'j') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'k') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'l') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'm') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'n') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'o') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'p') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'q') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == 'r') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 's') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 't') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'u') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'v') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'w') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == 'x') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] == 'y') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == 'z') {b[m]= 1;  b[m+1]= 0;  b[m+2]= 1;  b[m+3]= 1;  b[m+4]= 1;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 0;  b[m+8]= 0;}
			else if(cat[a] == '{') {b[m]= 1;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 0;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '|') {b[m]= 1;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			else if(cat[a] == '}') {b[m]= 1;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 0;  b[m+8]= 1;}
			else if(cat[a] == '~') {b[m]= 1;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 0;  b[m+5]= 1;  b[m+6]= 1;  b[m+7]= 1;  b[m+8]= 0;}
			else if(cat[a] =='\0') {b[m]= 1;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;}
			//                            |           |           |           |           |           |           |           |           |
			//                            1           2           3           4           5           6           7           8           9
			
			else
			{	if(failed_first_entry == false) {cout << "\nYou hit an F-key / arrow-key while typing. Try again:\n";}
				else                            {cout << "\nTry again. For no message, press enter:\n";}
				
				failed_first_entry = true;
				
				for(int a = 0; a < 10000; a++) {message[a] = '\0';} //Resets message[].
				cin.getline(message, 10000); //Has been RESET to null, this line will not do that on its own after input!
				a = -1; //Restarts this assignment loop (-1 because a++ occurs again before for() compares.)
				m = 0;  //Resetting bookmark for b[].
				
				//Concatenates new number and message (again.)
				for(int a =  0; a <  32; a++) {cat[a] = (number[a] + 32);} //Puts in new number.
				for(int a = 32; a < 112; a++) {cat[a] = message[a  - 32];} //Appends user message.
				
				continue;
			}
			
			m += 9;
		}
		
		//Notifies user if no message entered ("Ctrl + something" on terminal input will do weird things so user
		//is essentially informed that verifying parties will see "user omitted a message" upon verification.)
		//Or just authenticate when your cat is AFK.
		if(message[0] == '\0')
		{	cout << "\nNo message accepted.\n";
			
			//Unnecessary but ensures all message symbols are no_char (reference #96) due to weird "Ctrl + something" entries. This way,
			//all characters after no_char (if any) are set to no_char to eliminate (closely examined) artifacting for serious events.
			m = 288; //32 * 9 = 288 functions already used for the number; sets bookmark to beginning of message (289th.)
			for(int a = 0; a < 80; a++)
			{	b[m]= 1;  b[m+1]= 1;  b[m+2]= 0;  b[m+3]= 0;  b[m+4]= 1;  b[m+5]= 0;  b[m+6]= 0;  b[m+7]= 1;  b[m+8]= 1;  m+=9;
			}	//    |           |           |           |           |           |           |           |           |
		}
		
		//Creates file Authorship.public, writes all old functions, and selectively writes old keys.
		//In this file, you'll see two columns. Left one is all functions, and the right one--keys to the corresponding functions.
		//The first 288 functions (32 groups of 9 contiguous) are for representing the new 32-character number. And the remaining
		//720 functions (80 groups of 9 contiguous) are for representing the 80-character user message for that authentication event.
		char sector_accident_reference[612976]; //Writing to this as well as to file for matching upon integrity test. For every .put(),
		//sector_accident_reference gets it too if sector_accident_detection == true. Compiler optimizes and goes for it without checking.
		int sector_accident_reference_write_bookmark = 0;
		int old_functions_read_bookmark = 0;
		int old_keys_read_bookmark = 0;
		
		out_stream.open("Authorship.public");
		out_stream << "Authorship.public v6.0.1=\r\n\r\n"; //29-byte header must be. Use "\r\n" for all returns (for max compatibility.)
		for(int a = 0; a < 1008; a++)
		{	//Writes function.
			for(int b = 0; b < 50; b++)
			{	out_stream.put(old_functions[old_functions_read_bookmark]);
				if(sector_accident_detection == true)
				{sector_accident_reference[sector_accident_reference_write_bookmark] = old_functions[old_functions_read_bookmark];}
				
				old_functions_read_bookmark++;
				sector_accident_reference_write_bookmark++;
			}
			
			///Writes key if b[] == 1.
			if(b[a] == 1)
			{	out_stream.put(' ');
				if(sector_accident_detection == true)
				{sector_accident_reference[sector_accident_reference_write_bookmark] = ' '; sector_accident_reference_write_bookmark++;}
				
				for(int b = 0; b < 1000; b++)
				{	out_stream.put(old_keys[old_keys_read_bookmark]);
					if(sector_accident_detection == true)
					{sector_accident_reference[sector_accident_reference_write_bookmark] =  old_keys[old_keys_read_bookmark];}
					
					old_keys_read_bookmark++;
					sector_accident_reference_write_bookmark++;
				}
				
				out_stream << "\r\n";
				if(sector_accident_detection == true)
				{	sector_accident_reference[sector_accident_reference_write_bookmark] = '\r'; sector_accident_reference_write_bookmark++;
					sector_accident_reference[sector_accident_reference_write_bookmark] = '\n'; sector_accident_reference_write_bookmark++;
				}
			}
			else
			{	//###################################################
				//##=`                                           `=##
				            old_keys_read_bookmark += 1000;        //
				//##=_                                           _=##
				//###################################################
				
				
				out_stream << "\r\n";
				if(sector_accident_detection == true)
				{	sector_accident_reference[sector_accident_reference_write_bookmark] = '\r'; sector_accident_reference_write_bookmark++;
					sector_accident_reference[sector_accident_reference_write_bookmark] = '\n'; sector_accident_reference_write_bookmark++;
				}
			}
		}
		out_stream.close();
		
		//Tests file integrity. This entire if-statement can be removed.
		if(sector_accident_detection == true)
		{	char temp_file_byte;
			bool sector_accident = false;
			in_stream.open("Authorship.public");
			for(int a = 0; a < 29; a++) {in_stream.get(temp_file_byte);} //As the 29-byte headers can change, they are skipped.
			for(int a = 0; a < 612976; a++) //Size = (613,005 - 29 header).
			{	in_stream.get(temp_file_byte);
				if(temp_file_byte != sector_accident_reference[a]) {sector_accident = true; break;}
			}
			in_stream.close();
			
			if(sector_accident == true)
			{	remove("Authorship.private");
				remove("Authorship.public");
				
				cout << "\n\n\nBad sectors! There's something wrong with your storage device.\n\n"
				
				     << "For a quick fix, fill your storage device with a few gigabytes worth of any\n"
				     << "data then try this again. And do not disturb that dummy data as its purpose\n"
				     << "is to consume bad sectors and abused parts of the storage device.\n\n";
				
				return 0;
			}
		}
		
		//Overwrites RAM of array: (signed) char old_keys[1008000].
		for(int a = 0; a < 1008000; a++) {old_keys[a] = 0; old_keys[a] = -1;}
		
		cout << "\nAuthorship.private is updated, cache it guardedly and destroy the old copy.\n"
		     << "Publish Authorship.public. Once verified the file needs not exist anywhere.";
	}
	
	
	
	
	
	//_____________________________________________________________________________________________________________________
	//_____________________________________________VERIFY_NUMBER_MODIFICATION_____________________________________________/
	else if(user_option == 3)
	{	/* Basic layout:
		
		1. Loads files Authorship.public and Authorship.number.
		2. Compares a deductive lossy compression of all public file functions to the number in the number file.
		3. Extracts the new number & message based on missing solutions, solves functions to which keys are present.
		4. Overwrites file Authorship.number with the new number--a fingerprint of another function list not yet public. */
		
		//Checks if BOTH files Authorship.number and Authorship.public are present.
		bool presence_of_file_Authorship_number = false;
		bool presence_of_file_Authorship_public = false;
		in_stream.open("Authorship.number"); if(in_stream.fail() == false) {presence_of_file_Authorship_number = true;} in_stream.close();
		in_stream.open("Authorship.public"); if(in_stream.fail() == false) {presence_of_file_Authorship_public = true;} in_stream.close();
		if((presence_of_file_Authorship_number == false)
		&& (presence_of_file_Authorship_public == false))
		{	cout << "\nBoth files are missing. If this is an executable file running in the terminal,\n"
			     << "its effectiveness-directory is the user folder, for example: /home/nikolay\n";
			return 0;
		}
		if(presence_of_file_Authorship_number == false)
		{	cout << "\nAuthorship.number is missing. If this is an executable file running in the\n"
			     << "terminal, its effectiveness-directory is the user folder such as /home/nikolay\n";
			return 0;
		}
		if(presence_of_file_Authorship_public == false)
		{	cout << "\nAuthorship.public is missing. If this is an executable file running in the\n"
			     << "terminal, its effectiveness-directory is the user folder such as /home/nikolay\n";
			return 0;
		}
		
		//Checks if BOTH files Authorship.number and Authorship.public are empty.
		bool existence_of_substance_in_file_Authorship_number = false;
		bool existence_of_substance_in_file_Authorship_public = false;
		char sniffed_one_file_character;
		
		in_stream.open("Authorship.number");
		in_stream.get(sniffed_one_file_character);
		if(in_stream.eof() == false) {existence_of_substance_in_file_Authorship_number = true;}
		in_stream.close();
		in_stream.open("Authorship.public");
		in_stream.get(sniffed_one_file_character);
		if(in_stream.eof() == false) {existence_of_substance_in_file_Authorship_public = true;}
		in_stream.close();
		
		if((existence_of_substance_in_file_Authorship_number == false)
		&& (existence_of_substance_in_file_Authorship_public == false))
		{	cout << "\nBoth files are empty.\n";
			return 0;
		}
		if(existence_of_substance_in_file_Authorship_number == false) {cout << "\nAuthorship.number is empty.\n"; return 0;}
		if(existence_of_substance_in_file_Authorship_public == false) {cout << "\nAuthorship.public is empty.\n"; return 0;}
		
		//Loads file Authorship.public and places functions and keys in different batches.
		char functions[50400]; //1,008 50-character functions.
		char keys    [560000]; //560,000 = (560 of 1,008 present keys * 1,000 characters in length). Comes from (1,008,000 key characters * (5/9)).
		int functions_write_bookmark = 0;
		int keys_write_bookmark = 0;
		bool b[1008] = {0}; //b for binary, logs presence and absence of keys.
		
		in_stream.open("Authorship.public");
		bool presence_of_13 = false;
		bool presence_of_10 = false;
		bool presence_of_13_and_10 = false;
		char temp_file_byte; for(int a = 0; a < 25; a++) {in_stream.get(temp_file_byte);} //Skips 29-byte header (29 if \r\n present, tests for it now.)
		
		for(int a = 0; a < 2; a++) //Grabs two bytes after the first equals sign in the text.
		{	in_stream.get(temp_file_byte);
			if(temp_file_byte == '\r') {presence_of_13 = true;}
			if(temp_file_byte == '\n') {presence_of_10 = true;}
		}
		
		if((presence_of_13 == false)
		&& (presence_of_10 == false)) {in_stream.close(); cout << "\n\nAuthorship.public header is corrupted.\n\n"; return 0;}
		
		if((presence_of_13 == true)
		&& (presence_of_10 == true))
		{	for(int a = 0; a < 2; a++) //Grabs two bytes after the first "\r\n".
			{	in_stream.get(temp_file_byte);
				if(temp_file_byte == '\r') {presence_of_13 = true;}
				if(temp_file_byte == '\n') {presence_of_10 = true;}
			}
			
			if((presence_of_13 == true)
			&& (presence_of_10 == true)) {presence_of_13_and_10 = true;}
			else {in_stream.close(); cout << "\n\nAuthorship.public header is corrupted.\n\n"; return 0;}
		}
		
		for(int a = 0; a < 1008; a++) //Grabbing 1,568 items (1,008 functions + 560 keys.)
		{	//Gets function.
			for(int b = 0; b < 50; b++)
			{	in_stream.get(functions[functions_write_bookmark]);
				functions_write_bookmark++;
			}
			
			//Gets key if present.
			in_stream.get(temp_file_byte); //Checks what's after the function.
			if(temp_file_byte == ' ')
			{	b[a] = 1; //1 = key present.
				for(int c = 0; c < 1000; c++)
				{	in_stream.get(keys[keys_write_bookmark]);
					keys_write_bookmark++;
				}
				
				if(presence_of_13_and_10 == true) {in_stream.get(temp_file_byte);} //Skips '\r'.
				in_stream.get(temp_file_byte); //Skips '\n'.
			}
			else
			{	if(presence_of_13_and_10 == true) {in_stream.get(temp_file_byte);} //Skips '\n' from the "\r\n" after function.
			}
		}
		in_stream.close();
		
		//Adjusts functions[] and keys[] if bulk_verification_efficiency is off (default.)
		if(bulk_verification_efficiency == false)
		{	for(int a = 0; a <  50400; a++) {functions[a] -= 32;}
			for(int a = 0; a < 560000; a++) {     keys[a] -= 32;}
		}
		
		//Generates deductive lossy compression of the 1,008 functions.
		long long deductive_lossy_compression[4]; //4 16-digit integers strung together, unique compression for each.
		long long snapshots[4];                   //Same but takes snapshots of compression, applies to compression after.
		for(int a = 0; a < 4; a++) {deductive_lossy_compression[a] = 5555555555555555; snapshots[a] = 5555555555555555;}
		
		for(int a = 0; a < 4; a++)
		{	for(int b = 0; b < 50400; b++)
			{	deductive_lossy_compression[a] += functions[b];
				deductive_lossy_compression[a] *= (a + 2);
				deductive_lossy_compression[a] %= 10000000000000000;
				
				//Takes snapshots of the compression as it evolves over time.
				if((b == 10000) || (b == 20000) || (b == 30000) || (b == 40000))
				{	snapshots[a] += deductive_lossy_compression[a];
					snapshots[a] %= 10000000000000000;
				}
			}
			
			//Applies snapshots to last stage of compression per integer.
			deductive_lossy_compression[a] += snapshots[a];
			deductive_lossy_compression[a] %= 10000000000000000;
			
			//Ensures all 4 compression integers are 16 digits long.
			if(deductive_lossy_compression[a] < 1000000000000000) {deductive_lossy_compression[a] += 1000000000000000;}
		}
		
		//Converts deductive_lossy_compression[] to 32 characters (1 char for every two contiguous digits.)
		unsigned char number[32];
		int  number_write_bookmark = 0;
		
		for(int a = 0; a < 4; a++)
		{	number[number_write_bookmark] =  (deductive_lossy_compression[a] / 100000000000000);        number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /   1000000000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /     10000000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /       100000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /         1000000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /           10000) % 100); number_write_bookmark++;
			number[number_write_bookmark] = ((deductive_lossy_compression[a] /             100) % 100); number_write_bookmark++;
			number[number_write_bookmark] =  (deductive_lossy_compression[a]                    % 100); number_write_bookmark++;
		}
		
		//Applies snapshots to the last character of the number.
		for(int a = 0; a < 4; a++) {number[31] += (snapshots[a] % 100); number[31] %= 100;}
		
		//Fixes number, it is now complete.
		//Collisions via brute-force is futile; inputs are well-tested for additional properties therefore 32 char
		//is over-kill indeed. 94^32 = 1380674536088650126365233338290905239051505147118049339937652736 or ~10^64.
		for(int a = 0; a < 32; a++)
		{	if(number[a] == 0) {number[a]++;}     //Ensures no spaces.
			if(number[a] > 94) {number[a] -= 94;} //Ensures no values > 94.
		}
		
		//Compares the function deductive lossy compression (number) with the number on file--belonging to the modifying party.
		in_stream.open("Authorship.number");
		for(int a = 0; a < 32; a++)
		{	in_stream.get(temp_file_byte);
			if((number[a] + 32) != temp_file_byte)
			{	in_stream.close();
				cout << "\nFAILED! Number decompression did not produce the given public functions.\n";
				return 0;
			}
		}
		in_stream.close();
		
		//Extracts the new number and user message based on the symbolism of key presence and absence. First if = no_char.
		//This step in its nature simultaneously checks that there are strictly 5 keys for every group of 9 contiguous functions.
		char cat[112]; //Concatenation of 32-character number and 80-character message.
		int m = 0; //m for read_bookMark for b[].
		for(int a = 0; a < 112; a++)
		{	
			//              1              2              3              4              5              6              7              8              9          Extracted
			//              |              |              |              |              |              |              |              |              |          character
			     if((b[m]== 1 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]='\0';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= ' ';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '!';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '"';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '#';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '$';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '%';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '&';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]='\'';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '(';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= ')';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '*';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '+';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= ',';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '-';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '.';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '/';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '0';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '1';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '2';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '3';}
			else if((b[m]== 0 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= '4';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '5';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '6';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '7';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '8';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '9';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= ':';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= ';';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '<';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '=';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '>';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '?';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '@';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'A';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'B';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'C';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'D';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'E';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'F';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'G';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'H';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'I';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'J';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'K';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'L';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'M';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'N';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'O';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'P';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'Q';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'R';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'S';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'T';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'U';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'V';}
			else if((b[m]== 0 )&&(b[m+1]== 1 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'W';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'X';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'Y';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'Z';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '[';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]='\\';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= ']';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '^';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '_';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '`';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'a';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'b';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'c';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'd';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'e';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 0 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'f';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'g';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'h';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'i';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'j';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'k';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'l';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'm';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'n';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'o';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 0 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'p';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= 'q';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'r';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 's';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 't';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'u';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'v';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= 'w';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= 'x';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'y';}
			else if((b[m]== 1 )&&(b[m+1]== 0 )&&(b[m+2]== 1 )&&(b[m+3]== 1 )&&(b[m+4]== 1 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 0 )&&(b[m+8]== 0 )) {cat[a]= 'z';}
			else if((b[m]== 1 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 0 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '{';}
			else if((b[m]== 1 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 0 )&&(b[m+7]== 1 )&&(b[m+8]== 1 )) {cat[a]= '|';}
			else if((b[m]== 1 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 0 )&&(b[m+8]== 1 )) {cat[a]= '}';}
			else if((b[m]== 1 )&&(b[m+1]== 1 )&&(b[m+2]== 0 )&&(b[m+3]== 0 )&&(b[m+4]== 0 )&&(b[m+5]== 1 )&&(b[m+6]== 1 )&&(b[m+7]== 1 )&&(b[m+8]== 0 )) {cat[a]= '~';}
			//              |              |              |              |              |              |              |              |              |
			//              1              2              3              4              5              6              7              8              9
			
			else {cout << "\nFailed! Symbolism not corresponding to assignment.\n"; return 0;}
			
			m += 9;
		}
		
		//Use keys[] to decrypt functions[]. You have 560 keys and 1,008 functions; use the
		//following loop to automatically skip through 448 functions based on the pattern in b[].
		for(int a = 0; a < 1008; a++)
		{	if(b[a] == 1)
			{	//Decrypt the function. If unsuccessful, print "failed" and terminate here.
				
				//Que the next key.
				//Que the next function.
			}
			else
			{	//Que the next function.
			}
		}
		
		//Updating file Authorship.number with the new number extracted from the symbolism of missing and present solutions.
		out_stream.open("Authorship.number");
		for(int a = 0; a < 32; a++) {out_stream.put(cat[a]);}
		out_stream.close();
		
		//Tests file integrity. This entire if-statement can be removed.
		if(sector_accident_detection == true)
		{	char temp_file_byte;
			bool sector_accident = false;
			
			//Tests file Authorship.number.
			in_stream.open("Authorship.number");
			for(int a = 0; a < 32; a++)
			{	in_stream.get(temp_file_byte);
				if((temp_file_byte) != cat[a]) {sector_accident = true; break;}
			}
			in_stream.close();
			
			if(sector_accident == true)
			{	remove("Authorship.number");
				
				cout << "\n\n\nBad sectors! There's something wrong with your storage device.\n\n"
				
				     << "Verification may have been successful, but your drive could not retain the\n"
				     << "user's new Authorship number. You must verify again to get that new number.\n"
				     << "For a quick fix, fill your storage device with a few gigabytes worth of any\n"
				     << "data then try this again. And do not disturb that dummy data as its purpose\n"
				     << "is to consume bad sectors and abused parts of the storage device.\n\n";
				
				return 0;
			}
		}
		
		//Prints user's message if present for this event.
		cout << "\n\n\tVerification SUCCESSFUL!\n\n"
		
		     << "The number file has been overwritten with their new number.\n"
		     << "You can discard any and all old modification information.\n";
		
		if(cat[32] != '\0') //If 33rd item in cat[] is not no_char.
		{	cout << "The user included a message for this authentication event: \n\n";
			
			for(int a = 32; a < 112; a++) {cout << char(cat[a]);}
			cout << "\n";
		}
		else {cout << "The user omitted a message for this authentication event.\n";}
	}
	
	else {cout << "\nInvalid option, program ended.\n"; return 0;}
}
