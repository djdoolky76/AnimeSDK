#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DNGDKOGLNFP_LeavePhase_TypeDefinitionIndex = 60535;

	enum class DNGDKOGLNFP_LeavePhase : ::System::Int32
	{
		Invalid = 0,
		Start = 1,
		WaitingScreenTransferIn = 2,
		WaitingNetwork = 3,
		DoMapRotation = 4,
		WaitingMapRotationFinish = 5,
		DoLeave = 6,
		WaitingStreaming = 7,
		WaitingScreenTransferOut = 8,
		Finish = 9,
	};
