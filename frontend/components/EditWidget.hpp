#pragma once

#include <QLineEdit>
#include <QModelIndex>

class QPersistentModelIndex;

class EditWidget : public QLineEdit {
	Q_OBJECT

public:
	inline EditWidget(QWidget *parent, QModelIndex index_) : QLineEdit(parent), index(index_) {}

	QPersistentModelIndex index;
};
