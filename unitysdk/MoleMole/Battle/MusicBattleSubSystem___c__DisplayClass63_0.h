#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOLNLIBBDPK.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFA89DD0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__DISPLAYCLASS63_0__SENDRESULT_B__0_OFFSET UNITYSDK_OFFSET(0xFA89DE0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem___c__DisplayClass63_0_TypeDefinitionIndex = 38890;

	class MusicBattleSubSystem___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::GOLNLIBBDPK result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendResult_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__DISPLAYCLASS63_0__SENDRESULT_B__0_OFFSET))(this);
		}
	};
}
