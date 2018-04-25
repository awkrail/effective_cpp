#include <iostream>

class CTextBlock {
  public:
    CTextBlock(const char* text);
    const char& operator[](std::size_t position) const {
      return pText[position];
    }
  
  private:
    const char* pText;
};

CTextBlock::CTextBlock(const char* text) {
  pText = text;
}

int main() {
  const CTextBlock cctb("Hello");
  std::cout << cctb[0] << std::endl;
}