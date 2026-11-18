#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBufferSpan_1_TypeDefinitionIndex = 28137;

	template <typename T>
	struct alignas(8) RingBufferSpan_1
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<T> First; // 0x0
		::System::ReadOnlySpan_1_F48FB86071006F3E<T> Second; // 0x0
		::System::Int32 Count; // 0x0
	};
}
