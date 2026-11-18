#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobThreadDelegatePtrArray_TypeDefinitionIndex = 5071;

	struct alignas(4) JobThreadDelegatePtrArray
	{
		::System::Int32 numPtrs; // 0x10
		::System::Byte _padding0[0x4];
		::System::IntPtr ptrs; // 0x18
	};
}
