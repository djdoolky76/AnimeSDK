#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7D8E80)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_GET_ISCONFIGURED_OFFSET UNITYSDK_OFFSET(0x7D8D60)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x7D8D00)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7D8D70)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_LEEIFKDKDOP_OFFSET UNITYSDK_OFFSET(0x19082130)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_MKGFGFIDPFD_OFFSET UNITYSDK_OFFSET(0x7D8E30)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_ODIPIFDNBHH_OFFSET UNITYSDK_OFFSET(0x19082070)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_PNBGKLKBLMC_OFFSET UNITYSDK_OFFSET(0x7D8DD0)
#define MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D8DC0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballAbilityReference_TypeDefinitionIndex = 68250;

	struct alignas(8) PinballAbilityReference
	{
		::System::String* AbilityName; // 0x10
		::System::Int32 AbilityConfigID; // 0x18

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsConfigured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_GET_ISCONFIGURED_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_GET_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PNBGKLKBLMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_PNBGKLKBLMC_OFFSET))(this);
		}

		/*
		static ::MoleMole::Battle::PinballAbilityReference ODIPIFDNBHH(::System::Int32 GNMJNMILCBH)
		{
			return ((::MoleMole::Battle::PinballAbilityReference(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_ODIPIFDNBHH_OFFSET))(GNMJNMILCBH);
		}
		*/

		::System::Boolean MKGFGFIDPFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_MKGFGFIDPFD_OFFSET))(this);
		}

		/*
		static ::MoleMole::Battle::PinballAbilityReference LEEIFKDKDOP(::System::String* KKJEJNMLIFP)
		{
			return ((::MoleMole::Battle::PinballAbilityReference(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_LEEIFKDKDOP_OFFSET))(KKJEJNMLIFP);
		}
		*/

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYREFERENCE_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
