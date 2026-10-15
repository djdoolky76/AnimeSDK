#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AnimatorParameterType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Bool = 2,
		Trigger = 3,
	};
}
