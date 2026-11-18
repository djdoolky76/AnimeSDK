#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGFBDEFDLAM;
namespace MoleMole { class UISummerEventPrepPageController; }

#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1562ACF0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___C__DISPLAYCLASS17_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x1562AD00)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___C__DISPLAYCLASS17_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x1562AD40)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPrepPageController___c__DisplayClass17_0_TypeDefinitionIndex = 39407;

	class UISummerEventPrepPageController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::AGFBDEFDLAM* compBtnData; // 0x10
		::MoleMole::UISummerEventPrepPageController* __4__this; // 0x18
		::AGFBDEFDLAM* compBtnDataSkin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___C__DISPLAYCLASS17_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___C__DISPLAYCLASS17_0__ONUIINIT_B__1_OFFSET))(this);
		}
	};
}
