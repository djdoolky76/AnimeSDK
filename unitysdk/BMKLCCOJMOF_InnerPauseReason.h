#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int BMKLCCOJMOF_InnerPauseReason_TypeDefinitionIndex = 37154;

	enum class BMKLCCOJMOF_InnerPauseReason : ::System::Byte
	{
		None = 0,
		Island = 1,
		ReachHeightLine = 2,
		BombPerformance = 4,
		SpawnIvy = 8,
		Tutorial = 16,
		BossDeadPerformance = 32,
		FullSync = 64,
	};
