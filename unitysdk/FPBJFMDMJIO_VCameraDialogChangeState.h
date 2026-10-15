#pragma once
#include "unitysdk/unitysdk.h"
	enum class FPBJFMDMJIO_VCameraDialogChangeState : ::System::Int32
	{
		WaitingStart = 0,
		ChangeToTarget = 1,
		ChangeToTargetFinish = 2,
		RecoveryToStart = 3,
		RecoveryToStartFinish = 4,
	};
