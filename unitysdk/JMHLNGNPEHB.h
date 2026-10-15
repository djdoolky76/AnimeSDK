#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class EJKNEDLPMIB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define JMHLNGNPEHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB267070)
#define JMHLNGNPEHB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB266D90)

	class JMHLNGNPEHB : public ::MLKDDLHNNHH
	{
	public:
		::EJKNEDLPMIB* AGINKPKNOMK; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::EJKNEDLPMIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::EJKNEDLPMIB*))((::PBYTE)hIl2Cpp + JMHLNGNPEHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHLNGNPEHB_ONEXECUTE_OFFSET))(this);
		}

	};
