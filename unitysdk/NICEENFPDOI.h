#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NICEENFPDOI_TypeDefinitionIndex = 43629;

enum class NICEENFPDOI : ::System::Int32
{
	SkipBattle = 6,
	None = 0,
	SetupFormation = 2,
	Login = 1,
	StartBattle = 3,
	Acceleration = 7,
	AutoBattle = 9,
	GmCommand = 10,
	UltiSkill = 8,
	LeaveGame = 4,
	PauseGame = 5,
};
