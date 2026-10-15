#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FGHBKHHINFP_StopReason_TypeDefinitionIndex = 69164;

	enum class FGHBKHHINFP_StopReason : ::System::Int32
	{
		None = 0,
		TravelToStation = 1,
		TravelToStationStopPoint = 2,
		Avoidance = 3,
		TravelToEnd = 4,
	};
