#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameClientNetMode_TypeDefinitionIndex = 36865;

	enum class LittleGameClientNetMode : ::System::Byte
	{
		Unknown = 0,
		PVE = 1,
		PVP = 2,
		Replay = 3,
	};
}
