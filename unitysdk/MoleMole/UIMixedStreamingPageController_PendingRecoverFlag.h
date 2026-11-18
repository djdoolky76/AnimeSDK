#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController_PendingRecoverFlag_TypeDefinitionIndex = 79221;

	enum class UIMixedStreamingPageController_PendingRecoverFlag : ::System::Int32
	{
		AnimationSkipped = 2,
		None = 0,
		SlotStateChanged = 1,
	};
}
