#pragma once

#include "TemplateGameState.h"
#include "InterfaceDeterminationModel.h"
#include "InterfaceBehaviorModel.h"
#include "RunSectionParam.h"
#include <vector>

#include "DebugUtil.h"

using namespace ev3api;
using namespace std;

class BlockBingoGameState : public TemplateGameState
{
  InterfaceDeterminationModel interfaceDeterminationModel;
  InterfaceBehaviorModel interfaceBehaviorModel;
  vector<RunSectionParam> runSectionParamVector;

  ArmDeviceDriver armDeviceDriver;

  DebugUtil d;

public:
  BlockBingoGameState();
  void init();
  void createRunSectionL();
  void createRunSectionR();
  void run();
  bool isFinished();
  void terminate();

private:
  void lineTraceBetweenCircles();
  void straightCircle();
  void rightTurnCircle90Degree();
  void rightCarryInBlock45Degree();
  void rightReturnLine45Degree();
  /* もしブロックビンゴエリアの情報を保持していたらブロックの有無で動作を変えたかった要求の関数*/
  void straightHoldBlock();
  void rightTurnRHoldBlock90Degree();

  void straightHoldCarryInBlock();
  void straightPassThroughCircle();
  void rightTurnHoldCarryInBlock();
  void rightTurnPassThroughCircle();
};
