package tree_sitter_logcat_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_logcat "github.com/vinnom/tree-sitter-logcat/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_logcat.Language())
	if language == nil {
		t.Errorf("Error loading Android Tree-sitter Logcat grammar")
	}
}
