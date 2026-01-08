/**
 * @file Android Logcat Tree-sitter parser
 * @author vinnom <vinnom.2d@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "logcat",

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => "hello",
    },
});
