#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Airship_AirshipEffectConfig; }

#define RPG_CLIENT_AIRLINEWAY_BKDFMLDIINE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6435C0)

namespace RPG::Client
{
	class AirlineWay_BKDFMLDIINE : public ::System::Object
	{
	public:
		::RPG::Client::Airship_AirshipEffectConfig* HPBAMMEFDMK; // 0x10
		::System::Int32 MDBEIMFCMOG; // 0x18
		::System::Single BJOCBPFKJDP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_BKDFMLDIINE_CTOR_OFFSET))(this);
		}

	};
}
