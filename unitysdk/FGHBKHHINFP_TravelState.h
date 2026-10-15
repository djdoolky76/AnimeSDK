#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FGHBKHHINFP_TravelState_TypeDefinitionIndex = 69163;

	enum class FGHBKHHINFP_TravelState : ::System::Int32
	{
		Boost = 0,
		AvoidanceBoost = 1,
		ConstantTravel = 2,
		Braking = 3,
		HardBraking = 4,
		Stop = 5,
	};
