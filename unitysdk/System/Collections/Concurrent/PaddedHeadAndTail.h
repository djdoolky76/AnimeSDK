#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int PaddedHeadAndTail_TypeDefinitionIndex = 1508;

	struct alignas(4) PaddedHeadAndTail
	{
		::System::Int32 Head; // 0x90
		::System::Byte _padding0[0x7C];
		::System::Int32 Tail; // 0x110
	};
}
