#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_PartData_PartOutputType : ::System::Int32
	{
		NONE = 0,
		MESH = 1,
		VOLUME = 2,
		CURVE = 3,
		INSTANCER = 4,
	};
}
