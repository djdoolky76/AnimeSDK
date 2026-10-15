#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HAPI_TCP_PortType : ::System::Int32
	{
		HAPI_TCP_PORT_ANY = 0,
		HAPI_TCP_PORT_RANGE = 1,
		HAPI_TCP_PORT_LIST = 2,
	};
}
