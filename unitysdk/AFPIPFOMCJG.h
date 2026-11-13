#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class HGCIPBFBNKO;
class JLPEICPFLMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class DynamicProgressEffect; }

#define AFPIPFOMCJG_CTOR_OFFSET UNITYSDK_OFFSET(0x18DCC310)
#define AFPIPFOMCJG_GKMPNELOMAP_OFFSET UNITYSDK_OFFSET(0x18DCBC90)
#define AFPIPFOMCJG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18DCB860)

inline static constexpr unsigned int AFPIPFOMCJG_TypeDefinitionIndex = 78605;

	class AFPIPFOMCJG : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::HGCIPBFBNKO* GECHPCAPLJN; // 0x28
		::JLPEICPFLMC* KCLPMCMIALP; // 0x30
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::HGCIPBFBNKO* a2, ::JLPEICPFLMC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::HGCIPBFBNKO*, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + AFPIPFOMCJG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPIPFOMCJG_ONEXECUTE_OFFSET))(this);
		}

		::System::Void GKMPNELOMAP(::RPG::Client::ChenLingBattle::DynamicProgressEffect* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::DynamicProgressEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + AFPIPFOMCJG_GKMPNELOMAP_OFFSET))(this, a1, a2);
		}

	};
