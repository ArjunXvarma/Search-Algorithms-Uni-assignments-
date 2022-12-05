#pragma once
#ifndef NODE_H

class Vector {
public:
	int x, y;

	Vector();
	Vector(int x, int y);
};

class Node {
public:
	int f, g, h;
	Node(Node Parent, Vector pos);
	Node();
	~Node();

private:

};
#endif // !NODE_H
