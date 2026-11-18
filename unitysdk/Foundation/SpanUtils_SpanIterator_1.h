#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int SpanUtils_SpanIterator_1_TypeDefinitionIndex = 8711;

	template <typename T>
	struct alignas(8) SpanUtils_SpanIterator_1
	{
		::System::Span_1_9011FAD97750D224<T> _span; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _step; // 0x0
	};
}
