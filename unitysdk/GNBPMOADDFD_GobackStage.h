#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GNBPMOADDFD_GobackStage_TypeDefinitionIndex = 53530;

	enum class GNBPMOADDFD_GobackStage : ::System::Int32
	{
		BeforeGoback = 0,
		GoingBack = 1,
		OnBackToGuardPoint = 2,
	};
