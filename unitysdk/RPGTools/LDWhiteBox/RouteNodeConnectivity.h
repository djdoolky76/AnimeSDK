#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	enum class RouteNodeConnectivity : ::System::Int32
	{
		Invalid = 0,
		Terminal = 1,
		Relay = 2,
		Branch = 3,
	};
}
