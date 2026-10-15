#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_SIMPRTXMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BFEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXMonoPlugin_TypeDefinitionIndex = 70190;

	class SimpRTXMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
