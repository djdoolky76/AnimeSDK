#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeUtility_AlignOfHelper_1_TypeDefinitionIndex = 4007;

	template <typename T>
	struct alignas(8) UnsafeUtility_AlignOfHelper_1
	{
		::System::Byte dummy; // 0x0
		T data; // 0x0
	};
}
