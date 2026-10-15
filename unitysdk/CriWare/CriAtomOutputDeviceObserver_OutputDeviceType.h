#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomOutputDeviceObserver_OutputDeviceType : ::System::Int32
	{
		BuiltinSpeaker = 0,
		WiredDevice = 1,
		WirelessDevice = 2,
	};
}
