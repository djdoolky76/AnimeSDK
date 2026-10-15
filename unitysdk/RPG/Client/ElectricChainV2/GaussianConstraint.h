#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD82090)
#define RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT_PKGJKCHPMJF_OFFSET UNITYSDK_OFFSET(0xCD81FA0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int GaussianConstraint_TypeDefinitionIndex = 73607;

	class GaussianConstraint : public ::RPG::Client::ElectricChainV2::Constraint
	{
	public:
		::UnityEngine::Vector4 distribution; // 0x10
		::System::Boolean inverse; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT_CTOR_OFFSET))(this);
		}

		::System::Single PKGJKCHPMJF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_GAUSSIANCONSTRAINT_PKGJKCHPMJF_OFFSET))(this, a1);
		}

	};
}
