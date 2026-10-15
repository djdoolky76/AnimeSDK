#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OMEHCMEGIHO_FailureReason_TypeDefinitionIndex = 62355;

	enum class OMEHCMEGIHO_FailureReason : ::System::Int32
	{
		None = 0,
		AlreadyConnected = 1,
		Crossing = 2,
		OutOfBounds = 3,
		NotEnoughEnergy = 4,
		Other = 5,
	};
