#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IOENLEKDIFC_TypeDefinitionIndex = 93797;

enum class IOENLEKDIFC : ::System::Int32
{
	FromCore_SkillClearBullets = 211,
	FromCore_GameEventResult = 214,
	FromCore_FullScreenEffect = 220,
	FromCore_TriggerGameEvent = 213,
	FromCore_CameraShake = 219,
	FromCore_SkillCancelled = 207,
	FromCore_CreateEntity = 202,
	FromCore_DestroyEntity = 203,
	FromCore_SkillShowWarning = 210,
	FromCore_SkillStateChanged = 206,
	ToCore_PlayerInput = 201,
	FromCore_PropertyChanged = 212,
	None = 200,
	FromCore_StopAction = 223,
	FromCore_LevelRestart = 221,
	FromCore_FocusPlayer = 222,
	FromCore_TestAreaVFX = 216,
	FromCore_SummonDamaged = 204,
	FromCore_SummonDeath = 205,
	FromCore_PopupNumber = 218,
	FromCore_ActionExecuted = 217,
	FromCore_SkillStartDash = 208,
	FromCore_SkillPlayVFX = 209,
	FromCore_TestLaserVFX = 215,
};
