#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeParamNotifyType_TypeDefinitionIndex = 25256;

	enum class GameModeParamNotifyType : ::System::Int32
	{
		RemainDelaySlice = 0,
	};
}
