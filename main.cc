#include <vector>
class A{
    std::vector<int> a_;
    public:
    A()
    {
        a_ = std::vector<int>{1,2,3,4};
    }
    auto const& a() const  { return a_;}
};

int main()
{
    std::vector<A> list(100);
    std::vector<std::vector<int>> g(100);
#pragma omp parallel for
    for(std::size_t i=0; i < 100; ++i){
        g[i] = list[i].a();
    }
}
