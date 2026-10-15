#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define KDIKPOCOCOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB363560)
#define KDIKPOCOCOM_GET_DAY_OFFSET UNITYSDK_OFFSET(0xB363520)
#define KDIKPOCOCOM_GET_TALK_OFFSET UNITYSDK_OFFSET(0xB363540)
#define KDIKPOCOCOM_SET_DAY_OFFSET UNITYSDK_OFFSET(0xB363530)
#define KDIKPOCOCOM_SET_TALK_OFFSET UNITYSDK_OFFSET(0xB363550)

	class KDIKPOCOCOM : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Talk_k__BackingField; // 0x10
		::System::UInt32 _Day_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIKPOCOCOM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIKPOCOCOM_GET_DAY_OFFSET))(this);
		}

		::System::Void set_Day(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDIKPOCOCOM_SET_DAY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Talk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIKPOCOCOM_GET_TALK_OFFSET))(this);
		}

		::System::Void set_Talk(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KDIKPOCOCOM_SET_TALK_OFFSET))(this, a1);
		}

	};
