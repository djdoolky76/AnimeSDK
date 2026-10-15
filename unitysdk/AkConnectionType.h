#pragma once
#include "unitysdk/unitysdk.h"
	enum class AkConnectionType : ::System::Int32
	{
		ConnectionType_Direct = 0,
		ConnectionType_GameDefSend = 1,
		ConnectionType_UserDefSend = 2,
		ConnectionType_ReflectionsSend = 3,
	};
