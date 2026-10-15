#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_IPEDESTRIANMEMBEREXTERNALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD33B310)

namespace RPG::Client
{
	class IPedestrianMemberExternalConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IPEDESTRIANMEMBEREXTERNALCONFIG_CTOR_OFFSET))(this);
		}

	};
}
