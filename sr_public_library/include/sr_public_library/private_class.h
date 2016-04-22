#pragma once

#include <string>

class MyPrivateCLass
{
public:
  MyPrivateCLass(int initialValue):value(initialValue){};
  int getValue();
  void setValue(int newValue);
  std::string getSomeValue();

private:
  int value;
};
