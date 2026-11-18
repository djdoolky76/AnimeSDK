#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_BulletMode_TypeDefinitionIndex = 71768;

	enum class ShootingGroundSubsystem_BulletMode : ::System::Int32
	{
		BurstFire = 1,
		SingleShot = 0,
		ScopedShot = 2,
	};
}
