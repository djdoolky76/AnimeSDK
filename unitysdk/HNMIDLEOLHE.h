#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class NEEAHLMKAAB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define HNMIDLEOLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D426F0)
#define HNMIDLEOLHE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16D424B0)

inline static constexpr unsigned int HNMIDLEOLHE_TypeDefinitionIndex = 78597;

	class HNMIDLEOLHE : public ::MLKDDLHNNHH
	{
	public:
		::NEEAHLMKAAB* CNFOHOHHBJK; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::NEEAHLMKAAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::NEEAHLMKAAB*))((::PBYTE)hIl2Cpp + HNMIDLEOLHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMIDLEOLHE_ONEXECUTE_OFFSET))(this);
		}

	};
