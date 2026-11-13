#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int BrickControlType_TypeDefinitionIndex = 81798;

	enum class BrickControlType : ::System::UInt32
	{
		SwipeControl = 0,
		ButtonControl = 1,
	};
}
