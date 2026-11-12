#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS185_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB35EA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS185_0__ISROLEFINAL_B__0_OFFSET UNITYSDK_OFFSET(0xDB38DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS185_0__ISROLEFINAL_B__1_OFFSET UNITYSDK_OFFSET(0xDB38DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass185_0_TypeDefinitionIndex = 66279;

	class GridFightGameRefData___c__DisplayClass185_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS185_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleFinal_b__0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS185_0__ISROLEFINAL_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _IsRoleFinal_b__1(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS185_0__ISROLEFINAL_B__1_OFFSET))(this, a1);
		}

	};
}
