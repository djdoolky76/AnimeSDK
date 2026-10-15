#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyValuePair_2_TypeDefinitionIndex = 1530;

	template <typename T1, typename T2>
	struct alignas(8) KeyValuePair_2
	{
		T1 key; // 0x0
		T2 value; // 0x0
	};
}
