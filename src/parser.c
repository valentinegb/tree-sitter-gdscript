#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_func = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_EQ = 5,
  anon_sym_COLON_EQ = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_bool = 9,
  anon_sym_int = 10,
  anon_sym_String = 11,
  anon_sym_return = 12,
  sym_pass_statement = 13,
  sym_identifier = 14,
  sym_number = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_function_definition = 20,
  sym_parameter_list = 21,
  sym__type = 22,
  sym_block = 23,
  sym__statement = 24,
  sym_return_statement = 25,
  sym__expression = 26,
  sym_string = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_parameter_list_repeat1 = 29,
  aux_sym_block_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_String] = "String",
  [anon_sym_return] = "return",
  [sym_pass_statement] = "pass_statement",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_return] = anon_sym_return,
  [sym_pass_statement] = sym_pass_statement,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_pass_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 13,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_pass_statement);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 41},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_pass_statement] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__definition] = STATE(7),
    [sym_function_definition] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      sym_pass_statement,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_func,
    STATE(3), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [16] = 4,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      sym_pass_statement,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_func,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(22), 1,
      sym_pass_statement,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_func,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [48] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(27), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [63] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 2,
      sym_identifier,
      sym_number,
    STATE(14), 2,
      sym__expression,
      sym_string,
  [75] = 3,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [87] = 3,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_func,
    STATE(8), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [99] = 3,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 2,
      sym_identifier,
      sym_number,
    STATE(17), 2,
      sym__expression,
      sym_string,
  [111] = 3,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 2,
      sym_identifier,
      sym_number,
    STATE(21), 2,
      sym__expression,
      sym_string,
  [123] = 2,
    STATE(15), 1,
      sym__type,
    ACTIONS(50), 3,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_String,
  [132] = 2,
    STATE(24), 1,
      sym__type,
    ACTIONS(52), 3,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_String,
  [141] = 1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_return,
      sym_pass_statement,
  [148] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_return,
      sym_pass_statement,
  [155] = 3,
    ACTIONS(58), 1,
      anon_sym_EQ,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [166] = 3,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [176] = 2,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [184] = 3,
    ACTIONS(68), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_block,
  [194] = 3,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_parameter_list_repeat1,
  [204] = 3,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [214] = 2,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [222] = 1,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [228] = 1,
    ACTIONS(83), 2,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [233] = 2,
    ACTIONS(70), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_block,
  [240] = 1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_func,
  [245] = 1,
    ACTIONS(87), 2,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [250] = 1,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [255] = 1,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [260] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_func,
  [265] = 2,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parameter_list,
  [272] = 1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [277] = 1,
    ACTIONS(97), 1,
      aux_sym_string_token1,
  [281] = 1,
    ACTIONS(99), 1,
      sym_identifier,
  [285] = 1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
  [289] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [293] = 1,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
  [297] = 1,
    ACTIONS(107), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 214,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 228,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 240,
  [SMALL_STATE(26)] = 245,
  [SMALL_STATE(27)] = 250,
  [SMALL_STATE(28)] = 255,
  [SMALL_STATE(29)] = 260,
  [SMALL_STATE(30)] = 265,
  [SMALL_STATE(31)] = 272,
  [SMALL_STATE(32)] = 277,
  [SMALL_STATE(33)] = 281,
  [SMALL_STATE(34)] = 285,
  [SMALL_STATE(35)] = 289,
  [SMALL_STATE(36)] = 293,
  [SMALL_STATE(37)] = 297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gdscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
