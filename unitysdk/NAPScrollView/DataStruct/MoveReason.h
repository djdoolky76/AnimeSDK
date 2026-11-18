#pragma once
#include "unitysdk/unitysdk.h"

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int MoveReason_TypeDefinitionIndex = 69765;

	enum class MoveReason : ::System::Int32
	{
		Drag = 8,
		DampingRecover = 5,
		Rolling = 4,
		UnKnow = 0,
		SelectAlign = 2,
		ScrollGroup = 6,
		MouseScroll = 10,
		ScrollBar = 9,
		Move = 1,
		GridAlign = 3,
		ContentCompensate = 7,
	};
}
