#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionSegment_TypeDefinitionIndex = 75684;

	enum class InteractionSegment : ::System::Int32
	{
		BeginDrag = 1,
		Drag = 2,
		EndTwoPointDrag = 64,
		EndScroll = 16,
		BeforeTwoPointDrag = 32,
		None = 0,
		BeforeScroll = 8,
		EndDrag = 4,
	};
}
