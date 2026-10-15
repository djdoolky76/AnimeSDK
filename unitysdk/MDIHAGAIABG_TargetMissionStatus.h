#pragma once
#include "unitysdk/unitysdk.h"
	enum class MDIHAGAIABG_TargetMissionStatus : ::System::Int32
	{
		UnfinishedOrDisabled = 0,
		FinishedInCurrentVersion = 1,
		FinishedInOtherVersion = 2,
		InvalidStatus = 3,
	};
