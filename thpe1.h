#pragma once
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

string getCCType(string cardNum);
bool americanExpress(string cardNum);
bool discover(string cardNum);
bool masterCard(string cardNum);
bool visaCard(string cardNum);
bool creditContainsDig(string cardNum);
bool creditLenGood(string cardNum);
bool isValidCC(string cardNum);

