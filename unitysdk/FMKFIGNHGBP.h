#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define FMKFIGNHGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x158550F0)
#define FMKFIGNHGBP_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15854F70)

inline static constexpr unsigned int FMKFIGNHGBP_TypeDefinitionIndex = 76257;

	class FMKFIGNHGBP : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::UInt32 AHFPPJCBBBE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + FMKFIGNHGBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFIGNHGBP_ONEXECUTE_OFFSET))(this);
		}

	};
