#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationTimeTotalDamageToastType_TypeDefinitionIndex = 25105;

	enum class ElationTimeTotalDamageToastType : ::System::Int32
	{
		None = 0,
		Default = 1,
		Nihilux = 2,
		NihiluxSkin = 3,
		Gluttony = 4,
	};
}
