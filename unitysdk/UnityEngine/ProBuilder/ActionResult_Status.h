#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class ActionResult_Status : ::System::Int32
	{
		Success = 0,
		Failure = 1,
		Canceled = 2,
		NoChange = 3,
	};
}
