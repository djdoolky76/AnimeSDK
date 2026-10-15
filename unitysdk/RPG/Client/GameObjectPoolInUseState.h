#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectPoolInUseState_TypeDefinitionIndex = 59378;

	enum class GameObjectPoolInUseState : ::System::Byte
	{
		Unused = 0,
		UnusedInCache = 1,
		InUse = 2,
	};
}
