

def main() :

    n,m = map(int, input().split())

    max = -99
    for i in range(n) :
        data = list(map(int, input().split()))
        min_data = min(data)
        if max < min_data :
            max = min_data 

    print(max)

    return

if __name__ == "__main__" :
    main()