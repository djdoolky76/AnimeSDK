#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_STREAMINGNOTIFYMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF40A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StreamingNotifyMonoPlugin_TypeDefinitionIndex = 72843;

	class StreamingNotifyMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STREAMINGNOTIFYMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
