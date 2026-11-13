#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CMMKIMHMDPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A3F50)
#define CMMKIMHMDPH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B1A3E80)

inline static constexpr unsigned int CMMKIMHMDPH_TypeDefinitionIndex = 78585;

	class CMMKIMHMDPH : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::UInt32 ACGJGBJMOJF; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + CMMKIMHMDPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMKIMHMDPH_ONEXECUTE_OFFSET))(this);
		}

	};
