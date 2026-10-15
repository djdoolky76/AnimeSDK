#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }

#define EBEMIKFPOPC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEF050)
#define EBEMIKFPOPC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x12CEEEF0)
#define EBEMIKFPOPC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x12CEF010)
#define EBEMIKFPOPC__ONBIND_OFFSET UNITYSDK_OFFSET(0x12CEEEB0)

	class EBEMIKFPOPC : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEMIKFPOPC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEMIKFPOPC__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEMIKFPOPC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEMIKFPOPC_NKPPGDENJAE_OFFSET))(this);
		}

	};
