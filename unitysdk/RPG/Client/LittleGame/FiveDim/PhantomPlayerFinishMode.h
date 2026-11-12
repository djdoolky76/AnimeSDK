#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFinishMode_TypeDefinitionIndex = 44396;

	enum class PhantomPlayerFinishMode : ::System::Int32
	{
		Destroy = 0,
		Loop = 1,
		Permanent = 2,
	};
}
