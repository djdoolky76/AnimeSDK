#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LCKBHJBKHNH;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define IACHPKDBPKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF23C0)
#define IACHPKDBPKH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15DF21E0)

inline static constexpr unsigned int IACHPKDBPKH_TypeDefinitionIndex = 76255;

	class IACHPKDBPKH : public ::MLKDDLHNNHH
	{
	public:
		::LCKBHJBKHNH* PMAPIEMDKKA; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LCKBHJBKHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + IACHPKDBPKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACHPKDBPKH_ONEXECUTE_OFFSET))(this);
		}

	};
