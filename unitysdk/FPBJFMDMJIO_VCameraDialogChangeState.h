#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FPBJFMDMJIO_VCameraDialogChangeState_TypeDefinitionIndex = 69541;

	enum class FPBJFMDMJIO_VCameraDialogChangeState : ::System::Int32
	{
		WaitingStart = 0,
		ChangeToTarget = 1,
		ChangeToTargetFinish = 2,
		RecoveryToStart = 3,
		RecoveryToStartFinish = 4,
	};
