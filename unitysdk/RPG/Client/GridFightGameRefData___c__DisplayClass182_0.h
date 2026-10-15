#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD16EA10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__0_OFFSET UNITYSDK_OFFSET(0xD171270)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__1_OFFSET UNITYSDK_OFFSET(0xD1712B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass182_0_TypeDefinitionIndex = 64740;

	class GridFightGameRefData___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* pred; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __HasRole_b__0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __HasRole_b__1(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS182_0___HASROLE_B__1_OFFSET))(this, a1);
		}

	};
}
