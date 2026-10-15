#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_HoudiniRampInterpolationTypeWrapper : ::System::Int32
	{
		CONSTANT = 0,
		LINEAR = 1,
		CATMULL_ROM = 2,
	};
}
