#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }

#define EBEMIKFPOPC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEA2E0)
#define EBEMIKFPOPC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x12CEA180)
#define EBEMIKFPOPC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x12CEA2A0)
#define EBEMIKFPOPC__ONBIND_OFFSET UNITYSDK_OFFSET(0x12CEA140)

inline static constexpr unsigned int EBEMIKFPOPC_TypeDefinitionIndex = 71512;

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
