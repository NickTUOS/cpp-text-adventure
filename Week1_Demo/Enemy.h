#pragma once
#include "Item.h"
#include <string>

using std::string;

class Enemy
{
public:
	Enemy(string n, string d) : name(n), description(d) {}

	Enemy(string n, string des, int h, int d, int df) 
		: name(n), description(des), health(h), damage(d), defense(df) {}

	Enemy(string n, string des, int h, int d, int df, Item* it) 
		: name(n), description(des), health(h), damage(d), defense(df), drop_item(it) {}

	string get_description() const { return description; }
	string get_name() const { return name; }
	Item* get_drop_item() { return drop_item; }
	int get_health() const { return health; }
	int get_damage() const { return damage; }
	int get_defense() const { return defense; }
	void set_health(int n) { health = n; }

	void take_damage(int d);
	bool is_dead() const { return health == 0; }

private:
	Item* drop_item{ nullptr };
	string name;
	string description;
	int health{ 1 };
	int damage{ 1 };
	int defense{ 0 };
};

