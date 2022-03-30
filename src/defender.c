// Standard headers
#include <stdio.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"
direction_t last_direction = DIR_RIGHT;
direction_t NEW_direction = DIR_UP_RIGHT;
// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  UNUSED(defender_position);
  UNUSED(attacker_spy);
  last_direction = new_direction;
  if (last_direction == DIR_RIGHT)
      new_direction = DIR_UP_RIGHT;
  else
      new_direction = DIR_RIGHT;
  return (new_direction);
}

/*----------------------------------------------------------------------------*/
