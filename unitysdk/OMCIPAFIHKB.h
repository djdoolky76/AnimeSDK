#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class MBLJIEELMKN;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define OMCIPAFIHKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF20F70)
#define OMCIPAFIHKB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBF20E30)

	class OMCIPAFIHKB : public ::MLKDDLHNNHH
	{
	public:
		::MBLJIEELMKN* CFEEPFPKAHL; // 0x20
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::MBLJIEELMKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::MBLJIEELMKN*))((::PBYTE)hIl2Cpp + OMCIPAFIHKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCIPAFIHKB_ONEXECUTE_OFFSET))(this);
		}

	};
