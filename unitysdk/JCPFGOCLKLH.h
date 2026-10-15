#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class GICMOLJPLGF;
class JLPEICPFLMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define JCPFGOCLKLH_CTOR_OFFSET UNITYSDK_OFFSET(0x165A9A70)
#define JCPFGOCLKLH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x165A9800)

	class JCPFGOCLKLH : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::GICMOLJPLGF* IFKKOHJDCCF; // 0x28
		::JLPEICPFLMC* KCLPMCMIALP; // 0x30
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::GICMOLJPLGF* a2, ::JLPEICPFLMC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::GICMOLJPLGF*, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + JCPFGOCLKLH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPFGOCLKLH_ONEXECUTE_OFFSET))(this);
		}

	};
