#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int ViewGravityInterpolationFlag_TypeDefinitionIndex = 43442;

	enum class ViewGravityInterpolationFlag : ::System::Byte
	{
		None = 0,
		GravityLine = 1,
		GravityFieldRing = 2,
	};
}
