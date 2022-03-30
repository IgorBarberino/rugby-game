// Standard headers
#include <stdio.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "attacker.h"
direction_t last_direction = DIR_RIGHT
direction_t NEW_direction = DIR_UP_RIGHT
// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_attacker_strategy(
    position_t attacker_position, Spy defender_spy) {
  UNUSED(attacker_position);
  UNUSED(defender_spy);
  last_direction = new_direction;
  if (last_direction == DIR_RIGHT)
      new_direction = DIR_UP_RIGHT;
  else
      new_direction = DIR_RIGHT;
  return (new_direction);
}

/*----------------------------------------------------------------------------*/
