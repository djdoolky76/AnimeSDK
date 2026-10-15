#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define IOJPGFDOMOM_CTOR_OFFSET UNITYSDK_OFFSET(0x164F6B10)
#define IOJPGFDOMOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x164F69F0)

inline static constexpr unsigned int IOJPGFDOMOM_TypeDefinitionIndex = 76281;

	class IOJPGFDOMOM : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + IOJPGFDOMOM_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPGFDOMOM_ONEXECUTE_OFFSET))(this);
		}

	};
