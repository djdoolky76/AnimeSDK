#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_STREAMINGNOTIFYMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE146B00)

namespace RPG::Client
{
	class StreamingNotifyMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STREAMINGNOTIFYMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
