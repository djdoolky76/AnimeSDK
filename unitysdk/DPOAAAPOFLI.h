#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AFDJNEOHCLB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define DPOAAAPOFLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1265F5A0)
#define DPOAAAPOFLI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1265F460)

inline static constexpr unsigned int DPOAAAPOFLI_TypeDefinitionIndex = 76273;

	class DPOAAAPOFLI : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::AFDJNEOHCLB* CJEPLPGADNJ; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::AFDJNEOHCLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::AFDJNEOHCLB*))((::PBYTE)hIl2Cpp + DPOAAAPOFLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAAAPOFLI_ONEXECUTE_OFFSET))(this);
		}

	};
