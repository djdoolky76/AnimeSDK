#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeType_TypeDefinitionIndex = 75446;

	enum class ENodeType : ::System::Int32
	{
		HoldPress = 4,
		HoldRelease = 5,
		HoldSegment = 6,
		Touch = 3,
		Dodge = 1,
		Hold = 2,
		Tap = 0,
	};
}
