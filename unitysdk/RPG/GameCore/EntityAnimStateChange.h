#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class EntityAnimStateChange; }

#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE635480)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE635430)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6353F0)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6353A0)

namespace RPG::GameCore
{
	class EntityAnimStateChange : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EntityAnimStateChange* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EntityAnimStateChange*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
