#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeList_1_ParallelWriter_TypeDefinitionIndex = 18021;

	template <typename T>
	struct alignas(8) NativeList_1_ParallelWriter
	{
		::PVOID Ptr; // 0x0
		::PVOID ListData; // 0x0
	};
}
