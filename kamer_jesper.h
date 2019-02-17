#ifndef KAMER_JESPER_H
#define KAMER_JESPER_H

#include <QWidget>

namespace Ui {
  class kamer_jesper;
}

class hoofd_scherm;

class kamer_jesper : public QWidget
{
  Q_OBJECT

public:
  explicit kamer_jesper(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_jesper();

private slots:

    void on_pushButton_clicked();

    void on_toolButton_pressed();

    void on_toolButton_released();

private:
  Ui::kamer_jesper *ui;

  int m_x = 30;
  int m_y = 225;
  int click = 0;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_JESPER_H
