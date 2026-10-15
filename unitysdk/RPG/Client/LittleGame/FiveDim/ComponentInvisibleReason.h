#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class ComponentInvisibleReason : ::System::UInt32
	{
		None = 0,
		Default = 1,
		Task = 2,
		PhantomPlayerDefault = 4,
		DestructProp = 8,
		SwitchPlatform = 16,
		WaterReflection = 32,
		EntityVisible = 64,
		FlappyPipeRebuild = 128,
		DisableMove = 256,
		FloatingSpirit = 512,
		GarbageBin = 1024,
		WaterReflectionGridViewColliderClip = 2048,
		WindowStage = 4096,
		SpikeTrap = 8192,
		MinionDying = 16384,
		PlayerReset = 32768,
		GravitySwitchLine = 65536,
		Portal = 131072,
		MoneyWeeklyLimit = 262144,
		Crystal = 524288,
		CustomLoadFade = 1048576,
		GravityFieldRing = 2097152,
		DashOrb = 4194304,
		MinionInit = 8388608,
		SimpleHitBox = 16777216,
		CrystalFreeze = 33554432,
		ConveyorDirection = 134217728,
		PlayerDash = 67108864,
		Max = 2147483648,
	};
}
