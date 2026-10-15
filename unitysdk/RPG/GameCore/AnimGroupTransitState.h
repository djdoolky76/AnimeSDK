#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimGroupTransitState_TypeDefinitionIndex = 55907;

	enum class AnimGroupTransitState : ::System::Byte
	{
		None = 0,
		In = 1,
		Out = 2,
	};
}
