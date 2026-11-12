#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameNetMode_TypeDefinitionIndex = 37792;

	enum class LittleGameNetMode : ::System::Byte
	{
		DedicatedServer = 0,
		Standalone = 1,
	};
}
