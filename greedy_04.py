def main() :

    n, k = map(int,input().split())
    count = 0

    while 1 : 
        if n == 1 : 
            break

        if n%k == 0 :
            n = n/k
        else : 
            n -= 1
        count += 1

    print(count)

    return

if __name__ == "__main__" :
    main()