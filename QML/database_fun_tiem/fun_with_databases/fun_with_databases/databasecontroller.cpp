#include "databasecontroller.h"


/*
 * Author: Ashley Tharp
 * date created: 3/18/2016
 * */

DatabaseController::DatabaseController()
{


}

QString DatabaseController::getOfflineStoragePath()
{

    return QQmlEngine::offlineStoragePath();

}
