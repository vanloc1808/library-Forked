#define PROBLEM \
  "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D"

#include "../competitive-template.cpp"
#include "../segment-tree/range-update-range-sum-lazyseg.cpp"

void solve() {
  ini(N, Q);
  int I = (1LL << 31) - 1;
  UpdateSum_LazySegmentTree<int> seg{vi(N,I)};
  rep(_, Q) {
    ini(c);
    if (c == 0) {
      ini(s, t, x);
      t++;
      seg.update(s, t, x);
    } else {
      ini(i);
      out(seg.query(i, i + 1));
    }
  }
}