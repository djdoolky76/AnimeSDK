#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int BMAFAMLHDLE_TypeDefinitionIndex = 68930;

enum class BMAFAMLHDLE : ::System::Int32
{
	Skip = 1,
	NeedTriggerElevationFade = 4,
	NeedInterruptElevationFade = 8,
	PassedGuard = 2,
	NeedSetupCollider = 16,
	ElevationMask = 12,
	None = 0,
};
