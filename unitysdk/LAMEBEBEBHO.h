#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LCKBHJBKHNH;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define LAMEBEBEBHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E0AC0)
#define LAMEBEBEBHO_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB5E07F0)
#define LAMEBEBEBHO__ONEXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0xB5E0AD0)

inline static constexpr unsigned int LAMEBEBEBHO_TypeDefinitionIndex = 76252;

	class LAMEBEBEBHO : public ::MLKDDLHNNHH
	{
	public:
		::LCKBHJBKHNH* PMAPIEMDKKA; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LCKBHJBKHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + LAMEBEBEBHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMEBEBEBHO_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMEBEBEBHO__ONEXECUTE_B__0_0_OFFSET))(this);
		}

	};
