#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
class MFEAIMEDPNF;

#define PGDOFLLMCMP_CTOR_OFFSET UNITYSDK_OFFSET(0xC21D970)
#define PGDOFLLMCMP_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xC21D8B0)
#define PGDOFLLMCMP_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xC21D570)
#define PGDOFLLMCMP_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC21D830)
#define PGDOFLLMCMP_ONINIT_OFFSET UNITYSDK_OFFSET(0xC21CD30)
#define PGDOFLLMCMP_ONSTART_OFFSET UNITYSDK_OFFSET(0xC21D1C0)
#define PGDOFLLMCMP_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC21CED0)
#define PGDOFLLMCMP_ONWAITING_OFFSET UNITYSDK_OFFSET(0xC21CFE0)

	class PGDOFLLMCMP
	{
	public:
		::KFELGAIGHAP* PFJJIEBFFNL; // 0x30
		::MFEAIMEDPNF* JJAFBMEKPKH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONWAITING_OFFSET))(this, a1);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONSTART_OFFSET))(this);
		}

		::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONEXECUTING_OFFSET))(this, a1);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONFINISH_OFFSET))(this);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOFLLMCMP_ONCANCEL_OFFSET))(this);
		}

	};
