#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HDJNGCPGPAM_TypeDefinitionIndex = 73534;

enum class HDJNGCPGPAM : ::System::Int32
{
	FreezeAll = 126,
	FreezeMove = 16,
	None = 0,
	FreezeHUD = 2,
	FreezeAnimator = 4,
	FreezeSkill = 32,
	FreezeAI = 8,
	FreezeBattleExt = 64,
	EnableTweenAnimation = 256,
};
