#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLGJDILNNDH;
class LMLNNHKJEIP;

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD59ADF0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__INITPLAYERS_B__2_OFFSET UNITYSDK_OFFSET(0xD59AE00)

namespace RPG::Client
{
	template <typename T>
	class MatchThreeGame___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::LMLNNHKJEIP* playerBasicData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__2(::KLGJDILNNDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLGJDILNNDH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__INITPLAYERS_B__2_OFFSET))(this, a1);
		}

	};
}
