#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }

#define EBEMIKFPOPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B7E70)
#define EBEMIKFPOPC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1C3B7E30)
#define EBEMIKFPOPC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1C3B7D10)
#define EBEMIKFPOPC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1C3B7CD0)

inline static constexpr unsigned int EBEMIKFPOPC_TypeDefinitionIndex = 73497;

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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEMIKFPOPC__INITVARONCE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEMIKFPOPC_NKPPGDENJAE_OFFSET))(this);
		}

	};
