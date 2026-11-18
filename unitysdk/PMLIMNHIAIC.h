#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PMLIMNHIAIC_TypeDefinitionIndex = 88710;

enum class PMLIMNHIAIC : ::System::Int32
{
	UnFinishQuest = 7,
	Condition = 3,
	TimeOut = 2,
	IsAccepted = 1,
	PublishBySelf = 4,
	LevelError = 5,
	IsAcceptedBySelf = 6,
	FakeData = 8,
	None = 0,
};
