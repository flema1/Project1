```cpp
#include<iostream>

int main()
{
    int a;
    std::cin >> a;
    if (a <= 10)
    {
        std::cout << "WOW";
    }
    else
    { 
        std::cout << "OMG";
    }
    return 0;
}

```

```cpp
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << "큰수는 " << a << std::endl;
    }
    else if (a < b)
    {
        std::cout << "큰수는 " << b << std::endl;
    }
    else
    {
        std::cout << "같은 숫자 " << a << std::endl;
    }

    return 0;
}
```

```cpp

#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    if (a == 5 || a == 10)
    {
        std::cout << "만새";
    }
    else
    {
        std::cout << "재도전";
    }
    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a == 7 && b == 9)
    {
        std::cout << "인증됨";
    }
    else
    {
        std::cout << "재시도";
    }
    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    // 증가 반복문
    for (int i = 3; i < 10; i++)
    {
        std::cout << i << std::endl;

    }

    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a < b)
    {
        for (int x = a; x <= b; x++)
        {
            std::cout << x << std::endl;
        }
    }

    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    for (int i = 0; i <= 25; i++)
    {
        std::cout << "PIZZAHOT" << std::endl;
    }
    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    for (int i = 0; i < a; i++)
    {
        std::cout << "##" << std::endl;
    }

    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    for (int a = 10; a >= 1; a--)
    {
        std::cout << a << std::endl;
    }

    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}

```

```cpp
#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    int b = (a * 2 + 20) / 5; // a 곱하기 2 하고 20 더하고 나누기 5 한후

    if (b != 100) // 그 값이 100이랑 안맞으면
    {
        std::cout << "Magic" << std::endl;
    }

    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    for (int i = 0; i <= a; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b + c > 10)
        std::cout << a * b * c << std::endl;
    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    for (int i = 5; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
```

```cpp
#include <iostream>

int main()
{
    for (int i = -5; i <= 5; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
```
