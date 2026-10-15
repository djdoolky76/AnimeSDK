#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ACPBENOMMMA_Phase_TypeDefinitionIndex = 58443;

	enum class ACPBENOMMMA_Phase : ::System::Int32
	{
		None = 0,
		Prepare = 1,
		Toast = 2,
		Presight = 3,
		Shot = 4,
		Homing = 5,
		Finish = 6,
	};
