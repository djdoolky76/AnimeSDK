#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
class MFEAIMEDPNF;

#define PGDOFLLMCMP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2163E0)
#define PGDOFLLMCMP_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xC216320)
#define PGDOFLLMCMP_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xC215FE0)
#define PGDOFLLMCMP_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC2162A0)
#define PGDOFLLMCMP_ONINIT_OFFSET UNITYSDK_OFFSET(0xC2157A0)
#define PGDOFLLMCMP_ONSTART_OFFSET UNITYSDK_OFFSET(0xC215C30)
#define PGDOFLLMCMP_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC215940)
#define PGDOFLLMCMP_ONWAITING_OFFSET UNITYSDK_OFFSET(0xC215A50)

inline static constexpr unsigned int PGDOFLLMCMP_TypeDefinitionIndex = 54232;

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
