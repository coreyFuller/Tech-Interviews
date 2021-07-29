start = 'cat'
end = 'techno'

start_dict = {}
end_dict = {}

outputs = []
removal = {}

for letter in start:
    if letter not in end:
        if letter not in removal:
            removal[letter] = 1
        else:
            removal[letter] += 1
    if letter not in start_dict:
        start_dict[letter] = 1
    else:
        start_dict[letter] += 1


for letter in end:        
    if letter not in end_dict:
        end_dict[letter] = 1
    else:
        end_dict[letter] += 1

for letter in end_dict:
    if letter in start_dict:
        diff = end_dict[letter] - start_dict[letter] 
        if  diff > 0:
            outputs.append(f"added {diff} {letter}'s")
        elif diff < 0:
            outputs.append(f"removed {abs(diff)} {letter}'s")
    else:
        outputs.append(f"added {end_dict[letter]} {letter}'s")

for letter in removal:
    outputs.append(f"removed {removal[letter]} {letter}'s")


print(outputs)
