#include "line.h"
#include <QPainter>

Line::Line(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Line::~Line()
{

}

void Line::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black, 4, Qt::DashDotLine, Qt::RoundCap));
    painter->drawLine(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                      endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                      qAbs(endPoint().x() - startPoint().x()),
                      qAbs(endPoint().y() - startPoint().y()));
    Q_UNUSED(option)
    Q_UNUSED(widget)
}
