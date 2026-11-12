#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"

#define RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD7431C0)
#define RPG_CLIENT_ELECTRICCHAINV2_CONSTANTCONSTRAINT_PKGJKCHPMJF_OFFSET UNITYSDK_OFFSET(0xD743160)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int ConstantConstraint_TypeDefinitionIndex = 75728;

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
