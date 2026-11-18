#pragma once
#include "unitysdk/unitysdk.h"

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollToTargetContext_ScrollDirection_TypeDefinitionIndex = 73319;

	enum class ScrollToTargetContext_ScrollDirection : ::System::Int32
	{
		ToEnd = 2,
		ToStart = 1,
		None = 3,
		Auto = 0,
	};
}
