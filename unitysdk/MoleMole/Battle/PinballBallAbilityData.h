#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLEDNAECEL.h"
#include "unitysdk/MoleMole/Battle/PinballAbilityReference.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_BATTLE_PINBALLBALLABILITYDATA_JCJPBOBLOAD_OFFSET UNITYSDK_OFFSET(0x63CE80)
#define MOLEMOLE_BATTLE_PINBALLBALLABILITYDATA_NIDHCEOMFNC_OFFSET UNITYSDK_OFFSET(0x63CE10)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballBallAbilityData_TypeDefinitionIndex = 54422;

	struct alignas(4) PinballBallAbilityData
	{
		::MoleMole::Battle::PinballAbilityReference DashAbility; // 0x10
		::MoleMole::Battle::PinballAbilityReference SkillAbility; // 0x20
		::MoleMole::Battle::PinballAbilityReference DashTelemetryAbility; // 0x30
		::MoleMole::Battle::PinballAbilityReference SkillTelemetryAbility; // 0x40

		::MoleMole::Battle::PinballAbilityReference NIDHCEOMFNC(::ABLEDNAECEL HPEMFJDOAKL)
		{
			return ((::MoleMole::Battle::PinballAbilityReference(*)(::PVOID, ::ABLEDNAECEL))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLBALLABILITYDATA_NIDHCEOMFNC_OFFSET))(this, HPEMFJDOAKL);
		}

		::MoleMole::Battle::PinballAbilityReference JCJPBOBLOAD(::ABLEDNAECEL HPEMFJDOAKL)
		{
			return ((::MoleMole::Battle::PinballAbilityReference(*)(::PVOID, ::ABLEDNAECEL))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLBALLABILITYDATA_JCJPBOBLOAD_OFFSET))(this, HPEMFJDOAKL);
		}
	};
}
