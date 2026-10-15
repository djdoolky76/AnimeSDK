#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class MBLJIEELMKN;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define OMCIPAFIHKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF199C0)
#define OMCIPAFIHKB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBF19880)

inline static constexpr unsigned int OMCIPAFIHKB_TypeDefinitionIndex = 76282;

	class OMCIPAFIHKB : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
		::MBLJIEELMKN* CFEEPFPKAHL; // 0x28
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::MBLJIEELMKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::MBLJIEELMKN*))((::PBYTE)hIl2Cpp + OMCIPAFIHKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCIPAFIHKB_ONEXECUTE_OFFSET))(this);
		}

	};
