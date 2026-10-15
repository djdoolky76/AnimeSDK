#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBILGCPCJOD;
class LMLNNHKJEIP;

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD59B220)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__INITPLAYERS_B__1_OFFSET UNITYSDK_OFFSET(0xD59B230)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass70_0_TypeDefinitionIndex = 65947;

	class MatchThreeGame___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::LMLNNHKJEIP* playerBasicData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__1(::JBILGCPCJOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBILGCPCJOD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__INITPLAYERS_B__1_OFFSET))(this, a1);
		}

	};
}
