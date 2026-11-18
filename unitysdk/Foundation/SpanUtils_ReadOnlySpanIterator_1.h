#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int SpanUtils_ReadOnlySpanIterator_1_TypeDefinitionIndex = 8712;

	template <typename T>
	struct alignas(8) SpanUtils_ReadOnlySpanIterator_1
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<T> _span; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _step; // 0x0
	};
}
