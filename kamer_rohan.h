#ifndef KAMER_ROHAN_H
#define KAMER_ROHAN_H

#include <QWidget>

namespace Ui {
  class kamer_rohan;
}

class hoofd_scherm;

class kamer_rohan : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_rohan(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_rohan();

private slots:

    void on_commandLinkButton_clicked();

    void on_buttonBox_accepted();

private:
  Ui::kamer_rohan *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_ROHAN_H
