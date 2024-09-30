def solution(bridge_length, weight, truck_weights):
    answer = 0    
    bridge = [0] * bridge_length  
    currentWeight = 0    
    
    while len(truck_weights) > 0:  
        answer+=1
        currentWeight = currentWeight - bridge.pop(0)
        
        if currentWeight + truck_weights[0] <= weight:
            currentWeight += truck_weights[0]
            bridge.append(truck_weights.pop(0))
        else: 
            bridge.append(0)
        
    answer += bridge_length
    return(answer) 
