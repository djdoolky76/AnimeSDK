#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/PinballAbilityReference.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP_HASVALIDDASHABILITY_OFFSET UNITYSDK_OFFSET(0x19B34840)
#define MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP_HASVALIDENTERABILITY_OFFSET UNITYSDK_OFFSET(0x19B347C0)
#define MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP_HASVALIDSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x19B348C0)
#define MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19B34940)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPinball_PinballTelemetryAbilityGroup_TypeDefinitionIndex = 92185;

	class ConfigPinball_PinballTelemetryAbilityGroup : public ::System::Object
	{
	public:
		::MoleMole::Battle::PinballAbilityReference EnterAbility; // 0x10
		::MoleMole::Battle::PinballAbilityReference DashAbility; // 0x20
		::MoleMole::Battle::PinballAbilityReference SkillAbility; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean HasValidEnterAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP_HASVALIDENTERABILITY_OFFSET))(this);
		}

		::System::Boolean HasValidDashAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP_HASVALIDDASHABILITY_OFFSET))(this);
		}

		::System::Boolean HasValidSkillAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLTELEMETRYABILITYGROUP_HASVALIDSKILLABILITY_OFFSET))(this);
		}
	};
}
