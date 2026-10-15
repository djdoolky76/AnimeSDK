#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FDDNKPJEMJE;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define GOFBKHOPPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2CFA0)
#define GOFBKHOPPJJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15B2CF00)

	class GOFBKHOPPJJ : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::FDDNKPJEMJE* KPNOIBCEFLL; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::FDDNKPJEMJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + GOFBKHOPPJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFBKHOPPJJ_ONEXECUTE_OFFSET))(this);
		}

	};
