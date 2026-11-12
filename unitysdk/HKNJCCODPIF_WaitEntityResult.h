#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HKNJCCODPIF_WaitEntityResult_TypeDefinitionIndex = 62152;

	enum class HKNJCCODPIF_WaitEntityResult : ::System::Int32
	{
		Ready = 0,
		Waiting = 1,
		NotFound = 2,
		Failed = 3,
	};
