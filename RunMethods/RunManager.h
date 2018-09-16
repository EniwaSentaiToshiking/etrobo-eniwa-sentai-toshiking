#include "CourseRun.h"
#include "AIRun.h"
#include "Parking.h"
#include "Stop.h"
#include "Game.h"
#include "AiBlockMove.h"

#ifndef RUNMANAGER_H
#define RUNMANAGER_H

class RunManager {

private:
    Course course = L;
    // RunState state = COURSE_RUN;
    RunState state = AI_RUN;
    RunStatus *status;

public:
    RunManager();

    /**
     * init - 走行前の初期設定
     *
     * @param  {void}
     * @return {void}
     */
    void init();

    /**
     * run - 走行する
     *
     * @param  {void}
     * @return {void}
     */
    void run();
    void changeStatus(RunState state);
    virtual ~RunManager();
};

#endif
