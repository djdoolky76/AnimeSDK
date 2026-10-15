#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LCKBHJBKHNH;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define PNFGGGIKPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC336730)
#define PNFGGGIKPHD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC3365A0)
#define PNFGGGIKPHD__ONEXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0xC336740)

inline static constexpr unsigned int PNFGGGIKPHD_TypeDefinitionIndex = 76279;

	class PNFGGGIKPHD : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::LCKBHJBKHNH* PMAPIEMDKKA; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LCKBHJBKHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + PNFGGGIKPHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFGGGIKPHD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFGGGIKPHD__ONEXECUTE_B__0_0_OFFSET))(this);
		}

	};
