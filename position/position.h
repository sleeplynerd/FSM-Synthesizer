#ifndef POSITION_H
#define POSITION_H

#include "int_set.h"

class Position {
private: public:
    static const char* SPECIAL_CHARS;

    Position();

    Int_Set m_indexes;
    bool f_before_left_bracket;
    bool f_before_left_iter_bracket;
    bool f_after_right_bracket;
    bool f_after_right_iter_bracket;
    bool f_before_term;
    bool f_after_term;
    bool f_prebase;
    bool f_base;
    bool f_start;
    bool f_end;
public:
    static const char MOCK;
    const char left;
    const char right;

    static bool is_special_char( const char& symbol );
    void add_indexes( const Int_Set& indexes );
    void add_index( const unsigned& index );
    const Int_Set& get_indexes() const;
    bool is_before_left_bracket() const;
    bool is_before_left_iter_bracket() const;
    bool is_after_right_bracket() const;
    bool is_after_right_iter_bracket() const;
    bool is_before_term() const;
    bool is_after_term() const;
    bool is_prebase() const;
    bool is_base() const;
    bool is_start() const;
    bool is_end() const;
    //const Position operator=( const Position& position );
    Position( const char& left, const char& right );
    Position( const Position& position );
};

#endif /* end of include guard: POSITION_H */
