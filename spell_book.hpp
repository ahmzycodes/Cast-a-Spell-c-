#ifndef _SPELL_BOOK_HPP
#define _SPELL_BOOK_HPP

#include <string>
#include "spell.hpp"

/**
 * @brief A class implementing a book of spells. Wizards use it to collect spells and have simple access to them
 * by an index.
 */
class SpellBook {
protected:

    /**
     * @brief Dynamically allocated array of spells.
     */
    Spell **spells;

    /**
     * @brief Number of spells collected in the book.
     */
    int spell_count;
public:

    /**
     * @brief Constructor. Creates spells and stores them in the <b>spells</b> array. It parses the <b>input</b>
     * instructions to know which spells to create. Only spells: GreenSpell, FireballSpell, and GreenFireballSpell
     * can be created and stored in the book.
     * @param input A string with all-lower-case names of spells ("green", "fireball", "greenfireball") separated
     * by commas (,). No whitespace allowed. It is assumed, that the input is correct. Empty input is correct and
     * is allowed. Examples:
     * "green,green"
     * "green,fireball,greenfireball"
     * ""
     */
    SpellBook(const std::string &input);

    /**
     * @brief Destructor. Frees memory of array to store pointers to the spells and frees spells.
     */
    ~SpellBook();

    /**
     * @brief Returns the number of spells in the book that are GreenSpell (or inherit from this class).
     * @return Number of spells with "green effect".
     */
    int greenCount() const;

    /**
     * @brief Casts a spell collected in the book at an index.
     * @param index Index of the spell to be cast. In PART 2 if the index is out of bounds do nothing. In PART 3 if
     * the index is out of bounds throw an exception.
     */
    void castSpell(int index) const;
};

#endif
