#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLESIMPLETALKITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9B3A0)

namespace RPG::Client
{
	class PenaconyEndmostChronicleSimpleTalkItemData : public ::System::Object
	{
	public:
		::System::Single Speed; // 0x10
		::System::UInt32 SentenceID; // 0x14
		::System::Single BlockTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLESIMPLETALKITEMDATA_CTOR_OFFSET))(this);
		}

	};
}
