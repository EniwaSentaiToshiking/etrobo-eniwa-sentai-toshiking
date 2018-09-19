#include "RunStyle.h"
#include "CourceMonitor.h"
#include "Logger.h"

#ifndef LINETRACE_H
#define LINETRACE_H

enum Edge {
    LEFT, RIGHT,
};

class LineTrace : public RunStyle {

private:
    CourceMonitor *courceMonitor;
    int targetBrightness = 20;
    int speed = 0;
    Edge edge = LEFT;
    Logger* logger;

public:
    LineTrace(PID *pid, int targetBrightness, Edge edge, int speed);
    void init(){};

    /**
     * getTurnValue - ライントレース時(PID制御)の操作量を取得
     *
     * @param  {void} 
     * @return {int} 操作量
     */
    int getTurnValue();

    /**
     * getTurnValue - ライントレース時(OnOff制御)の操作量を取得
     *
     * @param  {void}
     * @return {int} 操作量
     */
    int getTurnValueByOnOFF();
    virtual ~LineTrace();

};

#endif