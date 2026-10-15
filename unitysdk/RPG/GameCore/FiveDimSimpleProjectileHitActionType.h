#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimSimpleProjectileHitActionType : ::System::UInt32
	{
		None = 0,
		BeatBack = 1,
		RecoverCrystal = 2,
		SpawnMinion = 4,
		HitCrystal = 8,
		SpawnMinionWhenHitOther = 16,
	};
}
