#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMJOBMIJLD.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC12E0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKGOBTN_B__0_OFFSET UNITYSDK_OFFSET(0x12FC12F0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKGOBTN_B__1_OFFSET UNITYSDK_OFFSET(0x12FC1620)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKGOBTN_B__2_OFFSET UNITYSDK_OFFSET(0x12FC1880)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 75756;

	class UIZenkovWishListkRowWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action* __9__2; // 0x18
		::System::UInt32 srcId; // 0x20
		::HJMJOBMIJLD srcType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickGoBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKGOBTN_B__0_OFFSET))(this);
		}

		::System::Void _OnClickGoBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKGOBTN_B__1_OFFSET))(this);
		}

		::System::Void _OnClickGoBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKGOBTN_B__2_OFFSET))(this);
		}
	};
}
