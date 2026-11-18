#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewAdapter___c__DisplayClass191_0_TypeDefinitionIndex = 71327;

	struct alignas(8) LegacyScrollViewAdapter___c__DisplayClass191_0
	{
		::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam; // 0x10
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* __4__this; // 0x18
		::NAPScrollView::DataStruct::ScrollFloat start; // 0x20
		::NAPScrollView::DataStruct::ScrollFloat end; // 0x28
	};
}
