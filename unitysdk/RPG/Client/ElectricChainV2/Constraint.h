#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELECTRICCHAINV2_CONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD743150)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Constraint_TypeDefinitionIndex = 75727;

	class Constraint : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTRAINT_CTOR_OFFSET))(this);
		}

	};
}
