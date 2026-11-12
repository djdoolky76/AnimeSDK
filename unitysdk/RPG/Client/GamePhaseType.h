#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseType_TypeDefinitionIndex = 62508;

	enum class GamePhaseType : ::System::Int32
	{
		Unknown = 0,
		ClientStartup = 1,
		DevClientStartup = 2,
		GameDev = 3,
		VersionUpdate = 4,
		EnterGame = 5,
		InitGame = 6,
		SelectServer = 7,
		SDKLogin = 8,
		LoginWait = 9,
		FullPackageDownload = 10,
		PreDownload = 11,
		VersionUpdateCheck = 12,
		Adventure = 13,
		BattleLineup = 14,
		BattleLineupV2 = 15,
		GridFightDev = 16,
		QABattleLineup = 17,
		Battle = 18,
		BattleNew = 19,
		Replay = 20,
		DevLevel = 21,
		RenderTest = 22,
		StoryTest = 23,
		AdventureMapTest = 24,
		AssetMemStatisticsTest = 25,
		Empty = 26,
	};
}
