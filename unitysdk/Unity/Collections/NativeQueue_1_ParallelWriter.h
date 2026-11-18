#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueue_1_ParallelWriter_TypeDefinitionIndex = 18027;

	template <typename T>
	struct alignas(8) NativeQueue_1_ParallelWriter
	{
		::PVOID m_Buffer; // 0x0
		::PVOID m_QueuePool; // 0x0
		::System::Int32 m_ThreadIndex; // 0x0
	};
}
