#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_SessionSyncData_Status : ::System::Int32
	{
		Stopped = 0,
		Started = 1,
		Connecting = 2,
		Initializing = 3,
		Connected = 4,
	};
}
