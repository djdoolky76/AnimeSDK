#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJFIFKJCCE.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleModule; }

#define CLJFIFKJCCE_OJNMOABMOIA_CTOR_OFFSET UNITYSDK_OFFSET(0xD78C8C0)
#define CLJFIFKJCCE_OJNMOABMOIA_DCKGOAIJEFP_OFFSET UNITYSDK_OFFSET(0xD78CAC0)

	class CLJFIFKJCCE_OJNMOABMOIA : public ::CLJFIFKJCCE
	{
	public:
		::RPG::Client::ScheduleModule* DHPKGNANJED; // 0x10
		::System::UInt32 AGCILHPNGJI; // 0x18
		::System::Void _ctor(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_OJNMOABMOIA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ScheduleData* DCKGOAIJEFP()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJFIFKJCCE_OJNMOABMOIA_DCKGOAIJEFP_OFFSET))(this);
		}

	};
