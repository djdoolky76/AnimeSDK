#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
class OABDFLPEHDO;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2_CTOR_OFFSET UNITYSDK_OFFSET(0xD16BAB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0xD170E30)

namespace RPG::Client
{
	template <typename T1, typename T2>
	class GridFightGameRefData___c__DisplayClass165_2 : public ::System::Object
	{
	public:
		::KKJMAOMDCAE_OPIGALIJPOP* finalRole; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2_CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__2(::OABDFLPEHDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OABDFLPEHDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET))(this, a1);
		}

	};
}
