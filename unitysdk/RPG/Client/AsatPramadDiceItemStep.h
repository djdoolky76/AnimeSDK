#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AsatPramadDiceItemStep_TypeDefinitionIndex = 68792;

	enum class AsatPramadDiceItemStep : ::System::Int32
	{
		SelectRelic = 1,
		SelectAffix = 2,
		Enhance = 3,
	};
}
