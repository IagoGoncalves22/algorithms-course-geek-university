#Variables
contador_total = 0
contador_sit_1 = 0
contador_sit_2 = 0
contador_sit_3 = 0
contador_sit_4 = 0
#Input
identificador = int(input("Informe a identificação: "))
#Process
while identificador != 0:
    print("1 - Necessidade de esfera.")
    print("2 - Necessidade de limpeza.")
    print("3 - Necessidade troca do cabo ou conector.")
    print("4 - Quebrado ou inutilizado.")
    #Input
    defeito = int(input("Informe o tipo de defeito: "))
    #Process
    if defeito == 1:
        contador_sit_1 = contador_sit_1 + 1
    elif defeito == 2:
        contador_sit_2 = contador_sit_2 + 1
    elif defeito == 3:
        contador_sit_3 = contador_sit_3 + 1
    elif defeito == 4:
        contador_sit_4 = contador_sit_4 + 1
    contador_total = contador_total + 1
    #Input
    identificador = int(input("Informe a identificação: "))
p1 = contador_sit_1 / contador_total * 100            
p2 = contador_sit_2 / contador_total * 100            
p3 = contador_sit_3 / contador_total * 100            
p4 = contador_sit_4 / contador_total * 100            
print("Situação                                  Quantidade       Percentual")
print("1 - necessidade de esfera                   {0}               {1:.2f}%".format(contador_sit_1, p1))
print("2 - necessidade de limpeza                  {0}               {1:.2f}%".format(contador_sit_2, p2))
print("3 - necessidade troca do cabo ou conector   {0}               {1:.2f}%".format(contador_sit_3, p3))
print("4 - quebrado ou inutilizado                 {0}               {1:.2f}%".format(contador_sit_4, p4))
