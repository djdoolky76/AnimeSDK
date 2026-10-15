#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class BNHBDMIDFCL;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define FJNCNBGFMJH_CTOR_OFFSET UNITYSDK_OFFSET(0x157E2300)
#define FJNCNBGFMJH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x157E2190)

inline static constexpr unsigned int FJNCNBGFMJH_TypeDefinitionIndex = 76254;

	class FJNCNBGFMJH : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::BNHBDMIDFCL* PEIHJAEIGHK; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::BNHBDMIDFCL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::BNHBDMIDFCL*))((::PBYTE)hIl2Cpp + FJNCNBGFMJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNCNBGFMJH_ONEXECUTE_OFFSET))(this);
		}

	};
