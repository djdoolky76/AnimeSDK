#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class SendMessageOptions : ::System::Int32
	{
		RequireReceiver = 0,
		DontRequireReceiver = 1,
	};
}
