#ifndef FIGURE_H
#define FIGURE_H

#include <QObject>
#include <QGraphicsItem>
#include <QDebug>

class Figure : public QObject, public QGraphicsItem
{
    Q_OBJECT

    Q_PROPERTY(QPointF startPoint
               READ startPoint WRITE setStartPoint
               NOTIFY pointChanged)

    Q_PROPERTY(QPointF endPoint
               READ endPoint WRITE setEndPoint
               NOTIFY pointChanged)
public:
    explicit Figure(QPointF point, QObject *parent = 0);
    ~Figure();

    QPointF startPoint() const;
    QPointF endPoint() const;

    void setStartPoint(const QPointF point);
    void setEndPoint(const QPointF point);

signals:
    void pointChanged();
private:
    QPointF m_startPoint;   // Стартовая точка
    QPointF m_endPoint;     // Конечная точка

    QRectF boundingRect() const;    // Область, в которой содержится фигура

public slots:
    void updateRomb();     // Слот обновления области, в которой содержится фигура
};

#endif // FIGURE_H
