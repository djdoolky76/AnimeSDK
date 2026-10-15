#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LCKBHJBKHNH;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define JOGOAMIJHOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB29A010)
#define JOGOAMIJHOE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB299D50)
#define JOGOAMIJHOE__ONEXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0xB29A020)

inline static constexpr unsigned int JOGOAMIJHOE_TypeDefinitionIndex = 76251;

	class JOGOAMIJHOE : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::LCKBHJBKHNH* PMAPIEMDKKA; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LCKBHJBKHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + JOGOAMIJHOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAMIJHOE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAMIJHOE__ONEXECUTE_B__0_0_OFFSET))(this);
		}

	};
