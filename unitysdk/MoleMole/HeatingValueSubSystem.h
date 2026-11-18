#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define MOLEMOLE_HEATINGVALUESUBSYSTEM_CANSWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x1466ECD0)
#define MOLEMOLE_HEATINGVALUESUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1466EC80)
#define MOLEMOLE_HEATINGVALUESUBSYSTEM_SETCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1466F520)
#define MOLEMOLE_HEATINGVALUESUBSYSTEM_SETHEATINGVALUE_OFFSET UNITYSDK_OFFSET(0x1466ED10)
#define MOLEMOLE_HEATINGVALUESUBSYSTEM_SETOVERLOADVALUE_OFFSET UNITYSDK_OFFSET(0x1466F9D0)
#define MOLEMOLE_HEATINGVALUESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1466FE80)

namespace MoleMole
{
	inline static constexpr unsigned int HeatingValueSubSystem_TypeDefinitionIndex = 54103;

	class HeatingValueSubSystem
	{
	public:
		::System::Single MaxHeatingValue; // 0x10
		::System::Single HeatChargeValue; // 0x14
		::System::Single CurHeatingValue; // 0x18
		::System::Single HeatOverloadValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HEATINGVALUESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HEATINGVALUESUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Boolean CanSwitchTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HEATINGVALUESUBSYSTEM_CANSWITCHTEAM_OFFSET))(this);
		}

		::System::Void SetHeatingValue(::System::Single value, ::MoleMole::Config::PropertyModifyFunction mType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_HEATINGVALUESUBSYSTEM_SETHEATINGVALUE_OFFSET))(this, value, mType);
		}

		::System::Void SetChargeValue(::System::Single value, ::MoleMole::Config::PropertyModifyFunction mType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_HEATINGVALUESUBSYSTEM_SETCHARGEVALUE_OFFSET))(this, value, mType);
		}

		::System::Void SetOverloadValue(::System::Single value, ::MoleMole::Config::PropertyModifyFunction mType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_HEATINGVALUESUBSYSTEM_SETOVERLOADVALUE_OFFSET))(this, value, mType);
		}
	};
}
