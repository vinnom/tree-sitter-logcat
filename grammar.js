/**
 * @file Tree-sitter parser for Logcat
 * @author vinnom <vinnom.2d@gmail.com>
 * @license MIT
 */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const DATE = "(\\d{2}-\\d{2})";
const TIME = "(\\d{2}:\\d{2}:\\d{2}\\.\\d{3})";
const IDS = "\\s+(?:(\\w+)\\s+)?(\\w+)\\s+(\\w+)";
const CONTENT = "\\s+(.*?):(.*)";

function logPattern(levelChar) {
    return new RustRegex(
        DATE + "\\s+" + TIME + IDS + "\\s+" + levelChar + CONTENT,
    );
}

module.exports = grammar({
    name: "tree_sitter_logcat",

    rules: {
        lines: $ => repeat(choice(
            $.verbose_line,
            $.debug_line,
            $.info_line,
            $.warning_line,
            $.error_line,
            $.fatal_line,
            $.any_non_log_line,
        )),

        verbose_line: $ => token(prec(1, logPattern("V"))),

        debug_line: $ => token(prec(1, logPattern("D"))),

        info_line: $ => token(prec(1, logPattern("I"))),

        warning_line: $ => token(prec(1, logPattern("W"))),

        error_line: $ => token(prec(1, logPattern("E"))),

        fatal_line: $ => token(prec(1, logPattern("F"))),

        any_non_log_line: $ => /.+/,
    },
});
