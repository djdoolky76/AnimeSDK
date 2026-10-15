#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"
#include "unitysdk/ZLinq/Internal/InlineArray27_1.h"

namespace ZLinq::Internal
{
	inline static constexpr unsigned int SegmentedArrayProvider_1_TypeDefinitionIndex = 6152;

	template <typename T>
	struct alignas(8) SegmentedArrayProvider_1
	{
		::System::Span_1_0C0D59FF8BC7380B<T> currentSegment; // 0x0
		::System::Int32 countInCurrentSegment; // 0x0
		::System::Span_1_0C0D59FF8BC7380B<T> initialBuffer; // 0x0
		::ZLinq::Internal::InlineArray27_1<::Il2CppArray<T>*> segments; // 0x0
		::System::Int32 segmentsCount; // 0x0
		::System::Int32 countInFinishedSegments; // 0x0
	};
}
