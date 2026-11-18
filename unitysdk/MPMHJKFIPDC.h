#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MPMHJKFIPDC_TypeDefinitionIndex = 54170;

enum class MPMHJKFIPDC : ::System::Int32
{
	HackChargeStart = 1,
	HackPulseChargeFailure = 3,
	HackRangeChargeMax = 6,
	HackRangeChargeStart = 4,
	HackRangeChargeConfirm = 5,
	None = 0,
	HackPulseChargeSuccess = 2,
};
