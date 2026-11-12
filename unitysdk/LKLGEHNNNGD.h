#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AJNJDDFGFJL;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define LKLGEHNNNGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF3590)
#define LKLGEHNNNGD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBFF3330)

inline static constexpr unsigned int LKLGEHNNNGD_TypeDefinitionIndex = 78592;

	class LKLGEHNNNGD : public ::MLKDDLHNNHH
	{
	public:
		::AJNJDDFGFJL* CFGPHKJDPJN; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::AJNJDDFGFJL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::AJNJDDFGFJL*))((::PBYTE)hIl2Cpp + LKLGEHNNNGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLGEHNNNGD_ONEXECUTE_OFFSET))(this);
		}

	};
