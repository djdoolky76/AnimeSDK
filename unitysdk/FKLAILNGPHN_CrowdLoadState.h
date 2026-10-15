#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FKLAILNGPHN_CrowdLoadState_TypeDefinitionIndex = 69217;

	enum class FKLAILNGPHN_CrowdLoadState : ::System::Int32
	{
		None = 0,
		BeginLoad = 1,
		Loading = 2,
		Loaded = 3,
		UnLoading = 4,
	};
