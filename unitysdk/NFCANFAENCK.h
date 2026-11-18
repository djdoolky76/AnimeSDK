#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NFCANFAENCK_TypeDefinitionIndex = 95069;

enum class NFCANFAENCK : ::System::Int32
{
	OnEntityHJump = 15,
	OnEntityMove = 2,
	OnChangeAvatar = 1,
	OnEatComp = 13,
	LocalPlayerCreated = 0,
	OnLPChange = 14,
	EntityReused = 5,
	EntityRecycled = 4,
	OnChangeAvatarStart = 6,
	OnSpeedLevelSync = 11,
	OnReposAll = 8,
	OnCurveGenerated = 9,
	OnChangeAvatarFinish = 7,
	StartCountDown = 10,
	OnGameStageChange = 3,
	OnTileGenerated = 12,
};
