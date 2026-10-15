#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LEGNLMENMJK;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define AMMDFFDGLMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15579AD0)
#define AMMDFFDGLMM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15579A60)

inline static constexpr unsigned int AMMDFFDGLMM_TypeDefinitionIndex = 76248;

	class AMMDFFDGLMM : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::LEGNLMENMJK* OHONDHAAHEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LEGNLMENMJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LEGNLMENMJK*))((::PBYTE)hIl2Cpp + AMMDFFDGLMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDFFDGLMM_ONEXECUTE_OFFSET))(this);
		}

	};
