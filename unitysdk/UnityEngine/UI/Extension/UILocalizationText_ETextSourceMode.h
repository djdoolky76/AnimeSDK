#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_ETextSourceMode_TypeDefinitionIndex = 69441;

	enum class UILocalizationText_ETextSourceMode : ::System::Int32
	{
		TextFunc = 3,
		None = 0,
		TextString = 1,
		Key = 2,
	};
}
