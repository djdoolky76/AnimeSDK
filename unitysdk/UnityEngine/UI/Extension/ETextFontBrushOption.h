#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ETextFontBrushOption_TypeDefinitionIndex = 52404;

	enum class ETextFontBrushOption : ::System::Int32
	{
		ForceOff = 2,
		ForceOn = 1,
		ByConfig = 0,
	};
}
