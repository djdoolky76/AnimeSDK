#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int StructFlags_TypeDefinitionIndex = 27734;

	enum class StructFlags : ::System::UInt32
	{
		NoFlags = 0,
		IsNative = 1,
		IsPlainOldData = 2,
		ShouldClone = 4,
		ShouldDispose = 8,
		CanMove = 16,
		CanZeroCreate = 32,
		HasAllocator = 64,
	};
}
