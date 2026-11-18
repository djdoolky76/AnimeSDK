#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGFBDEFDLAM;

#define MOLEMOLE_UITOWERDEFENSEPAGECONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11362AC0)
#define MOLEMOLE_UITOWERDEFENSEPAGECONTROLLER___C__DISPLAYCLASS7_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x11362AD0)
#define MOLEMOLE_UITOWERDEFENSEPAGECONTROLLER___C__DISPLAYCLASS7_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x11362B00)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefensePageController___c__DisplayClass7_0_TypeDefinitionIndex = 38495;

	class UITowerDefensePageController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::AGFBDEFDLAM* compBtnDataRole; // 0x10
		::AGFBDEFDLAM* compBtnData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEPAGECONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEPAGECONTROLLER___C__DISPLAYCLASS7_0__ONUIINIT_B__1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEPAGECONTROLLER___C__DISPLAYCLASS7_0__ONUIINIT_B__2_OFFSET))(this);
		}
	};
}
