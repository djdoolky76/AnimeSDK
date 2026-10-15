#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityRallyHPChange; }

#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4BB470)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4BB3F0)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4BB3A0)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4BB350)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4BB440)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4BB2B0)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4BB460)

namespace RPG::GameCore
{
	class AbilityRallyHPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x128
		::System::UInt32 _EntityRuntimeID; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityRallyHPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::RPG::GameCore::AbilityRallyHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

	};
}
