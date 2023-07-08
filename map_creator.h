#ifndef MAP_CREATOR_H
#define MAP_CREATOR_H
#include <QVector>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QStringList>
#include <QGraphicsView>
#include <QGraphicsItem>
#include "wall.h"
#include <fstream>
#include <iostream>
#include <string>

class MapCreator {
  public:
    MapCreator() = default;
    MapCreator(const std::string&);

    void setFile(const std::string&);

    void CreateMap(QGraphicsScene *scene);
    QSet<Wall*> w_list = {};

  private:
    std::string file_name;
};

#endif // MAP_CREATOR_H
