#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AJNJDDFGFJL;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define LKLGEHNNNGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB754550)
#define LKLGEHNNNGD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB7542F0)

	class LKLGEHNNNGD : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::AJNJDDFGFJL* CFGPHKJDPJN; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::AJNJDDFGFJL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::AJNJDDFGFJL*))((::PBYTE)hIl2Cpp + LKLGEHNNNGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLGEHNNNGD_ONEXECUTE_OFFSET))(this);
		}

	};
