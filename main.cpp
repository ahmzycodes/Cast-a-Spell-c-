#include "spell.hpp"
#include "fireball_spell.hpp"
#include "green_fireball_spell.hpp"
#include "green_spell.hpp"
#include "double_spell.hpp"
#include "spell_book.hpp"

#include <iostream>

int main()
{
    // part 1
    Spell *spells[4];
    spells[0] = new FireballSpell();
    spells[1] = new GreenFireballSpell();
    spells[2] = new GreenSpell();
    auto spell_1 = new GreenSpell();
    auto spell_2 = new GreenFireballSpell();
    spells[3] = new DoubleSpell(spell_1, spell_2);
    for(auto spell : spells) {
        spell->cast();
    }
    for(auto spell : spells) {
        delete spell;
    }

    // part 2
    SpellBook yellow_book("greenfireball,fireball,fireball,green");

    std::cout << "Number of green spells in yellow book: "
              << yellow_book.greenCount() << std::endl;

    yellow_book.castSpell(2);

    // part 3
    //TODO: add try - catch around both castSpell() calls.
    yellow_book.castSpell(88);

    return 0;
}
