#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobThreadDelegateHandleArray_TypeDefinitionIndex = 5070;

	struct alignas(4) JobThreadDelegateHandleArray
	{
		::System::Int32 numHandles; // 0x10
		::System::Byte _padding0[0x4];
		::System::IntPtr handles; // 0x18
	};
}
