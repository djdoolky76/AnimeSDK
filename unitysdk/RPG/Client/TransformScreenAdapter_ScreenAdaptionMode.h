#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TransformScreenAdapter_ScreenAdaptionMode_TypeDefinitionIndex = 72309;

	enum class TransformScreenAdapter_ScreenAdaptionMode : ::System::Int32
	{
		None = 0,
		ManualAdaption = 1,
		AutoAdaption = 2,
	};
}
