#pragma once

#include <QObject>

class test  : public QObject
{
	Q_OBJECT

public:
	test(QObject *parent);
	~test();
};
