#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ClickSoundType_TypeDefinitionIndex = 48605;

	enum class UIButtonEx_ClickSoundType : ::System::Int32
	{
		Mute = -1,
		Negative = 2,
		Tab = 1,
		Default = 0,
	};
}
