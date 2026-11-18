#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextDataNeeds_TypeDefinitionIndex = 76334;

	enum class TextDataNeeds : ::System::Byte
	{
		CharLineInfo = 2,
		LinkInfo = 4,
		LayoutAdjustment = 16,
		RichTag = 1,
		None = 0,
		QuadInfo = 8,
	};
}
