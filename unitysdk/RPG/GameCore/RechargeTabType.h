#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeTabType_TypeDefinitionIndex = 14767;

	enum class RechargeTabType : ::System::Int32
	{
		None = 0,
		SmallBanner = 1,
		BigBanner = 2,
	};
}
