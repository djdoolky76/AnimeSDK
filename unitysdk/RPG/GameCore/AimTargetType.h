#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AimTargetType_TypeDefinitionIndex = 24798;

	enum class AimTargetType : ::System::UInt16
	{
		MainTarget = 1,
		SubTarget = 2,
		All = 3,
	};
}
