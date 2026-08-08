class Solution(object):
    def maxProfit(self, prices):  
        n=len(prices)
        minprices=prices[0]
        maxprices=0
        for i in range(n):
            minprices=min(minprices,prices[i])
            profit=prices[i]-minprices
            maxprices=max(maxprices,prices[i]-minprices) 
        return maxprices

        """
        :type prices: List[int]
        :rtype: int
        """
        