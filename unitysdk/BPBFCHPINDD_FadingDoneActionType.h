#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int BPBFCHPINDD_FadingDoneActionType_TypeDefinitionIndex = 73797;

	enum class BPBFCHPINDD_FadingDoneActionType : ::System::Int32
	{
		None = 0,
		TransitionFadingDone = 1,
		VisibleShow = 2,
		HideFadingDone = 3,
		HideToPreload = 4,
	};
