#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class NEEAHLMKAAB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define HNMIDLEOLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA16E0)
#define HNMIDLEOLHE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15DA14A0)

inline static constexpr unsigned int HNMIDLEOLHE_TypeDefinitionIndex = 76266;

	class HNMIDLEOLHE : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::NEEAHLMKAAB* CNFOHOHHBJK; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::NEEAHLMKAAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::NEEAHLMKAAB*))((::PBYTE)hIl2Cpp + HNMIDLEOLHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMIDLEOLHE_ONEXECUTE_OFFSET))(this);
		}

	};
