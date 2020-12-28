#ifndef ELLIPCE_H
#define ELLIPCE_H
#include <QObject>
#include <QGraphicsItem>
#include "figure.h"

class Ellipce : public Figure
{
 //   Ellipce();
    Q_OBJECT

public:
    explicit Ellipce(QPointF point, QObject *parent = 0);
    ~Ellipce();

private:
    // Для окружности реализуем только саму отрисовку
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // ELLIPCE_H
