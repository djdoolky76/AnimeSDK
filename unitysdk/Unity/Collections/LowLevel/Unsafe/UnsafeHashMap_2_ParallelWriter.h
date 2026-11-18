#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMap_2_ParallelWriter_TypeDefinitionIndex = 18035;

	template <typename T1, typename T2>
	struct alignas(8) UnsafeHashMap_2_ParallelWriter
	{
		::PVOID m_Buffer; // 0x0
		::System::Int32 m_ThreadIndex; // 0x0
	};
}
