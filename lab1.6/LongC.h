#pragma once
class LongC
{
private:
	class Pair {
	private:
		int first;
		int second;

	public:
		int getFirst() const { return first; }
		void setFirst(int f) { first = f; }

		int getSecond() const { return second; }
		void setSecond(int s) { second = s; }

		Pair add(const Pair& other) const;
	};

	Pair number;

public:
	void Init(const Pair& num);
	void Read();
	void Display() const;

	void setFirst(int f);
	void setSecond(int s);
	int getFirst() const { return number.getFirst(); };
	int getSecond() const { return number.getSecond(); };

	LongC add(const LongC& other) const;
	LongC multiply(const LongC& other) const;
	LongC subtract(const LongC& other) const;
};
