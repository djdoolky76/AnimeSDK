#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IDECOCBLLBC_WarmupStartReason_TypeDefinitionIndex = 47435;

	enum class IDECOCBLLBC_WarmupStartReason : ::System::Int32
	{
		PackageVersionUpdate = 0,
		PartiallyDoneLastTime = 1,
		ForcedByScript = 2,
		IsGLES = 3,
	};
