//Операции пресваивания
Student& Student::operator=(const Student& s)
{
	if (&s == this)return *this;
	age = s.age;
	name = s.name;
	return *this;
}

Employee& Employee::operator=(const Employee& e)
{
	if (&e == this)return *this;
	age = e.age;
	name = e.name;
	post = e.post;
	return *this;
}

Teacher& Teacher::operator=(const Teacher& t)
{
	if (&t == this)return *this;
	age = t.age;
	name = t.name;
	post = t.post;
	stage = t.stage;
	return *this;
}
