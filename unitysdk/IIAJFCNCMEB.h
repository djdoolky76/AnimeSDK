#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

#define IIAJFCNCMEB_CTOR_OFFSET UNITYSDK_OFFSET(0x193C1F10)
#define IIAJFCNCMEB_GET_TURNLIGHTTEAMDAMAGE_OFFSET UNITYSDK_OFFSET(0x193C1F20)
#define IIAJFCNCMEB_SET_TURNLIGHTTEAMDAMAGE_OFFSET UNITYSDK_OFFSET(0x193C1F30)

inline static constexpr unsigned int IIAJFCNCMEB_TypeDefinitionIndex = 83794;

	class IIAJFCNCMEB : public ::System::Object
	{
	public:
		::System::Decimal _TurnLightTeamDamage_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAJFCNCMEB_CTOR_OFFSET))(this);
		}

		::System::Decimal get_TurnLightTeamDamage()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAJFCNCMEB_GET_TURNLIGHTTEAMDAMAGE_OFFSET))(this);
		}

		::System::Void set_TurnLightTeamDamage(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + IIAJFCNCMEB_SET_TURNLIGHTTEAMDAMAGE_OFFSET))(this, a1);
		}

	};
