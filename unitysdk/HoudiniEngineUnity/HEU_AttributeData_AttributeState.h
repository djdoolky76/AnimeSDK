#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_AttributeData_AttributeState : ::System::Int32
	{
		INVALID = 0,
		SYNCED = 1,
		LOCAL_DIRTY = 2,
	};
}
