#include <iostream>
#include <string>
#include <list>

class PhoneNumber {
  public:
    std::string number;
};

class ABEntry {
  public:
    ABEntry(const std::string& name, const std::string& address,
            const std::list<PhoneNumber>& phones);
  
  private:
    std::string theName;
    std::string theAddress;
    std::list<PhoneNumber> thePhones;
    int numTimesConsulted;
};

/**
ABEntry::ABEntry(const std::string& name, const std::string& address,
                const std::list<PhoneNumber>& phones) {
  theName = name;
  theAddress = address;
  thePhones = phones;
  numTimesConsulted = 0;
}
**/

ABEntry::ABEntry(const std::string& name, const std::string& address,
                const std::list<PhoneNumber>& phones) :
                theName(name),
                theAddress(address),
                thePhones(phones),
                numTimesConsulted(0) {}

int main() {

}