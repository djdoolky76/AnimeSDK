#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace NAPScrollView::DataStruct { class NotSimpleScrollToTargetService; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleScrollToTargetService___c__DisplayClass64_0_TypeDefinitionIndex = 72186;

	struct alignas(8) NotSimpleScrollToTargetService___c__DisplayClass64_0
	{
		::NAPScrollView::DataStruct::NotSimpleScrollToTargetService* __4__this; // 0x10
		::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam; // 0x18
		::NAPScrollView::DataStruct::ScrollFloat start; // 0x20
		::NAPScrollView::DataStruct::ScrollFloat viewRectEnd; // 0x28
		::NAPScrollView::DataStruct::ScrollFloat end; // 0x30
		::NAPScrollView::DataStruct::ScrollFloat viewRectStart; // 0x38
	};
}
