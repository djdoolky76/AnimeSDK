#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2;

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollMeta_TypeDefinitionIndex = 58469;

	struct alignas(8) ScrollMeta
	{
		::MonoUITableScrollV2* scrollView; // 0x10
		::System::Single CurrentPosition; // 0x18
		::System::Single ScrollDelta; // 0x1C
	};
}
