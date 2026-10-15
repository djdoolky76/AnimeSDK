#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int CLNPNIOIEEL_PortalMoveState_TypeDefinitionIndex = 76994;

	enum class CLNPNIOIEEL_PortalMoveState : ::System::Int32
	{
		BeforeDelay = 0,
		Move = 1,
		AfterDelay = 2,
		Finish = 3,
	};
