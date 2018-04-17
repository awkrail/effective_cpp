#include <iostream>

class Hoge {
  public:
    static const int fuga;
};

class GamePlayer {
  private:
    enum { NumTurns = 5 };
    int scores[NumTurns];
};