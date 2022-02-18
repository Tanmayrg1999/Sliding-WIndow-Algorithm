public int lengthOfLongestSubstring(String s) {
        int maxl=0;
        int size =s.length();
        for(int i=size;i>0;i--) //size of substring
        {
            for(int j=0;j<size-i+1;j++)
            {
                for(int k=j;k<i+j;k++)
                {
                    System.out.print(s.charAt(k));        
                }
            System.out.println();
            }
        }
        return 0;
    }
