#Variables
vetor = []
#Input
for n in range(0, 10):
    num = int(input("Informe o valor para o vetor: "))
    vetor.append(num)
#Process
vetor.reverse()
for n in vetor:
    print(n)    