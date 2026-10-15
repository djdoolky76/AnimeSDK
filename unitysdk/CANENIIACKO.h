#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LGFBMEACHPI;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CANENIIACKO_CTOR_OFFSET UNITYSDK_OFFSET(0xC48C020)
#define CANENIIACKO_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC48BFB0)

inline static constexpr unsigned int CANENIIACKO_TypeDefinitionIndex = 76273;

	class CANENIIACKO : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::LGFBMEACHPI* HPBKIGIFFIA; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::LGFBMEACHPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::LGFBMEACHPI*))((::PBYTE)hIl2Cpp + CANENIIACKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANENIIACKO_ONEXECUTE_OFFSET))(this);
		}

	};
