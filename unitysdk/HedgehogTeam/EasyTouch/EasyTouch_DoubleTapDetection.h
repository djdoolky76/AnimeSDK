#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_DoubleTapDetection_TypeDefinitionIndex = 41304;

	enum class EasyTouch_DoubleTapDetection : ::System::Int32
	{
		BySystem = 0,
		ByTime = 1,
	};
}
