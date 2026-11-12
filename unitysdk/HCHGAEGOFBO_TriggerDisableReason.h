#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HCHGAEGOFBO_TriggerDisableReason_TypeDefinitionIndex = 58689;

	enum class HCHGAEGOFBO_TriggerDisableReason : ::System::Int32
	{
		Default = 1,
		Hide = 2,
		FadeOut = 4,
		ImmediateHidden = 8,
	};
