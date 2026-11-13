#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define ECKPCCMJAFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DD7E0)
#define ECKPCCMJAFI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C3DD6A0)

inline static constexpr unsigned int ECKPCCMJAFI_TypeDefinitionIndex = 78598;

	class ECKPCCMJAFI : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::UInt64 BIHIHHKEKLB; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt64))((::PBYTE)hIl2Cpp + ECKPCCMJAFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKPCCMJAFI_ONEXECUTE_OFFSET))(this);
		}

	};
