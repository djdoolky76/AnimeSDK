#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_CAMERABAKINGMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC924B00)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraBakingMonoPlugin_TypeDefinitionIndex = 71039;

	class CameraBakingMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABAKINGMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
