import cProfile

if __name__ == "__main__":
    cProfile.run('exec(open("lru_cache.py").read())', sort="cumulative")
