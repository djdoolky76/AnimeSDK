#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FMIHMGNLBPN_State_TypeDefinitionIndex = 68445;

	enum class FMIHMGNLBPN_State : ::System::Int32
	{
		Idle = 0,
		WaitDelay = 1,
		WaitGlobalCoolDown = 2,
		ReadyToSend = 3,
		WaitCoolDown = 4,
	};
