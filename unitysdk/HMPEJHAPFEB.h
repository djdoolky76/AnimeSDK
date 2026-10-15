#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LCKBHJBKHNH;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define HMPEJHAPFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7DCA0)
#define HMPEJHAPFEB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15D7DA70)

inline static constexpr unsigned int HMPEJHAPFEB_TypeDefinitionIndex = 76256;

	class HMPEJHAPFEB : public ::MLKDDLHNNHH
	{
	public:
		::LCKBHJBKHNH* PMAPIEMDKKA; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LCKBHJBKHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + HMPEJHAPFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPEJHAPFEB_ONEXECUTE_OFFSET))(this);
		}

	};
