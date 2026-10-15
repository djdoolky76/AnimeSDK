#pragma once
#include "unitysdk/unitysdk.h"
	enum class CKMJPGPLECG_TeleportPhase : ::System::Int32
	{
		Invalid = 0,
		Start = 1,
		WaitingScreenTransferIn = 2,
		WaitingTargetGroupLoaded = 3,
		WaitingStreaming = 4,
		WaitingNetwork = 5,
		DoTeleport = 6,
		WaitingCameraAndPlayerReady = 7,
		WaitingCameraBlendFinish = 8,
		WaitingScreenTransferOut = 9,
		Finish = 10,
	};
