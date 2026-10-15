#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimGameplayMode : ::System::UInt32
	{
		Default = 0,
		ChenLingGameBoy = 1,
		WaterReflection = 2,
		MiniGameCollectCoin = 4,
		FlappyMove = 8,
		MusicStage = 16,
		WindowStage = 32,
		Train = 64,
		SimpleUI = 256,
		HundredFloor = 512,
	};
}
