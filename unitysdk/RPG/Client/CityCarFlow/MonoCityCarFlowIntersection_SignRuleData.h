#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CityCarFlow
{
	struct alignas(4) MonoCityCarFlowIntersection_SignRuleData
	{
		::System::Int32 Value; // 0x10
		::System::Single Duration; // 0x14
	};
}
