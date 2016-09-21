
#import foundation

func productsDiff(in theArray: [Int]) -> [Int] {
    let theArray2 = theArray
    var newArray: [Int] = []
    for (index, number) in theArray.enumerated() {
        print("The number is \(number)")
        print("The index is \(index)")
        var product = 1
        for (index2, number2) in theArray2.enumerated() {
            if index2 != index {
                product = product * number2
                
            }
            
        }
        newArray.append(product)
    }
    return newArray
    }
    
    productsDiff(in: [10, 4, 1, 6, 2])
    
    
    func dedupeSortedArray(in thisArray: [Int]) -> ([Int], Int) {
        var thisNewArray: [Int] = []
        for number in thisArray {
            if (thisArray.contains(number) && !thisNewArray.contains(number)) {
                thisNewArray.append(number)
            } else if (thisArray.contains(number) && thisNewArray.contains(number)) {
            }
        }
        print(thisNewArray)
        return (thisNewArray, thisNewArray.count)
    }
    
    dedupeSortedArray(in: [1,  4,  21, 21, 50, 50, 50, 50, 100, 101])
