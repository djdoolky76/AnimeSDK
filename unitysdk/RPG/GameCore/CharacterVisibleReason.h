#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleReason_TypeDefinitionIndex = 57224;

	enum class CharacterVisibleReason : ::System::Byte
	{
		Default = 0,
		Dither = 1,
		Camera = 2,
		CameraForceHide = 3,
		CumstomCounter = 4,
		DebugCommand = 5,
		Inspector = 6,
		Lod = 7,
		Task = 8,
		TaskUniqueKey = 9,
		TeamManager = 10,
		ControledByPlayer = 11,
		Performance = 12,
		MonsterSneak = 13,
		Puzzle = 14,
		PhotoGraph = 15,
		MapRotation = 16,
		MapRotationEffect = 17,
		MapRotationGroupUnload = 18,
		IsometricView = 19,
		GroupVisibility = 20,
		PuzzleMotion = 21,
		MonsterResetPos = 22,
		PerformanceDebug = 23,
		TrainParty = 24,
		Skill = 25,
		EraFlipDeviceControl = 26,
		FiveDimGame = 27,
		CharacterFormation = 28,
		TeamFormation = 29,
		Departed = 30,
		GlobalControl = 31,
		EffectLoading = 32,
		FollowFieldEfx = 33,
		Teleport = 34,
		AnimEvent = 35,
		BlockDither = 36,
		Activity = 37,
		SummonUnit = 38,
		CakeCatch = 39,
		ConditionAutoVisible = 40,
	};
}
