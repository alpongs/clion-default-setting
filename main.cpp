#include "base.h"
using namespace std;


int main() {

    const auto &uniquePtr = std::make_unique<Person>("I.YOON", 44);
    uniquePtr->ShowPersonInfo();
    Person *pPerson = uniquePtr.get();
    pPerson->ShowPersonInfo();

    return 0;
}
