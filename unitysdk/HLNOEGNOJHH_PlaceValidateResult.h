#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HLNOEGNOJHH_PlaceValidateResult_TypeDefinitionIndex = 77758;

	enum class HLNOEGNOJHH_PlaceValidateResult : ::System::Int32
	{
		Success = 0,
		InvalidCell = 1,
		OccupyConflict = 2,
		NoCurrentItem = 3,
		LockedState = 4,
		TutorialBlock = 5,
	};
