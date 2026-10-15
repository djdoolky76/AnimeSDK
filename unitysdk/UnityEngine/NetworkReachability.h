#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class NetworkReachability : ::System::Int32
	{
		NotReachable = 0,
		ReachableViaCarrierDataNetwork = 1,
		ReachableViaLocalAreaNetwork = 2,
	};
}
