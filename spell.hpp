#ifndef _SPELL_HPP
#define _SPELL_HPP

class Spell {
public:
    virtual ~Spell() = default;
    virtual void cast() const = 0;
};

#endif
