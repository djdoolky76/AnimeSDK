#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::QA::RemoteDebug
{
	enum class RemoteDebugFrameType : ::System::Byte
	{
		Request = 0,
		Response = 1,
		Notify = 2,
		Ping = 3,
		Pong = 4,
	};
}
