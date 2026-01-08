#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_verbose_line = 1,
  sym_debug_line = 2,
  sym_info_line = 3,
  sym_warning_line = 4,
  sym_error_line = 5,
  sym_fatal_line = 6,
  sym_any_non_log_line = 7,
  sym_lines = 8,
  aux_sym_lines_repeat1 = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_verbose_line] = "verbose_line",
  [sym_debug_line] = "debug_line",
  [sym_info_line] = "info_line",
  [sym_warning_line] = "warning_line",
  [sym_error_line] = "error_line",
  [sym_fatal_line] = "fatal_line",
  [sym_any_non_log_line] = "any_non_log_line",
  [sym_lines] = "lines",
  [aux_sym_lines_repeat1] = "lines_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_verbose_line] = sym_verbose_line,
  [sym_debug_line] = sym_debug_line,
  [sym_info_line] = sym_info_line,
  [sym_warning_line] = sym_warning_line,
  [sym_error_line] = sym_error_line,
  [sym_fatal_line] = sym_fatal_line,
  [sym_any_non_log_line] = sym_any_non_log_line,
  [sym_lines] = sym_lines,
  [aux_sym_lines_repeat1] = aux_sym_lines_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_verbose_line] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_line] = {
    .visible = true,
    .named = true,
  },
  [sym_info_line] = {
    .visible = true,
    .named = true,
  },
  [sym_warning_line] = {
    .visible = true,
    .named = true,
  },
  [sym_error_line] = {
    .visible = true,
    .named = true,
  },
  [sym_fatal_line] = {
    .visible = true,
    .named = true,
  },
  [sym_any_non_log_line] = {
    .visible = true,
    .named = true,
  },
  [sym_lines] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lines_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead == 'V') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'V') ADVANCE(32);
      if (lookahead == 'W') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(5);
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(6);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'V') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == 'W') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(69);
      if (lookahead == 'W') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'V') ADVANCE(65);
      if (lookahead == 'W') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 69:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_verbose_line);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_debug_line);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_info_line);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_warning_line);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_error_line);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_fatal_line);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'V') ADVANCE(119);
      if (lookahead == 'W') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'V') ADVANCE(136);
      if (lookahead == 'W') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'V') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'V') ADVANCE(137);
      if (lookahead == 'W') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'W') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(101);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == 'V') ADVANCE(139);
      if (lookahead == 'W') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'V') ADVANCE(140);
      if (lookahead == 'W') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == 'V') ADVANCE(141);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_any_non_log_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_verbose_line] = ACTIONS(1),
    [sym_debug_line] = ACTIONS(1),
    [sym_info_line] = ACTIONS(1),
    [sym_warning_line] = ACTIONS(1),
    [sym_error_line] = ACTIONS(1),
    [sym_fatal_line] = ACTIONS(1),
    [sym_any_non_log_line] = ACTIONS(1),
  },
  [1] = {
    [sym_lines] = STATE(4),
    [aux_sym_lines_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_verbose_line] = ACTIONS(5),
    [sym_debug_line] = ACTIONS(5),
    [sym_info_line] = ACTIONS(5),
    [sym_warning_line] = ACTIONS(5),
    [sym_error_line] = ACTIONS(5),
    [sym_fatal_line] = ACTIONS(5),
    [sym_any_non_log_line] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_lines_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_verbose_line] = ACTIONS(9),
    [sym_debug_line] = ACTIONS(9),
    [sym_info_line] = ACTIONS(9),
    [sym_warning_line] = ACTIONS(9),
    [sym_error_line] = ACTIONS(9),
    [sym_fatal_line] = ACTIONS(9),
    [sym_any_non_log_line] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_lines_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_verbose_line] = ACTIONS(13),
    [sym_debug_line] = ACTIONS(13),
    [sym_info_line] = ACTIONS(13),
    [sym_warning_line] = ACTIONS(13),
    [sym_error_line] = ACTIONS(13),
    [sym_fatal_line] = ACTIONS(13),
    [sym_any_non_log_line] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lines, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lines_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lines_repeat1, 2), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tree_sitter_logcat(void) {
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
