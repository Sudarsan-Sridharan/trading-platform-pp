#ifndef COMPANYNEWSCARD_H
#define COMPANYNEWSCARD_H

#include <QWidget>

namespace Ui {
class CompanyNewsCard;
}

class CompanyNewsCard : public QWidget {
  Q_OBJECT

 public:
  explicit CompanyNewsCard(QString id, QString headline, QString url,
                           QString timestamp,
                           QWidget *parent = nullptr);
  ~CompanyNewsCard();
  void debug();

 private:
  Ui::CompanyNewsCard *ui;
};

#endif // COMPANYNEWSCARD_H
