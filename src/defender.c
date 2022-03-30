// Standard headers
#include <stdio.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"
direction_t last_direction = DIR_UP;
direction_t second_last_direction = DIR_DOWN;
direction_t new_direction = DIR_UP_DOWN;
// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  UNUSED(defender_position);
  UNUSED(attacker_spy);
  second_last_direction = last_direction;
  last_direction = new_direction;
  if (last_direction == DIR_UP && second_last_direction == DIR_UP)
      new_direction = DIR_DOWN;
  else if (last_direction == DIR_DOWN && second_last_direction == DIR_DOWN)
      new_direction = DIR_UP;
  else 
      new_direction = last_direction;
  return (new_direction);
}

/*----------------------------------------------------------------------------*/
