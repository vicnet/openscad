#pragma once

#include <QTableView>

class FontListTableView : public QTableView
{
	Q_OBJECT;

public:
        FontListTableView(QWidget *parent = NULL);
        void setDragText(const QString &text);

protected:
        void startDrag(Qt::DropActions supportedActions);

private:
        QString text;
};
