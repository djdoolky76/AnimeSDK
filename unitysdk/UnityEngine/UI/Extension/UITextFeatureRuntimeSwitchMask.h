#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextFeatureRuntimeSwitchMask_TypeDefinitionIndex = 70547;

	enum class UITextFeatureRuntimeSwitchMask : ::System::Int32
	{
		Default = 3,
		LinkInteraction = 2,
		Underline = 1,
		None = 0,
		TermInteraction = 4,
	};
}
