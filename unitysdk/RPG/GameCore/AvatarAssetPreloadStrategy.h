#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AvatarAssetPreloadStrategy : ::System::UInt16
	{
		None = 0,
		SilenceLoad = 1,
		PreloadOnEnterMaze = 2,
		UnloadOnExitMaze = 4,
		PreloadOnEnterBattle = 8,
		UnloadOnExitBattle = 16,
		PreloadBeforeUse = 32,
		UnloadAfterUse = 64,
		UnloadOnPlayVideoInMaze = 128,
		UnloadOnPlayVideoInBattle = 256,
		PreloadOnEnterBattleByConfig = 512,
		OnlyEffectOnTeamLeader = 1024,
	};
}
