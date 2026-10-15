#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAccelerateMode_TypeDefinitionIndex = 77412;

	enum class ChimeraDuelAccelerateMode : ::System::Byte
	{
		Normal = 0,
		Accelerate = 1,
		SuperAccelerate = 2,
	};
}
