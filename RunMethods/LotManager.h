#ifndef LOTMANAGER_H
#define LOTMANAGER_H

#include "Lot.h"
#include "ev3api.h"

#define ARRAY_LEN(ARR) (sizeof(ARR) / sizeof((ARR)[0]))

enum Course
{
    L,
    R
};

class LotManager
{

private:
  unsigned int current_lot;
  Lot *lot_list[];

  void courseR();
  void courseL();

public:
  LotManager(Course course);
  virtual ~LotManager();

  int getCurrentLot();
  int getCurrentLotSpeed();
  PID *getCurrentLotPID();
  Lot *getNextLotInfo();
  void changeCurrentLot();
  bool isChangeCurrentLot();
  bool isFinish();
};

#endif