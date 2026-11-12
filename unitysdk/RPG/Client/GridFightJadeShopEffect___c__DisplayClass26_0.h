#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightJadeShopEffect; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBDA4A0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT___C__DISPLAYCLASS26_0__BUYGOOD_B__0_OFFSET UNITYSDK_OFFSET(0xDBDC310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopEffect___c__DisplayClass26_0_TypeDefinitionIndex = 67254;

	class GridFightJadeShopEffect___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightJadeShopEffect* __4__this; // 0x10
		::System::Int32 slotId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _BuyGood_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT___C__DISPLAYCLASS26_0__BUYGOOD_B__0_OFFSET))(this, a1, a2);
		}

	};
}
