#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_DblClickSnapping_TypeDefinitionIndex = 5199;

	enum class TextEditor_DblClickSnapping : ::System::Byte
	{
		WORDS = 0,
		PARAGRAPHS = 1,
	};
}
