#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetResult.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
class MonoUITableScrollV2_TableScrollPluginScrollToTarget;

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass28_0_TypeDefinitionIndex = 40104;

struct alignas(8) MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass28_0
{
	::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam; // 0x10
	::MonoUITableScrollV2_TableScrollPluginScrollToTarget* __4__this; // 0x18
	::NAPScrollView::DataStruct::ScrollToTargetContext context; // 0x20
	::NAPScrollView::DataStruct::ScrollToTargetResult scrollToTargetResult; // 0x58
};
