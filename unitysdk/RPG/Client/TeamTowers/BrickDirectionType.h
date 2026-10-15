#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int BrickDirectionType_TypeDefinitionIndex = 79023;

	enum class BrickDirectionType : ::System::UInt32
	{
		Clockwise = 0,
		CounterClockwise = 1,
	};
}
