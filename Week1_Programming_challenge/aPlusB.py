# "python3"

def add(num_one, num_two):
    return num_one + num_two

if __name__ == '__main__':
    a , b = map(int, input().split())
    print(add(a, b))