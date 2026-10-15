#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_CAMERABAKINGBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xC92C140)

namespace RPG::Client
{
	class CameraBakingBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABAKINGBEHAVIOR_CTOR_OFFSET))(this);
		}

	};
}
