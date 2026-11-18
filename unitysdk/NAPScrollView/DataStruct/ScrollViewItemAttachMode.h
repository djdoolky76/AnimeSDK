#pragma once
#include "unitysdk/unitysdk.h"

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewItemAttachMode_TypeDefinitionIndex = 39716;

	enum class ScrollViewItemAttachMode : ::System::Int32
	{
		ToEnd = 0,
		ToStart = 1,
		Replace = 2,
	};
}
