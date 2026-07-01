#include <cadical.hpp>
#include <cassert>

int main() {
    CaDiCaL::Solver solver;
    int var = solver.declare_one_more_variable();
    assert(var == 1);
    solver.add(var);
    solver.add(0);
    int res = solver.solve();
    assert(res == 10);
    res = solver.val(1);
    assert(res > 0);
    return 0;
}
