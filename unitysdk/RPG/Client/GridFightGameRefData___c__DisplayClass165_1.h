#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
class OABDFLPEHDO;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD170DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET UNITYSDK_OFFSET(0xD170DF0)

namespace RPG::Client
{
	template <typename T>
	class GridFightGameRefData___c__DisplayClass165_1 : public ::System::Object
	{
	public:
		::KKJMAOMDCAE_OPIGALIJPOP* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__1(::OABDFLPEHDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OABDFLPEHDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET))(this, a1);
		}

	};
}
