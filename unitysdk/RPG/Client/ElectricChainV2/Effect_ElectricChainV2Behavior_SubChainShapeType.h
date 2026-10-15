#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ElectricChainV2
{
	enum class Effect_ElectricChainV2Behavior_SubChainShapeType : ::System::Int32
	{
		Emitter = 0,
		Receiver = 1,
		MainChain = 2,
		Nowhere = 3,
	};
}
