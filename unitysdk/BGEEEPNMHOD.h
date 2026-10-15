#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define BGEEEPNMHOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB17CB20)
#define BGEEEPNMHOD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB17C9A0)

inline static constexpr unsigned int BGEEEPNMHOD_TypeDefinitionIndex = 76271;

	class BGEEEPNMHOD : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::System::UInt32 AOKONCLFKHM; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + BGEEEPNMHOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEEEPNMHOD_ONEXECUTE_OFFSET))(this);
		}

	};
