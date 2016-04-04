Compile questionA (g++ -o questionA questionA.cpp)
Compile questionB (make)

B的原因經過測試當n=10000時，時間為sort 32seconds   insertionsort 52326seconds，以nlogn和n^2比較可得當n=10000時
差2500倍的空間複雜度所以造成此結果
