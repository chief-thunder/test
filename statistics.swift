//  This is a program with various statistical math functions. For helping Elijah in grade 7 math.
//  Written by ct April, 2024

/*
    ** Range of values
    In statistics, the range is the spread of your data from the lowest to the highest value in the distribution.
    It is a commonly used measure of variability.

    R = H - L
*/


func range_of_values(high: Int, low: Int) -> Int {
    // R = H - L
    let R: Int = high - low
    return R
}

var high: Int
high = Int(readLine())
print("Enter the highest value: ")

var low: Int
low = Int(readLine())
print("Enter the lowest value: ")

var R = range_of_values(high, low)

print("The range of values is \(R)")