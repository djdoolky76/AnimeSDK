#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PoseSwitcherType_TypeDefinitionIndex = 61992;

	enum class PoseSwitcherType : ::System::Int32
	{
		Inward = 0,
		Outward = 1,
	};
}
