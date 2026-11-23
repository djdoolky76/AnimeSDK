#pragma once
#include "unitysdk/unitysdk.h"

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int EAB29E78CB60DCA3_FAFE0F15F64F9EED_TypeDefinitionIndex = 13820;

	enum class EAB29E78CB60DCA3_FAFE0F15F64F9EED : ::System::Int32
	{
		None = 0,
		PropagationStopped = 1,
		ImmediatePropagationStopped = 2,
		DefaultPrevented = 4,
		Dispatching = 8,
		Pooled = 16,
		IMGUIEventIsValid = 32,
		StopDispatch = 64,
		PropagateToIMGUI = 128,
		Dispatched = 512,
		Processed = 1024,
		ProcessedByFocusController = 2048,
	};
}
