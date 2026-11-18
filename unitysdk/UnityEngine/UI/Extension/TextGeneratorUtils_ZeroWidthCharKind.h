#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_ZeroWidthCharKind_TypeDefinitionIndex = 46062;

	enum class TextGeneratorUtils_ZeroWidthCharKind : ::System::Byte
	{
		Whitespace = 1,
		CombiningMark = 2,
		TagBody = 0,
	};
}
