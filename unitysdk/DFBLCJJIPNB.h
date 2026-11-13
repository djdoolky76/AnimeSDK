#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class DFFLMEMFPLM;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define DFBLCJJIPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3895E0)
#define DFBLCJJIPNB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B389420)

inline static constexpr unsigned int DFBLCJJIPNB_TypeDefinitionIndex = 78577;

	class DFBLCJJIPNB : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::DFFLMEMFPLM* FFJJIFAJDHJ; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::DFFLMEMFPLM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + DFBLCJJIPNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBLCJJIPNB_ONEXECUTE_OFFSET))(this);
		}

	};
