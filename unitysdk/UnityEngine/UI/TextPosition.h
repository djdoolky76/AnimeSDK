#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextPosition_TypeDefinitionIndex = 6758;

	struct alignas(4) TextPosition
	{
		::System::Int64 column; // 0x10
		::System::Int64 line; // 0x18
	};
}
