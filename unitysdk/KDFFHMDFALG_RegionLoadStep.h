#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KDFFHMDFALG_RegionLoadStep_TypeDefinitionIndex = 60584;

	enum class KDFFHMDFALG_RegionLoadStep : ::System::Int32
	{
		Begin = 0,
		LoadStage = 1,
		LoadAnchor = 2,
		LoadEntities = 3,
		Finished = 4,
	};
