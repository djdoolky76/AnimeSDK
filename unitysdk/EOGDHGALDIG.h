#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define EOGDHGALDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x155BEB90)
#define EOGDHGALDIG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x155BE690)

inline static constexpr unsigned int EOGDHGALDIG_TypeDefinitionIndex = 76281;

	class EOGDHGALDIG : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + EOGDHGALDIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGDHGALDIG_ONEXECUTE_OFFSET))(this);
		}

	};
