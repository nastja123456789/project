#include "ellipce.h"
#include <QPainter>

Ellipce::Ellipce(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Ellipce::~Ellipce()
{

}

void Ellipce::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black, 2));
    //QPolygonF polygon;

    /*QRectF rect(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                qAbs(endPoint().x() - startPoint().x()),
                qAbs(endPoint().y() - startPoint().y()));

    painter->drawRect(rect);
*/
    QRectF rectangle(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                     endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                     qAbs(endPoint().x() - startPoint().x()),
                     qAbs(endPoint().y() - startPoint().y()));

    painter->drawEllipse(rectangle);
    //painter->drawPolygon(polygon);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

