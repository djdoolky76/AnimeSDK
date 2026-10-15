#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELECTRICCHAINV2_CONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD7C190)

namespace RPG::Client::ElectricChainV2
{
	class Constraint : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTRAINT_CTOR_OFFSET))(this);
		}

	};
}
