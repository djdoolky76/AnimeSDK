#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DAPLNDLJPMP_EPoolCapacityModifierType_TypeDefinitionIndex = 60963;

	enum class DAPLNDLJPMP_EPoolCapacityModifierType : ::System::Int32
	{
		OnLowMemory = 0,
		OnActivityLeaveBattleEdit = 1,
		OnPlayingVideo = 2,
		Count = 3,
	};
