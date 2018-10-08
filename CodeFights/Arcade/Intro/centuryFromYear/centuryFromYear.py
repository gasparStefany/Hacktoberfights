def centuryFromYear(year):
    result = 1 + (year - 1) // 100
    
    return(result)
# end centuryFromYear()

year = 2000

result = centuryFromYear(year)

print(result)