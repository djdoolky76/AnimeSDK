#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IBIPGJFHFBB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3A8B0)
#define IBIPGJFHFBB_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15E3A860)
#define IBIPGJFHFBB_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15E3A810)

	class IBIPGJFHFBB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::System::String* KLHGAHCLCKA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIPGJFHFBB_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIPGJFHFBB_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIPGJFHFBB_GETEVENTTYPE_OFFSET))(this);
		}

	};
