#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class NGHEPMFILPE;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define EMHNMDDCHMD_CTOR_OFFSET UNITYSDK_OFFSET(0x16485B90)
#define EMHNMDDCHMD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16485BA0)

inline static constexpr unsigned int EMHNMDDCHMD_TypeDefinitionIndex = 78594;

	class EMHNMDDCHMD : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::NGHEPMFILPE* GOKMOEKCHMD; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::NGHEPMFILPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::NGHEPMFILPE*))((::PBYTE)hIl2Cpp + EMHNMDDCHMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHNMDDCHMD_ONEXECUTE_OFFSET))(this);
		}

	};
