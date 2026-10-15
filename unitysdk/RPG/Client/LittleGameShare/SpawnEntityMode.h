#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SpawnEntityMode_TypeDefinitionIndex = 36913;

	enum class SpawnEntityMode : ::System::Byte
	{
		Unknown = 0,
		Interpolated = 1,
		Predicted = 2,
	};
}
