// 
void primeGen(){
	const int lim = 1e6 + 6;
	int factor[lim];	factor[0] = factor[1] = -1;
	for(int i = 0; i < lim; i++)	factor[i] = 0;
	for(int i = 2; i < lim; i++){
		if(factor[i] == 0){
			factor[i] = i;
			if(1ll * i * i < 1ll * lim)
			for(int j = i * i; j < lim; j += i){
				if(factor[j] == 0)	factor[j] = i;
			}
		}
	}
}

// inverse mod p.
// http://codeforces.com/blog/entry/5457?#comment-106714
inv[1] = 1;
for (int i=2; i<p; ++i)
	inv[i] = (p - (p/i) * inv[p%i] % p) % p;

