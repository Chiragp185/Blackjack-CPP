# Blackjack-CPP
Blackjack using C++

The main reason why I chose this topic is because card games interest me. I have also enjoyed playing video games since I was a kid. Since this was a topic that I liked, I thought of making this card game “Blackjack” into a computer program as it is unique and can test one’s luck. Also, this game is popular all over the world and is playable by people of all ages. I found this topic challenging as it involved a deck of cards and hence motivated me to complete it.

For running the code, you can use a free and open-source software like Turbo C7 by Akki. My code has been written using this compiler and I assure you that it runs perfectly in this.

If you want to see how the game looks like, please check out the screenshots.

If you want to learn and understand the code, please refer the program documentation and read the content below.

## Code Explanation: -

The first part of the code is mainly of the class BJ which contains all the print statements which will display the cards. Each function has 2 parameters suit and num of character array type. Suit contains an ASCII value pertaining to the suit of the card and num is the number of the card. If there are 2 cards then the size of the character arrays are 2 and if there are 3 cards then the size of the character arrays are 3 and henceforth. The cards are displayed using simple cout statements. I have used two different functions for displaying two cards since during the first hand, one card of the dealer is closed but that of the player is open.

There are 2 structures – Blackjack and Player. The structure blackjack contains account information of the user(Need to register when playing for the first time so that your money is carried over) whereas the structure player contains details of the current game the player is playing.

The function update() updates the money the player has won/lost into the data file so that it can be used for the next time when the player logs in.

The function loading() is just for showing “Loading…” on the screen. There is no background process running, it is just for having a more realistic gaming feel :)

The function menu() will show options for the player to login/signup or exit the game. Based on the option the user selects, code will run. If the player is playing the game for the first time in his/her PC, then he/she must register. After registering, genral instructions will be shown and an initial amount will be provided for the player to start playing immediately. In case the user already has an account, he/she can choose the login option , enter username and password and start playing again. After successfully logging in, the screen will show your name and remaining amount.

In the main(), the code of the main game is located. Since for the first hand, two cards are displayed for the player and the dealer, according functions have been called to display their cards. The suit and number values of the cards are generated using random() function. T,J,Q, and K are displayed if the numbers generated are 10, 11,12 and 13. After two hands, the player is asked if he wants to hit or stay. Accordingly the game proceeds and the cards are displayed. Once a winner is established, the amount is updated in the user’s account details and then he/she is given a option to play once again. If yes, the whole process repeats again or else the program quits. 
The function void midscreen() is used to reach the middle of the screen for displaying.

The function void credits() displays details of the game like name and creator’s name.

The function void playerwon() is to display appropriate message when a player has won.

The function int norepeat(char suit, char num, int d=0) is used to prevent a card from repeating itself as each card is unique in a deck.

The function void playerlost() will display an appropriate message when a player has lost.

 The function void dealer_newcard() is to create a new card for the dealer.
 
The function void newcard() is to create a new card for the player.
