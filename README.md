# RSA Program


The RSA (Rivest-Shamir-Adleman) algorithm is a widely used public-key cryptosystem that facilitates secure data transmission by relying on the computational difficulty of factoring large prime numbers. It enables secure encryption and digital signatures by using a pair of keys: a public key for encryption and a private key for decryption.

You are given a public key P = (e, n), and an encoded message represented as a series of numbers. The program first takes the public key P as input, along with the length of the encoded message. The length of the encoded message is calculated by the formula q = n / p, where n = p * q.

Once the value of q is determined, you can input your encoded message. The program will then decrypt the message, converting the numbers into readable words.


Here is a sample to decrypt Bob's encoded message

![image-url](https://github.com/user-attachments/assets/42715717-fc34-494b-933d-813dd1e46f90)



1400 2218   99 2088 4191   84  843   99 4191 3780  764 4191 2979 2269   99  764 
 2218 2269 2088  843 3015   99 2970 1443 1655   99 3237 2979   99  447 1443 3237 
 1032 2382  871  843 1655   99  871 1443   99 4242  843   99 4191 2269   99  843 
 4191 2269 2979   99  871 1443   99 2382 2269  843   99 4191 2269   99 3237 2979 
   99  871  843 3780  843 1032 2088 1443 2962  843 2916   99 3237 2979   99  764 
 2218 2269 2088   99 2088 4191 2269   99  447 1443 3237  843   99  871 1655 2382 
  843   99 4242  843  447 4191 2382 2269  843   99 2218   99  447 4191 2962   99
 2962 1443   99 3780 1443 2962 1294  843 1655   99 2970 2218 1294 2382 1655  843 
   99 1443 2382  871   99 2088 1443  764   99  871 1443   99 2382 2269  843   99 
 3237 2979   99  871  843 3780  843 1032 2088 1443 2962  843 2916 1400
