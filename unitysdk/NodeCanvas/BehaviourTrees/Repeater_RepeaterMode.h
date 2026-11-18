#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_RepeaterMode_TypeDefinitionIndex = 29392;

	enum class Repeater_RepeaterMode : ::System::Int32
	{
		RepeatTimes = 0,
		RepeatUntil = 1,
		RepeatForever = 2,
	};
}
