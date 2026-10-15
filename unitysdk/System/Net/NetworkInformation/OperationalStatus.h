#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	enum class OperationalStatus : ::System::Int32
	{
		Up = 1,
		Down = 2,
		Testing = 3,
		Unknown = 4,
		Dormant = 5,
		NotPresent = 6,
		LowerLayerDown = 7,
	};
}
