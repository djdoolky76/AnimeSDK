#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IPIBEOOJMBE_TeleportPhase_TypeDefinitionIndex = 60556;

	enum class IPIBEOOJMBE_TeleportPhase : ::System::Int32
	{
		Invalid = 0,
		Start = 1,
		WaitingScreenTransferIn = 2,
		WaitingNetwork = 3,
		DoLeaveFiveDim = 4,
		WaitingLeaveStreaming = 5,
		DoEnterFourRotate = 6,
		WaitingFourRotateEnter = 7,
		WaitingScreenTransferOut = 8,
		Finish = 9,
	};
