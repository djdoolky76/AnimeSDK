#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAParamRef_TypeDefinitionIndex = 4802;

	struct alignas(4) BAParamRef
	{
		::System::Int16 graphIndex; // 0x10
		::System::Int16 paramIndex; // 0x12
	};
}
