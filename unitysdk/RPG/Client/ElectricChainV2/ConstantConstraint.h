#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"

#define RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD7C200)
#define RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_PKGJKCHPMJF_OFFSET UNITYSDK_OFFSET(0xCD7C1A0)

namespace RPG::Client::ElectricChainV2
{
	class ConstantConstraint : public ::RPG::Client::ElectricChainV2::Constraint
	{
	public:
		::System::Single blend; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_CTOR_OFFSET))(this);
		}

		::System::Single PKGJKCHPMJF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_PKGJKCHPMJF_OFFSET))(this, a1);
		}

	};
}
