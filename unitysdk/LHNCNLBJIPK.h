#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class KHGFCNNCOGA;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define LHNCNLBJIPK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BC920)
#define LHNCNLBJIPK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB6BC930)

	class LHNCNLBJIPK : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::KHGFCNNCOGA* PJKPGKFMJJF; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::KHGFCNNCOGA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::KHGFCNNCOGA*))((::PBYTE)hIl2Cpp + LHNCNLBJIPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNCNLBJIPK_ONEXECUTE_OFFSET))(this);
		}

	};
