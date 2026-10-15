#pragma once
#include "unitysdk/unitysdk.h"
	enum class IDECOCBLLBC_WarmupStartReason : ::System::Int32
	{
		PackageVersionUpdate = 0,
		PartiallyDoneLastTime = 1,
		ForcedByScript = 2,
		IsGLES = 3,
	};
