#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class IIEKKGNJJMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define EKBCCPLOJPE_CTOR_OFFSET UNITYSDK_OFFSET(0x154FC130)
#define EKBCCPLOJPE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x154FBFF0)

inline static constexpr unsigned int EKBCCPLOJPE_TypeDefinitionIndex = 76262;

	class EKBCCPLOJPE : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::IIEKKGNJJMC* CDEBJIOBPEM; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::IIEKKGNJJMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::IIEKKGNJJMC*))((::PBYTE)hIl2Cpp + EKBCCPLOJPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBCCPLOJPE_ONEXECUTE_OFFSET))(this);
		}

	};
