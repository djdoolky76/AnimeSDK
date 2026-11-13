#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_SIMPRTXMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B400420)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXMonoPlugin_TypeDefinitionIndex = 72156;

	class SimpRTXMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
