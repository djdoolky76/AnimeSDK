#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class DFFLMEMFPLM;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define DFBLCJJIPNB_CTOR_OFFSET UNITYSDK_OFFSET(0xE8197B0)
#define DFBLCJJIPNB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE8195F0)

inline static constexpr unsigned int DFBLCJJIPNB_TypeDefinitionIndex = 76246;

	class DFBLCJJIPNB : public ::MLKDDLHNNHH
	{
	public:
		::DFFLMEMFPLM* FFJJIFAJDHJ; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::DFFLMEMFPLM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + DFBLCJJIPNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBLCJJIPNB_ONEXECUTE_OFFSET))(this);
		}

	};
