import XCTest
import SwiftTreeSitter
import TreeSitterLogcat

final class TreeSitterLogcatTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_logcat())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Android Tree-sitter Logcat grammar")
    }
}
