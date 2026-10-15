#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MDIHAGAIABG_TargetMissionStatus_TypeDefinitionIndex = 52645;

	enum class MDIHAGAIABG_TargetMissionStatus : ::System::Int32
	{
		UnfinishedOrDisabled = 0,
		FinishedInCurrentVersion = 1,
		FinishedInOtherVersion = 2,
		InvalidStatus = 3,
	};
