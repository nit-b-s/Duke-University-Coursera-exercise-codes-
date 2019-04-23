#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert(c.value >= 2 && c.value <= 14);
  assert(c.suit >= SPADES && c.suit <= CLUBS);
}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r)
    {
    case 0:
      return "STRAIGHT_FLUSH";
    case 1:
      return "FOUR_OF_A_KIND";
    case 2:
      return "FULL_HOUSE";
    case 3:
      return "FLUSH";
    case 4:
      return "STRAIGHT";
    case 5:
      return "THREE_OF_A_KIND";
    case 6:
      return "TWO_PAIR";
    case 7:
      return "PAIR";
    case 8:
      return "NOTHING";
    }
      return "";
}

char value_letter(card_t c) {
  switch(c.value)
    {
    case 2:
      return '2';
    case 3:
      return '3';
    case 4:
      return '4';
    case 5:
      return '5';
    case 6:
      return '6';
    case 7:
      return '7';
    case 8:
      return '8';
    case 9:
      return '9';
    case 10:
      return '0';
    case 11:
      return 'J';
    case 12:
      return 'Q';
    case 13:
      return 'K';
    case 14:
      return 'A';
    default:
      return 'x';
    }
}

char suit_letter(card_t c) {
  switch(c.suit){
    case SPADES:
      return 's';
    case HEARTS:
      return 'h';
    case DIAMONDS:  
      return 'd';
    case CLUBS:  
      return 'c';
    default:
      return 'x';
  }
}

void print_card(card_t c) {
  printf("%c%c",value_letter(c),suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;

  assert((value_let >= '2' && value_let <= '9') || value_let == 'A' || value_let == 'K'
	 || value_let == 'Q' || value_let == 'J' || value_let == '0');
  assert( suit_let == 's' || suit_let == 'h' || suit_let == 'd' || suit_let == 'c' );

  if( value_let >= '2' && value_let <= '9' )
    temp.value = value_let - '0';

  switch(value_let){
  case 'A':
    temp.value = VALUE_ACE;
    break;

  case 'K':
    temp.value = VALUE_KING;
    break;

  case 'Q':
    temp.value = VALUE_QUEEN;
    break;

  case 'J':
    temp.value = VALUE_JACK;
    break;

  case '0':
    temp.value = 10;
    break;

  }

  switch(suit_let){

  case 's':
    temp.suit = SPADES;
    break;

  case 'h':
    temp.suit = HEARTS;
    break;

  case 'd':
    temp.suit = DIAMONDS;
    break;

  case 'c':
    temp.suit = CLUBS;
    break;
  }
  return temp; 
}

card_t card_from_num(unsigned c) {
  card_t temp;
  switch(c){
  case 0:
    temp.value = 2;
    temp.suit = 0;
    return temp;
  case 1:
    temp.value = 3;
    temp.suit = 0;
    return temp;
  case 2:
    temp.value = 4;
    temp.suit = 0;
    return temp;
  case 3:
    temp.value = 5;
    temp.suit = 0;
    return temp;
  case 4:
    temp.value = 6;
    temp.suit = 0;
    return temp;
  case 5:
    temp.value = 7;
    temp.suit = 0;
    return temp;
  case 6:
    temp.value = 8;
    temp.suit = 0;
    return temp;
  case 7:
    temp.value = 9;
    temp.suit = 0;
    return temp;
  case 8:
    temp.value = 10;
    temp.suit = 0;
    return temp;
  case 9:
    temp.value = 11;
    temp.suit = 0;
    return temp;
  case 10:
    temp.value = 12;
    temp.suit = 0;
    return temp;
  case 11:
    temp.value = 13;
    temp.suit = 0;
    return temp;
  case 12:
    temp.value = 14;
    temp.suit = 0;
    return temp;
  case 13:
    temp.value = 2;
    temp.suit = 1;
    return temp;
  case 14:
    temp.value = 3;
    temp.suit = 1;
    return temp;
  case 15:
    temp.value = 4;
    temp.suit = 1;
    return temp;
  case 16:
    temp.value = 5;
    temp.suit = 1;
    return temp;
  case 17:
    temp.value = 6;
    temp.suit = 1;
    return temp;
  case 18:
    temp.value = 7;
    temp.suit = 1;
    return temp;
  case 19:
    temp.value = 8;
    temp.suit = 1;
    return temp;
  case 20:
    temp.value = 9;
    temp.suit = 1;
    return temp;
  case 21:
    temp.value = 10;
    temp.suit = 1;
    return temp;
  case 22:
    temp.value = 11;
    temp.suit = 1;
    return temp;
  case 23:
    temp.value = 12;
    temp.suit = 1;
    return temp;
  case 24:
    temp.value = 13;
    temp.suit = 1;
    return temp;
  case 25:
    temp.value = 14;
    temp.suit = 1;
    return temp;
  case 26:
    temp.value = 2;
    temp.suit = 2;
    return temp;
  case 27:
    temp.value = 3;
    temp.suit = 2;
    return temp;
  case 28:
    temp.value = 4;
    temp.suit = 2;
    return temp;
  case 29:
    temp.value = 5;
    temp.suit = 2;
    return temp;
  case 30:
    temp.value = 6;
    temp.suit = 2;
    return temp;
  case 31:
    temp.value = 7;
    temp.suit = 2;
    return temp;
  case 32:
    temp.value = 8;
    temp.suit = 2;
    return temp;
  case 33:
    temp.value = 9;
    temp.suit = 2;
    return temp;
  case 34:
    temp.value = 10;
    temp.suit = 2;
    return temp;
  case 35:
    temp.value = 11;
    temp.suit = 2;
    return temp;
  case 36:
    temp.value = 12;
    temp.suit = 2;
    return temp;
  case 37:
    temp.value = 13;
    temp.suit = 2;
    return temp;
  case 38:
    temp.value = 14;
    temp.suit = 2;
    return temp;
  case 39:
    temp.value = 2;
    temp.suit = 3;
    return temp;
  case 40:
    temp.value = 3;
    temp.suit = 3;
    return temp;
  case 41:
    temp.value = 4;
    temp.suit = 3;
    return temp;
  case 42:
    temp.value = 5;
    temp.suit = 3;
    return temp;
  case 43:
    temp.value = 6;
    temp.suit = 3;
    return temp;
  case 44:
    temp.value = 7;
    temp.suit = 3;
    return temp;
  case 45:
    temp.value = 8;
    temp.suit = 3;
    return temp;
  case 46:
    temp.value = 9;
    temp.suit = 3;
    return temp;
  case 47:
    temp.value = 10;
    temp.suit = 3;
    return temp;
  case 48:
    temp.value = 11;
    temp.suit = 3;
    return temp;
  case 49:
    temp.value = 12;
    temp.suit = 3;
    return temp;
  case 50:
    temp.value = 13;
    temp.suit = 3;
    return temp;
  case 51:
    temp.value = 14;
    temp.suit = 3;
    return temp;
  default:
    return temp;
  }
}
