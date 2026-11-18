#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OKNJLJLDCIP_TypeDefinitionIndex = 88397;

enum class OKNJLJLDCIP : ::System::Int32
{
	NotHandled = 1,
	WaitingResource = 2,
	WaitingCullCheck = 6,
	Failed = 4,
	NoneOrEnded = 0,
	ResourceReady = 3,
	WaitingTrack = 7,
	Playing = 5,
};
