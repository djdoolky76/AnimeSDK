#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DMCFCBIOINC_TypeDefinitionIndex = 70212;

enum class DMCFCBIOINC : ::System::Int32
{
	Ignore = 2,
	Success = 0,
	FailedAndForceStopAll = 1,
};
