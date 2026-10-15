#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
class MFEAIMEDPNF;

#define PBPHOHBPJHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF17F0)
#define PBPHOHBPJHD_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xBFF1610)
#define PBPHOHBPJHD_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xBFF1240)
#define PBPHOHBPJHD_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBFF1500)
#define PBPHOHBPJHD_ONINIT_OFFSET UNITYSDK_OFFSET(0xBFF0A10)
#define PBPHOHBPJHD_ONSTART_OFFSET UNITYSDK_OFFSET(0xBFF0EA0)
#define PBPHOHBPJHD_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBFF0BB0)
#define PBPHOHBPJHD_ONWAITING_OFFSET UNITYSDK_OFFSET(0xBFF0CC0)

inline static constexpr unsigned int PBPHOHBPJHD_TypeDefinitionIndex = 54234;

	class PBPHOHBPJHD
	{
	public:
		::KFELGAIGHAP* PFJJIEBFFNL; // 0x30
		::MFEAIMEDPNF* JJAFBMEKPKH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONWAITING_OFFSET))(this, a1);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONSTART_OFFSET))(this);
		}

		::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONEXECUTING_OFFSET))(this, a1);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONFINISH_OFFSET))(this);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPHOHBPJHD_ONCANCEL_OFFSET))(this);
		}

	};
