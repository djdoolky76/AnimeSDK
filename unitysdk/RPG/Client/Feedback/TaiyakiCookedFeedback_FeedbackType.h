#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Feedback
{
	inline static constexpr unsigned int TaiyakiCookedFeedback_FeedbackType_TypeDefinitionIndex = 78546;

	enum class TaiyakiCookedFeedback_FeedbackType : ::System::Int32
	{
		None = 0,
		CookedFlop = 1,
		RestockDrop = 2,
	};
}
