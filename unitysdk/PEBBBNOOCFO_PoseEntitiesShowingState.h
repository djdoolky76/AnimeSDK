#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PEBBBNOOCFO_PoseEntitiesShowingState_TypeDefinitionIndex = 60607;

	enum class PEBBBNOOCFO_PoseEntitiesShowingState : ::System::Int32
	{
		NotShowing = 0,
		Pending = 1,
		WaitingNavmesh = 2,
		ShowingEntities = 3,
		WaitingMapRotateDamping = 4,
		Finish = 5,
	};
