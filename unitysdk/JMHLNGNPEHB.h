#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class EJKNEDLPMIB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define JMHLNGNPEHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB260C60)
#define JMHLNGNPEHB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB260980)

inline static constexpr unsigned int JMHLNGNPEHB_TypeDefinitionIndex = 76264;

	class JMHLNGNPEHB : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::EJKNEDLPMIB* AGINKPKNOMK; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::EJKNEDLPMIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::EJKNEDLPMIB*))((::PBYTE)hIl2Cpp + JMHLNGNPEHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHLNGNPEHB_ONEXECUTE_OFFSET))(this);
		}

	};
