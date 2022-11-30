# wordle

In this part of the project, we will be implementing something similar to the wordle game. You will be given a file (fs) containing a list of words and a string (str). Your task is to print all five-letter words in fs that do not have any character in the string str. Specifically, your code should generate a binary that takes 2 command line arguments as follows:

prompt> ./wordle filename string

If the file containing the wordlist is named word-list.txt and the string is hasnot, your program will be executed as follows:

prompt> ./wordle word-list.txt hasnot

The output of your program should be all lines which have exactly 5 characters (excluding the endline \n character) and none of the character in the string hasnot (i.e. does not have any of these characters: h,a,s,n,o,t).

Example:

prompt> cat word-list.txt
abadc
america
africa
soups
first
prompt> ./wordle word-list.txt not
abadc

Only abadc, soups and first are five character long. Of these, soups has character o and first has character t, both of which are not allowed as our blacklist string is not (characters n,o,t are not allowed). 
