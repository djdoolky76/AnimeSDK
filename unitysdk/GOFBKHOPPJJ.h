#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FDDNKPJEMJE;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define GOFBKHOPPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B215B0)
#define GOFBKHOPPJJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15B21510)

inline static constexpr unsigned int GOFBKHOPPJJ_TypeDefinitionIndex = 76269;

	class GOFBKHOPPJJ : public ::MLKDDLHNNHH
	{
	public:
		::FDDNKPJEMJE* KPNOIBCEFLL; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::FDDNKPJEMJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + GOFBKHOPPJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFBKHOPPJJ_ONEXECUTE_OFFSET))(this);
		}

	};
