#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpanSplitter_1_TypeDefinitionIndex = 6571;

	template <typename T>
	struct alignas(8) SpanSplitter_1
	{
		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<T> _source; // 0x0
		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<T> _separator; // 0x0
	};
}
