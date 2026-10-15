#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define LIMGMCFNLMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6DAEE0)
#define LIMGMCFNLMI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB6DAE50)

	class LIMGMCFNLMI : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + LIMGMCFNLMI_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMGMCFNLMI_ONEXECUTE_OFFSET))(this);
		}

	};
