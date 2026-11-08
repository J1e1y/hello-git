try:
    n = int(input("请输入一个整数: "))
except ValueError:
    print("输入错误")
else:
    print(f"{n} 的平方是 {n * n}")
