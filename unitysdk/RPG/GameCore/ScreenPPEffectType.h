#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenPPEffectType_TypeDefinitionIndex = 25260;

	enum class ScreenPPEffectType : ::System::Int32
	{
		Unknown = 0,
		MotionBlur = 1,
	};
}
