#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFKNBJMPOOM_CTOR_OFFSET UNITYSDK_OFFSET(0x166506C0)
#define JFKNBJMPOOM_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x166506A0)
#define JFKNBJMPOOM_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x166506B0)

	class JFKNBJMPOOM : public ::System::Object
	{
	public:
		::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKNBJMPOOM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKNBJMPOOM_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::Void set_AdventurePlayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFKNBJMPOOM_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
		}

	};
