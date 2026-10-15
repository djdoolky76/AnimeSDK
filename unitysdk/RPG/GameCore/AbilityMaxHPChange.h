#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYMAXHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4BA8F0)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4BA9B0)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4BA960)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4BA910)

namespace RPG::GameCore
{
	class AbilityMaxHPChange : public ::System::Object
	{
	public:
		::CHMCAGBDPJH ChangeParams; // 0x10
		::System::UInt32 _EntityRuntimeID; // 0x120
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _ChangeValue; // 0x128
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

	};
}
