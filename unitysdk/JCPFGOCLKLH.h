#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class GICMOLJPLGF;
class JLPEICPFLMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define JCPFGOCLKLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1659A780)
#define JCPFGOCLKLH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1659A510)

inline static constexpr unsigned int JCPFGOCLKLH_TypeDefinitionIndex = 76247;

	class JCPFGOCLKLH : public ::MLKDDLHNNHH
	{
	public:
		::GICMOLJPLGF* IFKKOHJDCCF; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
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
