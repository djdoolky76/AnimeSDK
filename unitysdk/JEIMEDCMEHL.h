#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class EOKKHLOIBIM;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define JEIMEDCMEHL_CTOR_OFFSET UNITYSDK_OFFSET(0x130728A0)
#define JEIMEDCMEHL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x13072650)

inline static constexpr unsigned int JEIMEDCMEHL_TypeDefinitionIndex = 78608;

	class JEIMEDCMEHL : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::EOKKHLOIBIM* AFPNGBFGKCA; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::EOKKHLOIBIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::EOKKHLOIBIM*))((::PBYTE)hIl2Cpp + JEIMEDCMEHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMEDCMEHL_ONEXECUTE_OFFSET))(this);
		}

	};
