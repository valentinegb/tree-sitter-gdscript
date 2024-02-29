module.exports = grammar({
  name: 'gdscript',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameter_list,
      optional(seq(
        '->',
        $._type
      )),
      $.block
    ),

    parameter_list: $ => seq(
      '(',
      repeat(seq(
        $.identifier,
        choice(
          seq(
            optional(seq(
              ':',
              $._type
            )),
            optional(seq(
              '=',
              $._expression
            ))
          ),
          seq(
            ':=',
            $._expression
          )
        ),
        optional(',')
      )),
      ')'
    ),

    _type: $ => choice(
      'bool',
      'int',
      'String'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      ':',
      repeat($._statement)
    ),

    _statement: $ => choice(
      $.return_statement,
      $.pass_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression
    ),

    pass_statement: $ => 'pass',

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: $ => /\d+/,

    // TODO: escaping and such, plus other kinds of strings
    string: $ => seq(
      '"',
      /(?:[^"]|\\")*/,
      '"'
    )
  }
});
