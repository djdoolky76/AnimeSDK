#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotatableRegionLoadingState_TypeDefinitionIndex = 25005;

	enum class RotatableRegionLoadingState : ::System::Int32
	{
		Unload = 0,
		Loading = 1,
		Ready = 2,
	};
}
