#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ColliderLayerType_TypeDefinitionIndex = 62112;

	enum class ColliderLayerType : ::System::Int32
	{
		EntityCollisionMonster = 3,
		Monster = 2,
		Default = 0,
		Character = 1,
		EntityCollisionAvatar = 4,
	};
}
