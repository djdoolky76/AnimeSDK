#pragma once
#include "unitysdk/unitysdk.h"
	enum class PEBBBNOOCFO_PoseEntitiesLoadingState : ::System::Int32
	{
		NotLoading = 0,
		Pending = 1,
		WaitingNavmesh = 2,
		LoadingEntities = 3,
		RefineLoadedEntities = 4,
		WaitingMapRotateDamping = 5,
		Finish = 6,
	};
