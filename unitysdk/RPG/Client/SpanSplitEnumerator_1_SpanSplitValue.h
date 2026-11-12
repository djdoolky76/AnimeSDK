#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpanSplitEnumerator_1_SpanSplitValue_TypeDefinitionIndex = 6573;

	template <typename T>
	struct alignas(8) SpanSplitEnumerator_1_SpanSplitValue
	{
		::System::Int32 _StartIndex_k__BackingField; // 0x0
		::System::Int32 _Length_k__BackingField; // 0x0
		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<T> _Source_k__BackingField; // 0x0
	};
}
