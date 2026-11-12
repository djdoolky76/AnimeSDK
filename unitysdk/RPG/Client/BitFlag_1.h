#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BitFlag_1_TypeDefinitionIndex = 61248;

	template <typename T>
	struct alignas(4) BitFlag_1
	{
		::System::UInt32 _BitFlag; // 0x0
	};
}
