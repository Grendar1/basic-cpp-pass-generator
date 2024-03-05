A basic password generator done in C++ with a few hours of thinking.

My first project, lazy to fix the bugs, but it's working as long as you don't type something else i.e. letters.

The code works by generating numbers from 33 to 126. 

From 33-126, we can see and type the ASCII characters on keyboard(Special Character, a-z, A-Z, 1-9)

Then it converts the number, i.e. 33, in ASCII (which is the character '!'), with the C++ 'char(int value)' function and loads it into an array inside a 'for' loop.

Afterwards, I calls the 'rand()' function over the numbers ranging from 1 to 93 in another 'for' loop.
Then I printed the value that got contained in the array. (i.e. the random number was 50 from 93), and it will generate the 83th ASCII character/ (too lazy to think on how to generate a number from x to y).

And so there you have it, a buggy but functional password generator.


