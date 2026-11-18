#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharStyleFlags_TypeDefinitionIndex = 88110;

	enum class NAP_CharStyleFlags : ::System::UInt16
	{
		Mark = 16,
		Bold = 1,
		Underline = 4,
		Italic = 2,
		None = 0,
		Link = 8,
	};
}
