# RSA Program


The RSA (Rivest-Shamir-Adleman) algorithm is a widely used public-key cryptosystem that facilitates secure data transmission by relying on the computational difficulty of factoring large prime numbers. It enables secure encryption and digital signatures by using a pair of keys: a public key for encryption and a private key for decryption.

You are given a public key P = (e, n), and an encoded message represented as a series of numbers. The program first takes the public key P as input, along with the length of the encoded message. The length of the encoded message is calculated by the formula q = n / p, where n = p * q.

Once the value of q is determined, you can input your encoded message. The program will then decrypt the message, converting the numbers into readable words.
