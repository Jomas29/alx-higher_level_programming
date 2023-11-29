#!/usr/bin/python3
word = "Holberton"
word_first_3, *middle_word, word_last_2 = word
word_first_3 = ''.join(word_first_3[:3])
word_last_2 = ''.join(word_last_2[-2:])
middle_word = ''.join(middle_word)
print(f"First 3 letters: {word_first_3}")
print(f"Last 2 letters: {word_last_2}")
print(f"Middle word: {middle_word}")
