#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameNetMode_TypeDefinitionIndex = 36864;

	enum class LittleGameNetMode : ::System::Byte
	{
		DedicatedServer = 0,
		Standalone = 1,
	};
}
