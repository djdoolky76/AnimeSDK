#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AFDJNEOHCLB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define DPOAAAPOFLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1265A680)
#define DPOAAAPOFLI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1265A540)

inline static constexpr unsigned int DPOAAAPOFLI_TypeDefinitionIndex = 76272;

	class DPOAAAPOFLI : public ::MLKDDLHNNHH
	{
	public:
		::AFDJNEOHCLB* CJEPLPGADNJ; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::AFDJNEOHCLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::AFDJNEOHCLB*))((::PBYTE)hIl2Cpp + DPOAAAPOFLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAAAPOFLI_ONEXECUTE_OFFSET))(this);
		}

	};
