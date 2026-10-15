#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LONPBELAPJO_ENavigationState_TypeDefinitionIndex = 68799;

	enum class LONPBELAPJO_ENavigationState : ::System::Int32
	{
		None = 0,
		Waitting = 1,
		PreSteer = 2,
		Moving = 3,
	};
