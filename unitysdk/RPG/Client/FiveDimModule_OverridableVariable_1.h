#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	template <typename T>
	struct alignas(8) FiveDimModule_OverridableVariable_1
	{
		T _OriginValue; // 0x0
		::System::Boolean _IsOverride; // 0x0
		T _OverrideValue; // 0x0
	};
}
