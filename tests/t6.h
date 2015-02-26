/* BEGIN HEADER */
#ifndef t6_INCLUDE_
#define t6_INCLUDE_

#include <assert.h>
#include <unordered_map>
#include <utility>

#include "classp.h"

// Include files generated by bison
#include "t6.yacc.hh"
#include "location.hh"
#include "position.hh"

namespace t6 {
using std::istream;
using std::ostream;
using classp::classpPrint;
using classp::classpFormat;
using classp::AttributeMap;

// Location and state information from the parser.
typedef location ParseState;

class AstNode;
/* BEGIN FORWARD DECLARATIONS */
class A;
class B;
class C;
class D;
class E;
/* END FORWARD DECLARATIONS */

// Base class for t6 AST nodes
class AstNode : public classp::ClasspNode {
 public:
  string className() override { return "AstNode"; }
  AstNode(ParseState parseState)
    : parseState(parseState) {
    }

  // Write out a bracketed form of this AST from the declared syntax.
  virtual void bracketFormat(std::ostream& out, AstNode* self) {
    assert(false);
  }

  ParseState parseState;
};

/* BEGIN CLASS DEFINITIONS */
class A: public AstNode {
 public:
  string className() override { return "A"; }
  A(ParseState parseState, AttributeMap& keyword_args);
  void printMembers(ostream& out) override;
  void format(ostream& out, int precedence) override;

  vector<int> a1;
};

class B: public AstNode {
 public:
  string className() override { return "B"; }
  B(ParseState parseState, AttributeMap& keyword_args);
  void printMembers(ostream& out) override;
  void format(ostream& out, int precedence) override;

  vector<int> a1;
  vector<int> a2;
};

class C: public AstNode {
 public:
  string className() override { return "C"; }
  C(ParseState parseState, AttributeMap& keyword_args);
  void printMembers(ostream& out) override;
  void format(ostream& out, int precedence) override;

  vector<int> a1;
  vector<int> a2;
};

class D: public AstNode {
 public:
  string className() override { return "D"; }
  D(ParseState parseState, AttributeMap& keyword_args);
  void printMembers(ostream& out) override;
  void format(ostream& out, int precedence) override;

  vector<int> a1;
  vector<int> a2;
  vector<int> a3;
  vector<int> a4;
};

class E: public AstNode {
 public:
  string className() override { return "E"; }
  E(ParseState parseState);
  void printMembers(ostream& out) override;
  void format(ostream& out, int precedence) override;

};
/* END CLASS DEFINITIONS */

}  // namespace t6
#endif // t6_INCLUDE_

/* END HEADER */
