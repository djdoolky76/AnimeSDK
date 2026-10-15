#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) ParameterCondition
	{
		::System::Boolean ModifyEmissionRateOverTime; // 0x10
		::System::Boolean ModifyShapeSpread; // 0x11
		::System::Boolean ModifyShapePosition; // 0x12
		::System::Boolean ModifyBurstsCount; // 0x13
	};
}
