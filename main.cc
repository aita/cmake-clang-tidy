#include <stdio.h>

class Foo {
public:
  Foo() = default;

private:
  int bar_;
};

int main(int argc, char ** /*argv*/) {
  const char *cpc;
  const char *cpc2 = cpc;
  short b = argc;
  printf("hello world\n");
  return b;
}
