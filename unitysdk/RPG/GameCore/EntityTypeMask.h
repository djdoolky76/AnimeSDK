#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTypeMask_TypeDefinitionIndex = 10437;

	enum class EntityTypeMask : ::System::UInt64
	{
		None = 0,
		All = 18446744073709551615,
		NoneType = 1,
		Avatar = 2,
		Monster = 4,
		LocalPlayer = 8,
		NPC = 16,
		NPCMonster = 32,
		StoryCharacter = 64,
		Prop = 128,
		Mission = 256,
		LevelEntity = 512,
		Neutral = 1024,
		AtmoNpc = 2048,
		BattleEvent = 4096,
		TutorialEntity = 8192,
		Team = 16384,
		Partner = 32768,
		LevelGraph = 65536,
		Snapshot = 131072,
		TeamFormation = 262144,
		Model = 524288,
		UICamera = 1048576,
		District = 2097152,
		GlobalShield = 4194304,
		CustomData = 8388608,
		Simple = 16777216,
		PuzzleGameObjectProp = 33554432,
		PerformanceLevelGraph = 67108864,
		Group = 134217728,
		RtCharacter = 268435456,
		RtGrid = 536870912,
		RtTrigger = 1073741824,
		SummonUnit = 2147483648,
		LittleGameInstance = 4294967296,
		Servant = 8589934592,
		PreviewShow = 17179869184,
		LittleGameContainer = 34359738368,
		LittleGameViewProxy = 68719476736,
		GridFightBackend = 137438953472,
		DummyEntity = 274877906944,
		Battle_AllEntity = 8589939206,
		Battle_VisibleControlled = 8589971462,
		Battle_AllActionEntity = 8589938694,
		Mask_TeamCharacters = 8858374206,
		Mask_AllVisibleControlled = 11005890622,
	};
}
