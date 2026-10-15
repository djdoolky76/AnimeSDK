#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class ECHKHMJDHAK;
namespace RPG::GameCore { class GameEntity; }

#define ECHKHMJDHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0D8D0)
#define ECHKHMJDHAK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x12D0D880)
#define ECHKHMJDHAK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12D0D830)
#define ECHKHMJDHAK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12D0D7C0)

	class ECHKHMJDHAK : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::System::Boolean BPBNAOEHNFP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHKHMJDHAK_CTOR_OFFSET))(this);
		}

		::ECHKHMJDHAK* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::ECHKHMJDHAK*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHKHMJDHAK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHKHMJDHAK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHKHMJDHAK_GETEVENTTYPE_OFFSET))(this);
		}

	};
