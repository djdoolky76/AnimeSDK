#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_CAMERABAKINGMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC92C150)

namespace RPG::Client
{
	class CameraBakingMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABAKINGMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
