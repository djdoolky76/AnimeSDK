#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int JNJADAAJKCM_TypeDefinitionIndex = 39389;

enum class JNJADAAJKCM : ::System::Int32
{
	IsNotFirstRealPeriodButEmpty_BeforeRealIndex = 9,
	FirstRealPeriodLock = 2,
	NoPeriod = 7,
	PeriodLock = 1,
	PeriodUnLockButFirstQuestLock = 3,
	ClosePeriod = 8,
	PeriodAndQuestUnLockButNotClick = 4,
	PeriodNoticeClose = 12,
	MUIP_LOCK = 11,
	PeriodUnLockButHasQuestNotFinish = 5,
	IsNotFirstRealPeriodButEmpty_AfterRealIndex = 10,
	Unknow = 0,
	IsUnlockAllAndGetAllReward = 6,
};
