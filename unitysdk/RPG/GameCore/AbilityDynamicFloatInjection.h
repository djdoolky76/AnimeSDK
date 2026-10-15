#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore
{
	struct alignas(4) AbilityDynamicFloatInjection
	{
		::System::Int32 Hash; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Value; // 0x18
	};
}
