#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_EventType_TypeDefinitionIndex = 75768;

	enum class AbyssS2_EventType : ::System::Int32
	{
		OnArea_Finish = 1,
		None = 0,
		OnArea_OnSelected = 3,
		OnArea_RoomReady = 2,
		OnMap_ReGen = 10,
	};
}
