#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_Curve_CurveEditState : ::System::Int32
	{
		INVALID = 0,
		GENERATED = 1,
		EDITING = 2,
		REQUIRES_GENERATION = 3,
	};
}
