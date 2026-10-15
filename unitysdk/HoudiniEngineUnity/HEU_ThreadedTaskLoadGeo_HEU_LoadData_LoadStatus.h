#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus : ::System::Int32
	{
		NONE = 0,
		STARTED = 1,
		SUCCESS = 2,
		ERROR = 3,
	};
}
