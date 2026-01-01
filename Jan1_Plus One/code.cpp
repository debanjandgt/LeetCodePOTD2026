class Solution {
  public: vector < int > plusOne(vector < int > & digits) {
    int carry = 0;
    int val = digits[digits.size() - 1];
    val = val + 1 + carry;
    digits[digits.size() - 1] = val % 10;
    carry = val == 10 ? 1 : 0;
    if (carry >= 1) {
      for (int i = digits.size() - 2; carry && i >= 0; i--) {
        int val = digits[i];
        val = val + carry;
        digits[i] = val % 10;
        carry = digits[i] == 0 ? 1 : 0;
      }
    }
    if (carry >= 1)
      digits.insert(digits.begin(), 1);
    return digits;
  }
};

--TC -> O(n)
--SC -> O(1)
