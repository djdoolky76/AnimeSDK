#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLJFIFKJCCE;
namespace RPG::Client { class ScheduleModule; }

#define PHOPKKBKAID_CLEBKDPHHKI_OFFSET UNITYSDK_OFFSET(0xC259740)
#define PHOPKKBKAID_CTOR_OFFSET UNITYSDK_OFFSET(0xC2596A0)
#define PHOPKKBKAID_DBHIKLDHKBP_OFFSET UNITYSDK_OFFSET(0xC2596F0)

	class PHOPKKBKAID : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleModule* DHPKGNANJED; // 0x10
		::System::Void _ctor(::RPG::Client::ScheduleModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*))((::PBYTE)hIl2Cpp + PHOPKKBKAID_CTOR_OFFSET))(this, a1);
		}

		::CLJFIFKJCCE* DBHIKLDHKBP(::System::UInt32 a1)
		{
			return ((::CLJFIFKJCCE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHOPKKBKAID_DBHIKLDHKBP_OFFSET))(this, a1);
		}

		::CLJFIFKJCCE* CLEBKDPHHKI(::System::UInt32 a1)
		{
			return ((::CLJFIFKJCCE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHOPKKBKAID_CLEBKDPHHKI_OFFSET))(this, a1);
		}

	};
