struct Test
{
    int a = 3;
    int b = 4;
};

int main(int argc, char const *argv[])
{
    Test a {};
    std::cout<<a.a;
}

