#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define LOAHHFCDEPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F1E60)
#define LOAHHFCDEPM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB7F1DC0)

inline static constexpr unsigned int LOAHHFCDEPM_TypeDefinitionIndex = 76260;

	class LOAHHFCDEPM : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::UInt32 DMPJCJIACDB; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + LOAHHFCDEPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAHHFCDEPM_ONEXECUTE_OFFSET))(this);
		}

	};
