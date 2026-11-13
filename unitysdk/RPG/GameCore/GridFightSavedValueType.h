#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSavedValueType_TypeDefinitionIndex = 13676;

	enum class GridFightSavedValueType : ::System::Int32
	{
		kUnknown = 0,
		kAugment = 1,
		kPortal = 2,
		kAffix = 3,
		kTrait = 4,
		kRoleLocal = 5,
		kRoleGlobal = 6,
		kSpotLight = 7,
		kSpecialGoods = 8,
	};
}
