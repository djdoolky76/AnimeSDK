#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShootingBulletEntry_ShootBulletType_TypeDefinitionIndex = 90380;

	enum class AnimatorEventShootingBulletEntry_ShootBulletType : ::System::Int32
	{
		BurstFire = 1,
		SingleShot = 0,
		ScopedShot = 2,
	};
}
