#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LCKBHJBKHNH;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CDNJADLMKGB_CTOR_OFFSET UNITYSDK_OFFSET(0xC76B8D0)
#define CDNJADLMKGB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC76B610)
#define CDNJADLMKGB__ONEXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0xC76B8E0)

inline static constexpr unsigned int CDNJADLMKGB_TypeDefinitionIndex = 76250;

	class CDNJADLMKGB : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::LCKBHJBKHNH* PMAPIEMDKKA; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LCKBHJBKHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + CDNJADLMKGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNJADLMKGB_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNJADLMKGB__ONEXECUTE_B__0_0_OFFSET))(this);
		}

	};
