#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_PipelineType : ::System::Int32
	{
		Unsupported = 0,
		BiRP = 1,
		URP = 2,
		HDRP = 3,
	};
}
