#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_AssetTask_BuildType : ::System::Int32
	{
		NONE = 0,
		LOAD = 1,
		COOK = 2,
		RELOAD = 3,
	};
}
