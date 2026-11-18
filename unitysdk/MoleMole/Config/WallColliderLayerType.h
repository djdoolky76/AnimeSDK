#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WallColliderLayerType_TypeDefinitionIndex = 45323;

	enum class WallColliderLayerType : ::System::Int32
	{
		EntityCollisionWallCharacter = 1,
		EntityCollisionWallMonster = 2,
		Default = 0,
	};
}
