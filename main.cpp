#include <cassert>
#include <iostream>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode *deleteDuplicates(ListNode *head) {
    // FIXME
    return head;
  }
};

ListNode *MakeList(const std::vector<int> &numbers) {
  ListNode *head = nullptr;
  for (auto iter = numbers.rbegin(); iter != numbers.rend(); ++iter) {
    head = new ListNode{*iter, head};
  }

  return head;
}

void AssertEq(ListNode *lhs, ListNode *rhs) {
  while (lhs) {
    assert(rhs);
    assert(lhs->val == rhs->val);
    lhs = lhs->next;
    rhs = rhs->next;
  }
}

void TestDeleteDuplicates() {
  Solution s;
  AssertEq(MakeList({1, 2}), s.deleteDuplicates(MakeList({1, 1, 2})));
  AssertEq(MakeList({1, 2}), s.deleteDuplicates(MakeList({1, 1, 2, 3, 3})));
}

int main() {
  TestDeleteDuplicates();
  std::cout << "Ok!" << std::endl;
  return 0;
}
